# $Id: Makefile for hciconfig.c $

include $(TOPDIR)/rules.mk

PKG_NAME:=hciconfigle
PKG_VERSION:=1.0
PKG_RELEASE:=1

PKG_BUILD_DIR:=$(BUILD_DIR)/hciconfigle

include $(TOPDIR)/package/rules.mk

$(eval $(call PKG_template,HCICONFIGLE,hciconfigle,$(PKG_VERSION)-$(PKG_RELEASE),$(ARCH)))

$(PKG_BUILD_DIR)/.prepared:
	mkdir -p $(PKG_BUILD_DIR)
	touch $@

$(PKG_BUILD_DIR)/.configured:
	touch $@

$(PKG_BUILD_DIR)/.built:
	$(TARGET_CC) $(TARGET_CFLAGS) -I$(STAGING_DIR)/usr/include -L$(STAGING_DIR)/usr/lib -o $(PKG_BUILD_DIR)/hciconfigle hciconfig.c csr.c textfile.c -lbluez-lite
	touch $@

$(IPKG_HCICONFIGLE):
	install -d -m0755 $(IDIR_HCICONFIGLE)/usr/bin
	install -m0755 $(PKG_BUILD_DIR)/hciconfigle $(IDIR_HCICONFIGLE)/usr/bin/
	$(RSTRIP) $(IDIR_HCICONFIGLE)
	$(IPKG_BUILD) $(IDIR_HCICONFIGLE) $(PACKAGE_DIR)
