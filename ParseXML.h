
// ParseXML.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CParseXMLApp:
// �йش����ʵ�֣������ ParseXML.cpp
//

class CParseXMLApp : public CWinApp
{
public:
	CParseXMLApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CParseXMLApp theApp;