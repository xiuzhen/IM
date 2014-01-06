#include "MainFrame.h"
#ifndef COLORSKIN_HPP
#define COLORSKIN_HPP


using namespace DuiLib;

class ColorSkinWindow : public WindowImplBase
{
public:
	ColorSkinWindow(CMainFrame* main_frame, RECT rcParentWindow);

	LPCTSTR GetWindowClassName() const;

	virtual void OnFinalMessage(HWND hWnd);

	void Notify(TNotifyUI& msg);

	virtual void InitWindow();

	virtual CDuiString GetSkinFile();

	virtual CDuiString GetSkinFolder();

	virtual LRESULT OnKillFocus(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);

private:
	RECT parent_window_rect_;

	CMainFrame* main_frame_;
};

#endif // COLORSKIN_HPP