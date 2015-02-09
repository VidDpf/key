// key3.cpp : 定义控制台应用程序的入口点。
//
#include "atltypes.h"
#include "stdafx.h"
#include <Windows.h>
#include <WinUser.h>
#include <stdlib.h>

int _tmain(int argc, _TCHAR* argv[])
{
	Point p;
	keybd_event(66,0,0,0);
	keybd_event(66,0,KEYEVENTF_KEYUP,0);
	system("pause");
	keybd_event(18,0,0,0);
	keybd_event(115,0,0,0);
	keybd_event(115,0,KEYEVENTF_KEYUP,0);
	keybd_event(18,0,KEYEVENTF_KEYUP,0);
	Sleep(300);
	keybd_event(34,0,0,0);
	system("pause");
	return 0;
}

