
// zhouyutest.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CzhouyutestApp:
// �йش����ʵ�֣������ zhouyutest.cpp
//

class CzhouyutestApp : public CWinApp
{
public:
	CzhouyutestApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CzhouyutestApp theApp;