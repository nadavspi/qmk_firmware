SRC += nadavspi.c

AUTO_SHIFT_ENABLE = yes
CAPS_WORD_ENABLE = yes

ifeq ($(strip $(FLASH_BOOTLOADER)), yes)
    OPT_DEFS += -DFLASH_BOOTLOADER
endif