#pragma once
#include "duilib.h"
#include <atlstr.h>



class CFrameWnd: public CXMLWnd
{
public:
	explicit CFrameWnd(LPCTSTR pszXMLPath);
	//	LRESULT HandleMessage(UINT uMsg, WPARAM wParam, LPARAM lParam);
	virtual void InitWindow();
	virtual void Notify(TNotifyUI& msg);
	virtual CControlUI* CreateControl(LPCTSTR pstrClassName);
	/*	LRESULT OnDropFiles(HDROP hDropInfo);*/
	char *w2c(char * pcstr, const wchar_t * pwstr, size_t len);
	void OnExit(TNotifyUI& msg);
	
	
};