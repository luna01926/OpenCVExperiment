/*
* opencv-2.4.5
* sample program
*/

#include <opencv/cv.h>
#include <opencv/highgui.h>

int main()
{
	IplImage* img;																		// 画像データを格納する変数
	char imgfile[] = "lena.jpg";											// 表示する画像のファイルパス
	img = cvLoadImage(imgfile, CV_LOAD_IMAGE_COLOR);	// 画像読み込み
	cvNamedWindow("lena", CV_WINDOW_AUTOSIZE);				// 画像サイズに合わせてウィンドウを生成
	cvShowImage("lena", img);													// ウィンドウを表示
	cvWaitKey();																			// キー入力待ち
	cvDestroyWindow("lena");													// ウィンドウを削除
	cvReleaseImage(&img);															// 画像データをメモリから解放
}