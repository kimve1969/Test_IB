
// Test_IB.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CTest_IBApp:
// See Test_IB.cpp for the implementation of this class
//

class CTest_IBApp : public CWinApp
{
public:
	CTest_IBApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CTest_IBApp theApp;