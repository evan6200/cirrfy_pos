cmd_arch/arm/mach-mx6/mx6_suspend.o := /opt/freescale/usr/local/gcc-4.4.4-glibc-2.11.1-multilib-1.0/arm-fsl-linux-gnueabi/bin/arm-none-linux-gnueabi-gcc -Wp,-MD,arch/arm/mach-mx6/.mx6_suspend.o.d  -nostdinc -isystem /opt/freescale/usr/local/gcc-4.4.4-glibc-2.11.1-multilib-1.0/arm-fsl-linux-gnueabi/bin/../lib/gcc/arm-fsl-linux-gnueabi/4.4.4/include -I/opt/freescale_sdk/L3.0.35_4.1.0_130816_source/ltib/rpm/BUILD/linux-3.0.35/arch/arm/include -Iarch/arm/include/generated -Iinclude  -include include/generated/autoconf.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-mx6/include -Iarch/arm/plat-mxc/include -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables  -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float        -c -o arch/arm/mach-mx6/mx6_suspend.o arch/arm/mach-mx6/mx6_suspend.S

source_arch/arm/mach-mx6/mx6_suspend.o := arch/arm/mach-mx6/mx6_suspend.S

deps_arch/arm/mach-mx6/mx6_suspend.o := \
    $(wildcard include/config/cache/l2x0.h) \
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
  arch/arm/plat-mxc/include/mach/hardware.h \
    $(wildcard include/config/arch/mx5.h) \
    $(wildcard include/config/arch/mx6.h) \
    $(wildcard include/config/arch/mx3.h) \
    $(wildcard include/config/arch/mx2.h) \
    $(wildcard include/config/mach/mx21.h) \
    $(wildcard include/config/mach/mx27.h) \
    $(wildcard include/config/arch/mx1.h) \
    $(wildcard include/config/arch/mx25.h) \
  /opt/freescale_sdk/L3.0.35_4.1.0_130816_source/ltib/rpm/BUILD/linux-3.0.35/arch/arm/include/asm/sizes.h \
  include/asm-generic/sizes.h \
  arch/arm/plat-mxc/include/mach/mxc.h \
    $(wildcard include/config/soc/imx6q.h) \
    $(wildcard include/config/soc/imx31.h) \
    $(wildcard include/config/soc/imx35.h) \
    $(wildcard include/config/soc/imx37.h) \
    $(wildcard include/config/soc/imx50.h) \
    $(wildcard include/config/soc/imx51.h) \
    $(wildcard include/config/soc/imx53.h) \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  /opt/freescale_sdk/L3.0.35_4.1.0_130816_source/ltib/rpm/BUILD/linux-3.0.35/arch/arm/include/asm/types.h \
  include/asm-generic/int-ll64.h \
  /opt/freescale_sdk/L3.0.35_4.1.0_130816_source/ltib/rpm/BUILD/linux-3.0.35/arch/arm/include/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  arch/arm/plat-mxc/include/mach/mx6.h \
  /opt/freescale_sdk/L3.0.35_4.1.0_130816_source/ltib/rpm/BUILD/linux-3.0.35/arch/arm/include/asm/memory.h \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/page/offset.h) \
    $(wildcard include/config/highmem.h) \
    $(wildcard include/config/dram/size.h) \
    $(wildcard include/config/dram/base.h) \
    $(wildcard include/config/have/tcm.h) \
    $(wildcard include/config/arm/patch/phys/virt.h) \
    $(wildcard include/config/arm/patch/phys/virt/16bit.h) \
  include/linux/const.h \
  arch/arm/plat-mxc/include/mach/memory.h \
    $(wildcard include/config/runtime/phys/offset.h) \
    $(wildcard include/config/arch/mx50.h) \
    $(wildcard include/config/arch/mx51.h) \
    $(wildcard include/config/arch/mx53.h) \
    $(wildcard include/config/mx3/video.h) \
    $(wildcard include/config/mx1/video.h) \
    $(wildcard include/config/video/mx2/hostsupport.h) \
  /opt/freescale_sdk/L3.0.35_4.1.0_130816_source/ltib/rpm/BUILD/linux-3.0.35/arch/arm/include/asm/page.h \
    $(wildcard include/config/cpu/copy/v3.h) \
    $(wildcard include/config/cpu/copy/v4wt.h) \
    $(wildcard include/config/cpu/copy/v4wb.h) \
    $(wildcard include/config/cpu/copy/feroceon.h) \
    $(wildcard include/config/cpu/copy/fa.h) \
    $(wildcard include/config/cpu/sa1100.h) \
    $(wildcard include/config/cpu/xscale.h) \
    $(wildcard include/config/cpu/xsc3.h) \
    $(wildcard include/config/cpu/copy/v6.h) \
    $(wildcard include/config/have/arch/pfn/valid.h) \
  include/asm-generic/getorder.h \
  include/asm-generic/memory_model.h \
    $(wildcard include/config/flatmem.h) \
    $(wildcard include/config/discontigmem.h) \
    $(wildcard include/config/sparsemem/vmemmap.h) \
    $(wildcard include/config/sparsemem.h) \
  /opt/freescale_sdk/L3.0.35_4.1.0_130816_source/ltib/rpm/BUILD/linux-3.0.35/arch/arm/include/asm/hardware/cache-l2x0.h \
  arch/arm/mach-mx6/src-reg.h \

arch/arm/mach-mx6/mx6_suspend.o: $(deps_arch/arm/mach-mx6/mx6_suspend.o)

$(deps_arch/arm/mach-mx6/mx6_suspend.o):
