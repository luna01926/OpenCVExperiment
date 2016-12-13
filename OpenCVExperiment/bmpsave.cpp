/*
* ‰Û‘è5
*/

#include <opencv\cv.h>
#include <opencv\highgui.h>

int main()
{
	IplImage* img;
	IplImage* gray;
	img = cvLoadImage("lena.jpg", CV_LOAD_IMAGE_COLOR);
	gray = cvCreateImage(cvGetSize(img), IPL_DEPTH_8U, 1);
	cvCvtColor(img, gray, CV_BGR2GRAY);

	cvSaveImage("lena_gray.bmp", gray);

	cvReleaseImage(&img);
	cvReleaseImage(&gray);

	return 0;
}