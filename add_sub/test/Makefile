ifeq ($(KERNELRELEASE),)
	KERNELDIR ?= ~/workspace/src/linux-3.14.10 
	PWD := $(shell pwd)
	SYMBOL_INC = $(PWD)/../include
	EXTRA_CFLAG += -I $(SYMBOL_INC)
	KBUILD_EXTRA_SYMBOLS += $(PWD)/../add_sub/Module.symvers 
modules:
	$(MAKE) $(SYMBOL_INC) -C $(KERNELDIR) M=$(PWD) modules
modules_install:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules_install
clean:
	rm -rf *.o *~ core .depend .*.cmd *.ko *.mod.c .tmp_versions
.PHONY: modules modules_install clean
else
	obj-m := test.o
endif
    
