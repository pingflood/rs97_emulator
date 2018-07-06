/* DO NOT EDIT THIS FILE - it is machine generated */
#include "javavm/export/jni.h"
/* Header for class java/lang/ClassLoader */

#ifndef _CVM_JNI_java_lang_ClassLoader
#define _CVM_JNI_java_lang_ClassLoader
#ifdef __cplusplus
extern "C"{
#endif
/*
 * Class:	java/lang/ClassLoader
 * Method:	InitializeLoaderGlobalRoot
 * Signature:	()V
 */
JNIEXPORT void JNICALL Java_java_lang_ClassLoader_InitializeLoaderGlobalRoot
  (JNIEnv *, jobject);

/*
 * Class:	java/lang/ClassLoader
 * Method:	defineClass0
 * Signature:	(Ljava/lang/String;[BIILjava/security/ProtectionDomain;)Ljava/lang/Class;
 */
JNIEXPORT jclass JNICALL Java_java_lang_ClassLoader_defineClass0
  (JNIEnv *, jobject, jstring, jbyteArray, jint, jint, jobject);

/*
 * Class:	java/lang/ClassLoader
 * Method:	resolveClass0
 * Signature:	(Ljava/lang/Class;)V
 */
JNIEXPORT void JNICALL Java_java_lang_ClassLoader_resolveClass0
  (JNIEnv *, jobject, jclass);

/*
 * Class:	java/lang/ClassLoader
 * Method:	loadBootstrapClass0
 * Signature:	(Ljava/lang/String;)Ljava/lang/Class;
 */
JNIEXPORT jclass JNICALL Java_java_lang_ClassLoader_loadBootstrapClass0
  (JNIEnv *, jclass, jstring);

/*
 * Class:	java/lang/ClassLoader
 * Method:	findLoadedClass0
 * Signature:	(Ljava/lang/String;)Ljava/lang/Class;
 */
JNIEXPORT jclass JNICALL Java_java_lang_ClassLoader_findLoadedClass0
  (JNIEnv *, jobject, jstring);

/*
 * Class:	java/lang/ClassLoader
 * Method:	getCallerClassLoader
 * Signature:	()Ljava/lang/ClassLoader;
 */
JNIEXPORT jobject JNICALL Java_java_lang_ClassLoader_getCallerClassLoader
  (JNIEnv *, jclass);

/*
 * Class:	java/lang/ClassLoader
 * Method:	retrieveDirectives
 * Signature:	()Ljava/lang/AssertionStatusDirectives;
 */
JNIEXPORT jobject JNICALL Java_java_lang_ClassLoader_retrieveDirectives
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif