ifeq ($(KERNELRELEASE),)
	KERNELDIR ?= ~/workspace/src/linux-3.14.10 
	PWD := $(shell pwd)
	PRINT_INC = $(PWD)/../include
	EXTRA_CFLAGS += -I $(PRINT_INC)
modules:
	$(MAKE) EXTRA_CFLAGS="$(EXTRA_CFLAGS)" -C $(KERNELDIR) M=$(PWD) modules
modules_install:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules_install
clean:
	rm -rf *.o *~ core .depend .*.cmd *.ko *.mod.c .tmp_versions
.PHONY: modules modules_install clean
else
	obj-m := add_sub.o
endif
    
