#include <linux/errno.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/seq_file.h>
#include <linux/slab.h>
#include <linux/string.h>
#include <linux/crypto.h>
#include <crypto/algapi.h>
#if LINUX_VERSION_IS_GEQ(3,2,0)
#include <linux/cryptouser.h>
#endif
#include <linux/compiler.h>
#include <net/netlink.h>
#include <crypto/kpp.h>
#include <crypto/internal/kpp.h>

