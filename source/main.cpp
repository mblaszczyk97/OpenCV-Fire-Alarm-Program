#include <opencv2\opencv.hpp>
#include <iostream>
#define CVUI_IMPLEMENTATION
#include "cvui.h"
#include "FireMovement.h"
// source: 
//			Advanced Concepts for Intelligent Vision Systems: 11th International - https://books.google.pl/books?id=vUFuCQAAQBAJ&printsec=frontcover&hl=pl#v=onepage&q&f=false
//
using namespace std;
using namespace cv;

int main(void)
{
	namedWindow("Options");
	cvui::init("Options");
	VideoCapture cap;
	cap.open("C:\\path\\to\\your\\video.mp4");
	Mat frame, computerVision;
	Mat options(320, 240, CV_8UC3, Scalar(0, 0, 0));
	const char *theLabelFormat = "%.1Lf";
	int segments = 1;
	cvui::text(options, 1, 1, "Video samples:");
	cvui::text(options, 1, 55, "Error area (contours surface area):");
	cvui::text(options, 1, 125, "Detection method:");
	int optionPicked = 1;
	FireMovement f1;
	while (cap.read(frame))
	{
		if (optionPicked == 1) {
			computerVision = f1.checkRGB(frame);
		}
		else {
			computerVision = f1.checkYCrCb(frame);
		}
		
		cvui::trackbar(options, 11, 70, 220, &f1.errorSize, 1, 100, segments, theLabelFormat, cvui::TRACKBAR_HIDE_VALUE_LABEL, segments);
		if (cvui::button(options, 1, 21, "0")) {
			cap.release();
			cap.open("C:\\path\\to\\your\\videoTest1.mp4");
		}
		if (cvui::button(options, 31, 21, "Video1")) {
			cap.release();
			cap.open("C:\\path\\to\\your\\videoTest2.mp4");
		}
		if (cvui::button(options, 101, 21, "Video2")) {
			cap.release();
			cap.open("C:\\path\\to\\your\\videoTest3.mp4");
		}
		if (cvui::button(options, 171, 21, "Video3")) {
			cap.release();
			cap.open("C:\\path\\to\\your\\videoTest4.mp4");
		}

		if (cvui::button(options, 11, 141, "RGB Detect")) {
			optionPicked = 1;
		}
		if (cvui::button(options, 111, 141, "YCbCr Detect")) {
			optionPicked = 2;
		}

		f1.drawContours(frame, computerVision);

		cvui::update();
		cv::imshow("What computer see", computerVision);
		cv::imshow("Fire", frame); 
		cv::imshow("Options", options);

		if (cv::waitKey(30) == 27) {
			cap.release();
			destroyAllWindows();
			return 0;
		}
	}
	cap.release();
	cv::waitKey(0);

}

