#include <opencv/cv.h>
#include <opencv/highgui.h>

int main()
{
	IplImage* img;
	IplImage* gray;

	char imgfile[] = "lena.jpg";
	img = cvLoadImage(imgfile, CV_LOAD_IMAGE_COLOR);

	gray = cvCreateImage(cvGetSize(img), IPL_DEPTH_8U, 1);
	cvCvtColor(img, gray, CV_BGR2GRAY);

	cvNamedWindow("lena", CV_WINDOW_AUTOSIZE);
	cvNamedWindow("lena_gray", CV_WINDOW_AUTOSIZE);
	cvShowImage("lena", img);
	cvShowImage("lena_gray", gray);
	cvWaitKey();
	cvDestroyAllWindows();
	cvReleaseImage(&img);
	cvReleaseImage(&gray);
}