ifeq ($(KERNELRELEASE),)
	KERNELDIR ?= ~/workspace/src/linux-3.14.10 
	PWD := $(shell pwd)
modules:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules
modules_install:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules_install
clean:
	rm -rf *.o *~ core .depend .*.cmd *.ko *.mod.c .tmp_versions
else
	obj-m := hello.o
endif
    
