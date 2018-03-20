// Copyright (c) 2018 Grumpy Cat Software S.L.
//
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#include <jni.h>

namespace tsa {

namespace library {

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief JNI interface to get the devices info.
 */
JNIEXPORT void JNICALL Java_tsa_Library_info(JNIEnv *env, jobject thisObj);

/**
 * @brief JNI interface to set the back-end.
 *
 * @param backend The desired back-end.
 */
JNIEXPORT void JNICALL Java_tsa_Library_setBackend(JNIEnv *env, jobject thisObj, jint backend);

/**
 * @brief JNI interface to set the device.
 *
 * @param device The desired device.
 */
JNIEXPORT void JNICALL Java_tsa_Library_setDevice(JNIEnv *env, jobject thisObj, jint device);

#ifdef __cplusplus
}
#endif
};  // namespace library
};  // namespace tsa