// Sample.cpp : �⺻ ������Ʈ �����Դϴ�.

#include "stdafx.h"
#include "Form1.h"

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace Sample;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// ��Ʈ���� ��������� ���� Windows XP �ð� ȿ���� Ȱ��ȭ�մϴ�.
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// �� â�� ����� �����մϴ�.
	Application::Run(gcnew Form1());
	return 0;
}
