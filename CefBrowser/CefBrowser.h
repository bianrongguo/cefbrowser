
// CefBrowser.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CCefBrowserApp:
// �йش����ʵ�֣������ CefBrowser.cpp
//

class CCefBrowserApp : public CWinAppEx
{
public:
	CCefBrowserApp();

// ��д
	public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CCefBrowserApp theApp;