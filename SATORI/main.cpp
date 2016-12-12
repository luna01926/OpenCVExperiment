/*
* opencv-2.4.5
* sample program
*/

#include <opencv/cv.h>
#include <opencv/highgui.h>

int main()
{
	IplImage* img;																		// �摜�f�[�^���i�[����ϐ�
	char imgfile[] = "lena.jpg";											// �\������摜�̃t�@�C���p�X
	img = cvLoadImage(imgfile, CV_LOAD_IMAGE_COLOR);	// �摜�ǂݍ���
	cvNamedWindow("lena", CV_WINDOW_AUTOSIZE);				// �摜�T�C�Y�ɍ��킹�ăE�B���h�E�𐶐�
	cvShowImage("lena", img);													// �E�B���h�E��\��
	cvWaitKey();																			// �L�[���͑҂�
	cvDestroyWindow("lena");													// �E�B���h�E���폜
	cvReleaseImage(&img);															// �摜�f�[�^��������������
}