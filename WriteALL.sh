#!/bin/sh
uImagePATH="/opt/kernel-3.0.35/arch/arm/boot/uImage"
ubootPATH="/opt/uboot_steve/uboot-imx/u-boot.bin"
ubootexist=0
uImageexist=0
if [ $# -eq 1 ] ; then
    str=$1
    if [ $str = "/dev/sda" -o  $str = "/dev/sdb" -o $str = "/dev/sdc" ] ; then
    	echo "You can not write to this disk $str"
    else
	echo "Ready to write into $str"
	if [ -e $str ] ; then
        	echo "Disk node exist , ready to write image"
		echo "Check if image exist..."
		if [ -e $uImagePATH ] ; then
			uImageexist=1
		fi
		 
		if [ -e $ubootPATH ] ; then
			ubootexist=1     
                fi
		 
		if [ $uImageexist -eq 1 -a $ubootexist -eq 1 ] ; then
			echo "Ready to Write Image to $str"
		dd if=$uImagePATH of=$str bs=512 seek=2048 conv=fsync;
			sleep 1
		dd if=$ubootPATH of=$str bs=512 seek=2 skip=2 conv=fsync;
			sync;
		else
			echo "Image is not exist...exit now"
			exit 1
		fi
	
	else
		echo "Disk node is not exist...exit now"
		exit 1	
		
	fi
    fi
#dd if=./arch/arm/boot/uImage of=$1 bs=512 seek=2048 conv=fsync;

#dd if=/opt/uboot_steve/uboot-imx/ of=$1 bs=512 seek=2 skip=2 conv=fsync
else
	echo "Error!"
fi
