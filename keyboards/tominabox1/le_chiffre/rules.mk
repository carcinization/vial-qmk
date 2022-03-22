# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = atmel-dfu

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = lite      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
NKRO_ENABLE = yes           # Enable N-Key Rollover
RGBLIGHT_ENABLE = yes        # Enable keyboard RGB underglow
ENCODER_ENABLE = yes
OLED_ENABLE = no
RGB_MATRIX_ENABLE = no
RGB_MATRIX_DRIVER = WS2812
LTO_ENABLE = yes
CONSOLE_ENABLE = no
