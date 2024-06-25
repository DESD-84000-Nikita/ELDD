
obj-m = pchar.o

modules:
	make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf- -C /home/sunbeam/Desktop/linux/ M=`pwd` modules 

clean:
	make -C /lib/modules/`uname -r`/build M=`pwd` clean

.phony : clean
