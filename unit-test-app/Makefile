#
# This is a project Makefile. It is assumed the directory this Makefile resides in is a
# project subdirectory.
#

PROJECT_NAME := unit-test-app

# ########### NOTE ###############
# Must add here the I2Cbus / SPIbus library path for the TESTS TO WORK
# EXTRA_COMPONENT_DIRS += ${HOME}/esp/libraries/I2Cbus
# EXTRA_COMPONENT_DIRS += ${HOME}/esp/libraries/SPIbus


LCD_COMPONENT_PATH := $(abspath ../components/tft_lcd)
# Add MPU library path
EXTRA_COMPONENT_DIRS += $(LCD_COMPONENT_PATH)
# Add mpu-tests directory as component
EXTRA_COMPONENT_DIRS += $(LCD_COMPONENT_PATH)/test/TftLcd_test
# Add ESP-IDF unity-test-app path
EXTRA_COMPONENT_DIRS += $(IDF_PATH)/tools/unit-test-app/components

# Enable MPU testing
# Note: should be mpu-tests directory
override TEST_COMPONENTS += $(notdir $(LCD_COMPONENT_PATH)/test/mpu-tests)

# Follow the same sdkconfig.defaults from esp-idf unit-test-app
SDKCONFIG_DEFAULTS := $(IDF_PATH)/tools/unit-test-app/sdkconfig.defaults

# ESP-IDF project makefile
include $(IDF_PATH)/make/project.mk