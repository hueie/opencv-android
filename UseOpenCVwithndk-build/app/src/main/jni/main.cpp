#include <jni.h>
#include "com_tistory_comwebnautes_example_ys_useopencvwithndk_build_MainActivity.h"

#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
using namespace cv;


extern "C"{

    JNIEXPORT void JNICALL
    Java_com_tistory_comwebnautes_example_ys_useopencvwithndk_1build_MainActivity_ConvertRGBtoGray(
            JNIEnv *env,
            jobject  instance,
            jlong matAddrInput,
            jlong matAddrResult){


        Mat &matInput = *(Mat *)matAddrInput;
        Mat &matResult = *(Mat *)matAddrResult;

        cvtColor(matInput, matResult, CV_RGBA2GRAY);


      }
}