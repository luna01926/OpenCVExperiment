/*
* opencv-2.4.5
* sample program
*/

#include <opencv/cv.h>
#include <opencv/highgui.h>

int main()
{
	IplImage* img;
	char imgfile[] = "lena.jpg";
	img = cvLoadImage(imgfile, CV_LOAD_IMAGE_COLOR);
	cvNamedWindow("lena", CV_WINDOW_AUTOSIZE);
	cvShowImage("lena", img);
	cvWaitKey();
	cvDestroyWindow("lena");
	cvReleaseImage(&img);
}