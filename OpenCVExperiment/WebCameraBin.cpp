/*
* â€ëË10,11
*/

#include <opencv/cv.h>
#include <opencv/highgui.h>

int main(int argc, char** argv)
{
	int key;
	CvCapture *capture;
	IplImage *frameImage;
	IplImage *gray;
	IplImage *bin;

	const int level = 64;

	char windowNameCapture[] = "Hello World";
	if ((capture = cvCreateCameraCapture(2)) == NULL)
	{
		printf("ÉJÉÅÉâÇ™å©Ç¬Ç©ÇËÇ‹ÇπÇÒ\n");
		key = cvWaitKey(10);
	}
	cvNamedWindow(windowNameCapture, CV_WINDOW_AUTOSIZE);
	cvNamedWindow("binary", CV_WINDOW_AUTOSIZE);
	while (1) {
		frameImage = cvQueryFrame(capture);
		
		gray = cvCreateImage(cvGetSize(frameImage), IPL_DEPTH_8U, 1);
		cvCvtColor(frameImage, gray, CV_BGR2GRAY);
		bin = cvCreateImage(cvGetSize(frameImage), IPL_DEPTH_8U, 1);
		cvThreshold(gray, bin, level, 255, CV_THRESH_BINARY);

		cvShowImage(windowNameCapture, frameImage);
		cvShowImage("binary", bin);
		key = cvWaitKey(10);
		if (key == 'q') { break; }
		if (key == 's') {
			cvSaveImage("camera_binary.bmp", bin);
		}
	}
	cvReleaseCapture(&capture);
	cvDestroyWindow(windowNameCapture);
	cvDestroyWindow("binary");
	return 0;
}
