/*
* â€ëË6,7
*/

#include <opencv/cv.h>
#include <opencv/highgui.h>

int main()
{
	IplImage* img;
	IplImage* gray;
	IplImage* bin;

	const int levels = 128;	// îíÇ∆çïÇÃã´äE

	char imgfile[] = "lena.jpg";
	img = cvLoadImage(imgfile, CV_LOAD_IMAGE_COLOR);

	gray = cvCreateImage(cvGetSize(img), IPL_DEPTH_8U, 1);
	cvCvtColor(img, gray, CV_BGR2GRAY);

	bin = cvCreateImage(cvGetSize(gray), IPL_DEPTH_8U, 1);
	cvThreshold(gray, bin, levels, 255, CV_THRESH_BINARY);

	cvNamedWindow("lena", CV_WINDOW_AUTOSIZE);
	cvNamedWindow("gray", CV_WINDOW_AUTOSIZE);
	cvShowImage("lena", img);
	cvShowImage("gray", gray);
	cvNamedWindow("binary", CV_WINDOW_AUTOSIZE);

	cvShowImage("binary", bin);
	cvWaitKey();
	cvDestroyAllWindows();
	cvReleaseImage(&img);
	cvReleaseImage(&gray);
	cvReleaseImage(&bin);
}