# $Id: Makefile for ] $

include $(TOPDIR)/rules.mk

PKG_NAME:=bluez-lite
PKG_VERSION:=1.0
PKG_RELEASE:=1

PKG_BUILD_DIR:=$(BUILD_DIR)/bluez-lite

include $(TOPDIR)/package/rules.mk

$(eval $(call PKG_template,BLUEZ_LITE,bluez-lite,$(PKG_VERSION)-$(PKG_RELEASE),$(ARCH)))

$(PKG_BUILD_DIR)/.prepared:
	mkdir -p $(PKG_BUILD_DIR)
	touch $@

$(PKG_BUILD_DIR)/.configured:
	touch $@

$(PKG_BUILD_DIR)/.built:
	$(TARGET_CC) $(TARGET_CFLAGS) -shared -fPIC -o $(PKG_BUILD_DIR)/libbluez-lite.so bluetooth.c hci.c
	mkdir -p $(STAGING_DIR)/usr/include/bluez-lite
	$(CP) *.h $(STAGING_DIR)/usr/include/bluez-lite/.
	mkdir -p $(STAGING_DIR)/usr/lib
	$(CP) $(PKG_BUILD_DIR)/libbluez-lite.so $(STAGING_DIR)/usr/lib/
	touch $@

install-dev: $(STAGING_DIR)/usr/lib/libbluez-lite.so

uninstall-dev:
	rm -rf $(STAGING_DIR)/usr/include/bluez-lite
	rm -rf $(STAGING_DIR)/usr/lib/libbluez-lite.so

$(IPKG_BLUEZ_LITE):
	install -d -m0755 $(IDIR_BLUEZ_LITE)/usr/lib
	install -m0755 $(PKG_BUILD_DIR)/libbluez-lite.so* $(IDIR_BLUEZ_LITE)/usr/lib
	$(RSTRIP) $(IDIR_BLUEZ_LITE)
	$(IPKG_BUILD) $(IDIR_BLUEZ_LITE) $(PACKAGE_DIR)
