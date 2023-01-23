ccflags-y += -I$(src) $(call cc-option, -Wframe-larger-than=1280)
ifeq ($(CONFIG_BACKPORT_INTEGRATE),)
obj-m += compat.o
else
obj-y += compat.o
endif
compat-y += main.o

# Kernel backport compatibility code
compat-$(CONFIG_KERNEL_5_15) += backport-5.15.o
compat-$(CONFIG_BPAUTO_BUILD_SYSTEM_DATA_VERIFICATION) += verification/verify.o
compat-$(CONFIG_BPAUTO_BUILD_SYSTEM_DATA_VERIFICATION) += verification/pkcs7.asn1.o
compat-$(CONFIG_BPAUTO_BUILD_SYSTEM_DATA_VERIFICATION) += verification/pkcs7_verify.o
compat-$(CONFIG_BPAUTO_BUILD_SYSTEM_DATA_VERIFICATION) += verification/pkcs7_parser.o
compat-$(CONFIG_BPAUTO_BUILD_SYSTEM_DATA_VERIFICATION) += verification/x509.asn1.o
compat-$(CONFIG_BPAUTO_BUILD_SYSTEM_DATA_VERIFICATION) += verification/x509_akid.asn1.o
compat-$(CONFIG_BPAUTO_BUILD_SYSTEM_DATA_VERIFICATION) += verification/x509_cert_parser.o
compat-$(CONFIG_BPAUTO_BUILD_SYSTEM_DATA_VERIFICATION) += verification/x509_public_key.o
compat-$(CONFIG_BPAUTO_BUILD_SYSTEM_DATA_VERIFICATION) += verification/pkcs7_trust.o
compat-$(CONFIG_BPAUTO_BUILD_SYSTEM_DATA_VERIFICATION) += verification/key.o
compat-$(CONFIG_BPAUTO_BUILD_SYSTEM_DATA_VERIFICATION) += verification/public_key.o
compat-$(CONFIG_BPAUTO_BUILD_SYSTEM_DATA_VERIFICATION) += verification/rsa.o
compat-$(CONFIG_BPAUTO_BUILD_SYSTEM_DATA_VERIFICATION) += verification/bignum.o
compat-$(CONFIG_BPAUTO_BUILD_SYSTEM_DATA_VERIFICATION) += verification/md.o
compat-$(CONFIG_BPAUTO_BUILD_SYSTEM_DATA_VERIFICATION) += verification/md_wrap.o
compat-$(CONFIG_BPAUTO_BUILD_SYSTEM_DATA_VERIFICATION) += verification/sha256.o
compat-$(CONFIG_BPAUTO_BUILD_SYSTEM_DATA_VERIFICATION) += verification/oid.o
compat-$(CONFIG_BPAUTO_BUILD_SYSTEM_DATA_VERIFICATION) += verification/asn1parse.o
compat-$(CONFIG_BPAUTO_BUILD_SYSTEM_DATA_VERIFICATION) += verification/rsapubkey.asn1.o
compat-$(CONFIG_BPAUTO_BUILD_CRYPTO_CMAC) += cmac.o
compat-$(CONFIG_BPAUTO_BUILD_CRYPTO_ECDH) += kpp.o ecc.o ecdh.o ecdh_helper.o

$(obj)/lib-oid_registry.o: $(obj)/oid_registry_data.c

$(obj)/oid_registry_data.c: $(src)/../include/linux/backport-oid_registry.h \
			    $(src)/build_OID_registry
	$(call cmd,build_OID_registry)

quiet_cmd_build_OID_registry = GEN     $@
	cmd_build_OID_registry = perl $(src)/build_OID_registry $< $@
compat-$(CONFIG_BPAUTO_ASN1_DECODER) += lib-asn1_decoder.o
compat-$(CONFIG_BPAUTO_BUILD_SYSTEM_DATA_VERIFICATION) += lib-oid_registry.o
compat-$(CONFIG_BPAUTO_REFCOUNT) += lib-refcount.o
compat-$(CONFIG_BPAUTO_BUILD_WANT_DEV_COREDUMP) += drivers-base-devcoredump.o
compat-$(CONFIG_BPAUTO_RHASHTABLE) += lib-rhashtable.o
cordic-objs += lib-math-cordic.o
obj-$(CONFIG_BPAUTO_BUILD_CORDIC) += cordic.o
compat-$(CONFIG_BPAUTO_PUBLIC_KEY) +=
compat-$(CONFIG_BPAUTO_BUCKET_LOCKS) += lib-bucket_locks.o
compat-$(CONFIG_BPAUTO_PKCS7) +=
compat-$(CONFIG_BPAUTO_BUILD_CRYPTO_LIB_ARC4) += lib-crypto-arc4.o
