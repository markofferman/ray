// Copyright 2017 The Ray Authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_ray_runtime_task_NativeTaskExecutor */

#ifndef _Included_org_ray_runtime_task_NativeTaskExecutor
#define _Included_org_ray_runtime_task_NativeTaskExecutor
#ifdef __cplusplus
extern "C" {
#endif
#undef org_ray_runtime_task_NativeTaskExecutor_NUM_ACTOR_CHECKPOINTS_TO_KEEP
#define org_ray_runtime_task_NativeTaskExecutor_NUM_ACTOR_CHECKPOINTS_TO_KEEP 20L
/*
 * Class:     org_ray_runtime_task_NativeTaskExecutor
 * Method:    nativePrepareCheckpoint
 * Signature: (J)[B
 */
JNIEXPORT jbyteArray JNICALL
Java_org_ray_runtime_task_NativeTaskExecutor_nativePrepareCheckpoint(JNIEnv *, jclass,
                                                                     jlong);

/*
 * Class:     org_ray_runtime_task_NativeTaskExecutor
 * Method:    nativeNotifyActorResumedFromCheckpoint
 * Signature: (J[B)V
 */
JNIEXPORT void JNICALL
Java_org_ray_runtime_task_NativeTaskExecutor_nativeNotifyActorResumedFromCheckpoint(
    JNIEnv *, jclass, jlong, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif
