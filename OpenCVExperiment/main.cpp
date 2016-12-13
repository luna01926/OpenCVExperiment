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
	cvNamedWindow("lenachan", CV_WINDOW_AUTOSIZE);
	cvShowImage("lenachan", img);
	cvWaitKey();
	cvDestroyWindow("lenachan");
	cvReleaseImage(&img);
}