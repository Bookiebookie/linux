#include <linux/module.h>
#include <linux/init.h>
#include <linux/pm_qos.h>
#include <linux/workqueue.h>
#include "backports.h"

MODULE_AUTHOR("Luis R. Rodriguez");
MODULE_DESCRIPTION("Kernel backport module");
MODULE_LICENSE("GPL");

#ifndef CONFIG_KERNEL_NAME
#error You need a CONFIG_KERNEL_NAME
#endif

#ifndef CONFIG_KERNEL_VERSION
#error "You need a CONFIG_KERNEL_VERSION"
#endif

#ifndef CONFIG_VERSION
#error "You need a CONFIG_VERSION"
#endif

#ifdef CONFIG_BPAUTO_BUILD_CRYPTO_CMAC
extern int crypto_cmac_init(void);
extern void crypto_cmac_exit(void);
#endif

#ifdef CONFIG_BPAUTO_BUILD_CRYPTO_ECDH
extern int ecdh_init(void);
extern void ecdh_exit(void);
#endif

static char *backported_kernel_name = CONFIG_KERNEL_NAME;

module_param(backported_kernel_name, charp, 0400);
MODULE_PARM_DESC(backported_kernel_name,
		 "The kernel tree name that was used for this backport (" CONFIG_KERNEL_NAME ")");

#ifdef BACKPORTS_GIT_TRACKED
static char *backports_tracker_id = BACKPORTS_GIT_TRACKED;
module_param(backports_tracker_id, charp, 0400);
MODULE_PARM_DESC(backports_tracker_id,
		 "The version of the tree containing this backport (" BACKPORTS_GIT_TRACKED ")");
#else
static char *backported_kernel_version = CONFIG_KERNEL_VERSION;
static char *backports_version = CONFIG_VERSION;

module_param(backported_kernel_version, charp, 0400);
MODULE_PARM_DESC(backported_kernel_version,
		 "The kernel version that was used for this backport (" CONFIG_KERNEL_VERSION ")");

module_param(backports_version, charp, 0400);
MODULE_PARM_DESC(backports_version,
		 "The git version of the backports tree used to generate this backport (" CONFIG_VERSION ")");

#endif

void backport_dependency_symbol(void)
{
}
EXPORT_SYMBOL_GPL(backport_dependency_symbol);


static int __init backport_init(void)
{
	int ret = devcoredump_init();
	if (ret)
		return ret;


#ifdef CONFIG_BPAUTO_BUILD_CRYPTO_ECDH
	ecdh_init();
#endif
#ifdef CONFIG_BPAUTO_BUILD_CRYPTO_CMAC
	crypto_cmac_init();
#endif
        return 0;
}
subsys_initcall(backport_init);

static void __exit backport_exit(void)
{
#ifdef CONFIG_BPAUTO_BUILD_CRYPTO_ECDH
	ecdh_exit();
#endif
#ifdef CONFIG_BPAUTO_BUILD_CRYPTO_CMAC
	crypto_cmac_exit();
#endif
	devcoredump_exit();
}
module_exit(backport_exit);
