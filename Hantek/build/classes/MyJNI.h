/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class MyJNI */

#ifndef _Included_MyJNI
#define _Included_MyJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     MyJNI
 * Method:    HelloWorld
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_MyJNI_HelloWorld
  (JNIEnv *, jobject);

/*
 * Class:     MyJNI
 * Method:    CallC
 * Signature: (ZBCSIJFDLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_MyJNI_CallC
  (JNIEnv *, jobject, jboolean, jbyte, jchar, jshort, jint, jlong, jfloat, jdouble, jstring);

/*
 * Class:     MyJNI
 * Method:    SetMembers
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_MyJNI_SetMembers
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif