#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_androidx_compose_samples_jni_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}