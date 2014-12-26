cmd_arch/arm/boot/Image := /opt/freescale/usr/local/gcc-4.4.4-glibc-2.11.1-multilib-1.0/arm-fsl-linux-gnueabi/bin/arm-none-linux-gnueabi-objcopy -O binary -R .comment -S  vmlinux arch/arm/boot/Image
