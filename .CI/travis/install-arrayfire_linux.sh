#!/bin/bash
# Copyright (c) 2018 Shapelets.io
#
# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

# Checks if the file already exists
if [ ! -e "${TRAVIS_BUILD_DIR}/arrayfire/ArrayFire-v3.5.1_Linux_x86_64.sh" ]; then
    mkdir -p arrayfire && cd arrayfire
    wget http://arrayfire.s3.amazonaws.com/3.5.1/ArrayFire-v3.5.1_Linux_x86_64.sh
    cd ..
fi

# Installs arrayfire
sudo mkdir -p /opt/arrayfire
cd arrayfire
chmod +x ArrayFire-v3.5.1_Linux_x86_64.sh
sudo ./ArrayFire-v3.5.1_Linux_x86_64.sh --prefix=/opt/arrayfire --skip-license
cd ..