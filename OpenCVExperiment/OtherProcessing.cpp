/*
* ‰Û‘è8
*/

#include <opencv/cv.h>
#include <opencv/highgui.h>

int main()
{
	IplImage* img;
	IplImage* gray;
	IplImage* bin;
	IplImage* other;

	const int levels = 128;

	char imgfile[] = "lena.jpg";
	img = cvLoadImage(imgfile, CV_LOAD_IMAGE_COLOR);

	gray = cvCreateImage(cvGetSize(img), IPL_DEPTH_8U, 1);
	cvCvtColor(img, gray, CV_BGR2GRAY);

	bin = cvCreateImage(cvGetSize(gray), IPL_DEPTH_8U, 1);
	cvThreshold(gray, bin, levels, 255, CV_THRESH_BINARY);

	other = cvCreateImage(cvSize(img->width/2,img->height/2), IPL_DEPTH_8U, 3);
	cvResize(img, other, CV_INTER_NN);

	cvNamedWindow("lena", CV_WINDOW_AUTOSIZE);
	cvNamedWindow("gray", CV_WINDOW_AUTOSIZE);
	cvNamedWindow("binary", CV_WINDOW_AUTOSIZE);
	cvNamedWindow("other", CV_WINDOW_AUTOSIZE);

	cvShowImage("lena", img);
	cvShowImage("gray", gray);
	cvShowImage("binary", bin);
	cvShowImage("other", other);
	cvWaitKey();
	cvDestroyAllWindows();
	cvReleaseImage(&img);
	cvReleaseImage(&gray);
	cvReleaseImage(&bin);
	cvReleaseImage(&other);
}