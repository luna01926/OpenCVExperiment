#include <opencv/cv.h>
#include <opencv/highgui.h>

int main(int argc, char** argv)
{
	int key;
	CvCapture *capture;
	IplImage *frameImage;
	char windowNameCapture[] = "Hello World";
	if ((capture = cvCreateCameraCapture(2)) == NULL)
	{
		printf("ƒJƒƒ‰‚ªŒ©‚Â‚©‚è‚Ü‚¹‚ñ\n");
		key = cvWaitKey(10);
	}
	cvNamedWindow(windowNameCapture, CV_WINDOW_AUTOSIZE);
	while (1) {
		frameImage = cvQueryFrame(capture);
		cvShowImage(windowNameCapture, frameImage);
		key = cvWaitKey(10);
		if (key == 'q') { break; }
	}
	cvReleaseCapture(&capture);
	cvDestroyWindow(windowNameCapture);
	return 0;
}
