/* DO NOT EDIT THIS FILE - it is machine generated */
#include "javavm/export/jni.h"
/* Header for class java/lang/System */

#ifndef _CVM_JNI_java_lang_System
#define _CVM_JNI_java_lang_System
#ifdef __cplusplus
extern "C"{
#endif
/*
 * Class:	java/lang/System
 * Method:	setIn0
 * Signature:	(Ljava/io/InputStream;)V
 */
JNIEXPORT void JNICALL Java_java_lang_System_setIn0
  (JNIEnv *, jclass, jobject);

/*
 * Class:	java/lang/System
 * Method:	setOut0
 * Signature:	(Ljava/io/PrintStream;)V
 */
JNIEXPORT void JNICALL Java_java_lang_System_setOut0
  (JNIEnv *, jclass, jobject);

/*
 * Class:	java/lang/System
 * Method:	setErr0
 * Signature:	(Ljava/io/PrintStream;)V
 */
JNIEXPORT void JNICALL Java_java_lang_System_setErr0
  (JNIEnv *, jclass, jobject);

/*
 * Class:	java/lang/System
 * Method:	currentTimeMillis
 * Signature:	()J
 */
JNIEXPORT jlong JNICALL Java_java_lang_System_currentTimeMillis
  (JNIEnv *, jclass);

/*
 * Class:	java/lang/System
 * Method:	arraycopy
 * Signature:	(Ljava/lang/Object;ILjava/lang/Object;II)V
 */
JNIEXPORT void JNICALL Java_java_lang_System_arraycopy
  (JNIEnv *, jclass, jobject, jint, jobject, jint, jint);

/*
 * Class:	java/lang/System
 * Method:	identityHashCode
 * Signature:	(Ljava/lang/Object;)I
 */
JNIEXPORT jint JNICALL Java_java_lang_System_identityHashCode
  (JNIEnv *, jclass, jobject);

/*
 * Class:	java/lang/System
 * Method:	initProperties
 * Signature:	(Ljava/util/Properties;)Ljava/util/Properties;
 */
JNIEXPORT jobject JNICALL Java_java_lang_System_initProperties
  (JNIEnv *, jclass, jobject);

/*
 * Class:	java/lang/System
 * Method:	initCldcMidpProperties
 * Signature:	(Ljava/util/Properties;)Ljava/util/Properties;
 */
JNIEXPORT jobject JNICALL Java_java_lang_System_initCldcMidpProperties
  (JNIEnv *, jclass, jobject);

/*
 * Class:	java/lang/System
 * Method:	mapLibraryName
 * Signature:	(Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_java_lang_System_mapLibraryName
  (JNIEnv *, jclass, jstring);

/*
 * Class:	java/lang/System
 * Method:	getCallerClass
 * Signature:	()Ljava/lang/Class;
 */
JNIEXPORT jclass JNICALL Java_java_lang_System_getCallerClass
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif