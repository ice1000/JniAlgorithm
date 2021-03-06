/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_algo4j_math_Matrix */

#ifndef _Included_org_algo4j_math_Matrix
#define _Included_org_algo4j_math_Matrix
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_algo4j_math_Matrix
 * Method:    newMatrix
 * Signature: (II)J
 */
JNIEXPORT jlong JNICALL Java_org_algo4j_math_Matrix_newMatrix
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     org_algo4j_math_Matrix
 * Method:    makeClone
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_algo4j_math_Matrix_makeClone
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_algo4j_math_Matrix
 * Method:    get
 * Signature: (JII)D
 */
JNIEXPORT jdouble JNICALL Java_org_algo4j_math_Matrix_get
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     org_algo4j_math_Matrix
 * Method:    set
 * Signature: (JIID)V
 */
JNIEXPORT void JNICALL Java_org_algo4j_math_Matrix_set
  (JNIEnv *, jobject, jlong, jint, jint, jdouble);

/*
 * Class:     org_algo4j_math_Matrix
 * Method:    transpose
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_algo4j_math_Matrix_transpose
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_algo4j_math_Matrix
 * Method:    invert
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_algo4j_math_Matrix_invert
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_algo4j_math_Matrix
 * Method:    multiply
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_algo4j_math_Matrix_multiply
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_algo4j_math_Matrix
 * Method:    getRowSize
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_algo4j_math_Matrix_getRowSize
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_algo4j_math_Matrix
 * Method:    getColumnSize
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_algo4j_math_Matrix_getColumnSize
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_algo4j_math_Matrix
 * Method:    determinant
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_algo4j_math_Matrix_determinant
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_algo4j_math_Matrix
 * Method:    free
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_algo4j_math_Matrix_free
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
