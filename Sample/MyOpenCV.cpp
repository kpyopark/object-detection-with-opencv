#include "stdafx.h"

#include "MyOpenCV.h"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

CMyOpenCV myWrapper;

CMyOpenCV::CMyOpenCV(void)
{
}


CMyOpenCV::~CMyOpenCV(void)
{
}

void CMyOpenCV::OpenAndShow(const char* psz_file_name)
{
	Mat image;
	image = imread(psz_file_name, CV_LOAD_IMAGE_COLOR);

	if ( image.data == NULL )
	{
		return;
	}
	namedWindow( "Display window", CV_WINDOW_AUTOSIZE );// Create a window for display.
	imshow( "Display window", image );
}
