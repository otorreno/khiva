// Copyright (c) 2018 Grumpy Cat Software S.L.
//
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#include <arrayfire.h>
#include <tsa/library.h>

void tsa::library::backendInfo() { af::info(); }

void tsa::library::setBackend(tsa::library::Backend be) { af::setBackend(static_cast<af::Backend>(be)); }

void tsa::library::setDevice(int device) { af::setDevice(device); }