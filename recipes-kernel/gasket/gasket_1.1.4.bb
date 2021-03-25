#
# Copyright (c) Siemens AG, 2021
#
# Authors:
#  Jan Kiszka <jan.kiszka@siemens.com>
#
# This file is subject to the terms and conditions of the MIT License.  See
# COPYING.MIT file in the top-level directory.
#

require recipes-kernel/linux-module/module.inc

SRC_URI += "git://github.com/google/gasket-driver.git;protocol=https;branch=main"
SRCREV = "a6a43f3c6acd67ac5c40d6996fe33ff85c28fa22"

S = "${WORKDIR}/git/src"
