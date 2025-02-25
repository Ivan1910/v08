#pragma once
#include "resource.h"	

class MainDlg : public CDialog
{
public:
	MainDlg(CWnd* pParent = NULL);	
	enum { IDD = IDD_V8_DIALOG };

protected:
	void DoDataExchange(CDataExchange* pDX) override;
	HICON m_hIcon;
	BOOL OnInitDialog() override;
	virtual void OnOK();
	DECLARE_MESSAGE_MAP()

public:
	CListCtrl items;
	afx_msg void add();
	afx_msg void del();
};