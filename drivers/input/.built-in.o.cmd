cmd_drivers/input/built-in.o :=  /opt/freescale/usr/local/gcc-4.4.4-glibc-2.11.1-multilib-1.0/arm-fsl-linux-gnueabi/bin/arm-none-linux-gnueabi-ld -EL    -r -o drivers/input/built-in.o drivers/input/input-core.o drivers/input/input-polldev.o drivers/input/mousedev.o drivers/input/evdev.o drivers/input/keyboard/built-in.o drivers/input/touchscreen/built-in.o drivers/input/misc/built-in.o 