/*
*	ÉåÉ|Å[Égâ€ëË2
*/

#include <opencv/cv.h>
#include <opencv/highgui.h>

int main() 
{
	IplImage* img;
	img = cvLoadImage("lena.jpg", CV_LOAD_IMAGE_COLOR);

	cvNamedWindow("not_lena", CV_WINDOW_AUTOSIZE);
	cvShowImage("not_lena", img);
	cvWaitKey();
	cvDestroyWindow("not_lena");
	cvReleaseImage(&img);
}