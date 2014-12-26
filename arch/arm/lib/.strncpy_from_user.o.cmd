cmd_arch/arm/lib/strncpy_from_user.o := /opt/freescale/usr/local/gcc-4.4.4-glibc-2.11.1-multilib-1.0/arm-fsl-linux-gnueabi/bin/arm-none-linux-gnueabi-gcc -Wp,-MD,arch/arm/lib/.strncpy_from_user.o.d  -nostdinc -isystem /opt/freescale/usr/local/gcc-4.4.4-glibc-2.11.1-multilib-1.0/arm-fsl-linux-gnueabi/bin/../lib/gcc/arm-fsl-linux-gnueabi/4.4.4/include -I/opt/freescale_sdk/L3.0.35_4.1.0_130816_source/ltib/rpm/BUILD/linux-3.0.35/arch/arm/include -Iarch/arm/include/generated -Iinclude  -include include/generated/autoconf.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-mx6/include -Iarch/arm/plat-mxc/include -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables  -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float        -c -o arch/arm/lib/strncpy_from_user.o arch/arm/lib/strncpy_from_user.S

source_arch/arm/lib/strncpy_from_user.o := arch/arm/lib/strncpy_from_user.S

deps_arch/arm/lib/strncpy_from_user.o := \
  /opt/freescale_sdk/L3.0.35_4.1.0_130816_source/ltib/rpm/BUILD/linux-3.0.35/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \
  include/linux/linkage.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  /opt/freescale_sdk/L3.0.35_4.1.0_130816_source/ltib/rpm/BUILD/linux-3.0.35/arch/arm/include/asm/linkage.h \
  /opt/freescale_sdk/L3.0.35_4.1.0_130816_source/ltib/rpm/BUILD/linux-3.0.35/arch/arm/include/asm/assembler.h \
    $(wildcard include/config/cpu/feroceon.h) \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/smp.h) \
  /opt/freescale_sdk/L3.0.35_4.1.0_130816_source/ltib/rpm/BUILD/linux-3.0.35/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/cpu/endian/be8.h) \
    $(wildcard include/config/arm/thumb.h) \
  /opt/freescale_sdk/L3.0.35_4.1.0_130816_source/ltib/rpm/BUILD/linux-3.0.35/arch/arm/include/asm/hwcap.h \
  /opt/freescale_sdk/L3.0.35_4.1.0_130816_source/ltib/rpm/BUILD/linux-3.0.35/arch/arm/include/asm/domain.h \
    $(wildcard include/config/io/36.h) \
    $(wildcard include/config/cpu/use/domains.h) \
  /opt/freescale_sdk/L3.0.35_4.1.0_130816_source/ltib/rpm/BUILD/linux-3.0.35/arch/arm/include/asm/errno.h \
  include/asm-generic/errno.h \
  include/asm-generic/errno-base.h \

arch/arm/lib/strncpy_from_user.o: $(deps_arch/arm/lib/strncpy_from_user.o)

$(deps_arch/arm/lib/strncpy_from_user.o):
