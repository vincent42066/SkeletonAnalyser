#include <iostream>
#include<opencv2/opencv.hpp>
#include "op.h"
using namespace std;
int main() {
    string videopath="/home/litchi/data/20193.mp4";
    cv::VideoCapture capture;
    cv::Mat frame;
    frame= capture.open(videopath);
    if(!capture.isOpened())
    {
        cout<<"cant open"<<endl;
        return -1;
    }
    OpenPose op;
    while(capture.read(frame)){
        string point = op.forward(frame);
        std::cout<<point;
    }
}