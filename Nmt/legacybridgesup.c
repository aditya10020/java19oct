#include "LegacyBridge.h"
#include <stdlib.h>

extern jlong GCD(jlong, jlong);

JNIEXPORT jlong JNICALL Java_LegacyBridge_gcdOfTwo(JNIEnv* env, jclass cls, jlong first, jlong second)
{
	return GCD(first, second);
}



