# Building

## OpenWrt components 

The original GPL source code was downloaded from: https://dl.meraki.net/wired-14-40-mx80-20200430.tar.bz2

```
cd meraki-firmware/openwrt
cp config-wired-powerpc-3.4 .config
make oldconfig
make -j1 BOARD=wired-powerpc-3.4 OPENWRT_EXTRA_BOARD_SUFFIX=_wired_3.4
```

## Kernel
```
cd meraki-firmware/linux-3.4
cp ../openwrt/target/linux/wired-powerpc-3.4/config .config
make CROSS_COMPILE=../openwrt/staging_dir_powerpc_nofpu_wired_3.4/bin/powerpc-linux-uclibc- ARCH=powerpc oldconfig
make CROSS_COMPILE=../openwrt/staging_dir_powerpc_nofpu_wired_3.4/bin/powerpc-linux-uclibc- ARCH=powerpc prepare
touch rootlist
make CROSS_COMPILE=../openwrt/staging_dir_powerpc_nofpu_wired_3.4/bin/powerpc-linux-uclibc- ARCH=powerpc vmlinux
```

## u-boot

The original GPL source code was downloaded from: https://dl.meraki.net/U-boot-MX80-20171114.tar.bz2

```
export CROSS_COMPILE=/path/to/powerpc-cross-toolchain
cd U-boot.MX80
make meraki_nand_config
make u-boot.bin
```
