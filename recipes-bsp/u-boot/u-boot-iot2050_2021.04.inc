#
# Copyright (c) Siemens AG, 2020-2022
#
# Authors:
#  Jan Kiszka <jan.kiszka@siemens.com>
#  Su Baocheng <baocheng.su@siemens.com>
#
# This file is subject to the terms and conditions of the MIT License.  See
# COPYING.MIT file in the top-level directory.
#

require u-boot-iot2050.inc

SRC_URI += " \
    https://ftp.denx.de/pub/u-boot/u-boot-${PV}.tar.bz2 \
    file://0001-arm-mach-k3-am6_init-Prioritize-MSMC-traffic-over-DD.patch \
    file://0002-arm-dts-Add-IOT2050-device-tree-files.patch \
    file://0003-board-siemens-Add-support-for-SIMATIC-IOT2050-device.patch \
    file://0004-arm64-dts-ti-k3-am65-mcu-Add-RTI-watchdog-entry.patch \
    file://0005-watchdog-rti_wdt-Add-support-for-loading-firmware.patch \
    file://0006-watchdog-Allow-to-use-CONFIG_WDT-without-starting-wa.patch \
    file://0007-iot2050-Enable-watchdog-support-but-do-not-auto-star.patch \
    file://0008-sf-Querying-write-protect-status-before-operating-th.patch \
    file://0009-boards-siemens-iot2050-Ignore-network-errors-during-.patch \
    file://0010-gpio-da8xx_gpio-Fix-gpio-name-with-address.patch \
    file://0011-board-siemens-iot2050-get-and-set-m.2-releated-infor.patch \
    file://0012-board-siemes-iot2050-use-the-named-gpio-to-control-t.patch \
    file://0013-arm-dts-Add-the-iot2050-advanced-m2-variant.patch \
    file://0014-arm-dts-add-the-m.2-support.patch \
    file://0015-iot2050-Enable-gpio-support.patch \
    file://0016-iot2050-Enable-set-expr-command.patch \
    file://0017-HACK-add-delay-to-wait-enable-output-stable.patch \
    "

SRC_URI[sha256sum] = "0d438b1bb5cceb57a18ea2de4a0d51f7be5b05b98717df05938636e0aadfe11a"

S = "${WORKDIR}/u-boot-${PV}"
