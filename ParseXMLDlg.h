
// ParseXMLDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"
#include "rapidxml\rapidxml.hpp"
#include "rapidxml\rapidxml_iterators.hpp"
#include "rapidxml\rapidxml_print.hpp"
#include "rapidxml\rapidxml_utils.hpp"

using namespace rapidxml;

// CParseXMLDlg �Ի���
class CParseXMLDlg : public CDialogEx
{
// ����
public:
	CParseXMLDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_PARSEXML_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnCreatexml();
	void ReadXML(int &iEquipment,int &iGpibAddr);
	CComboBox m_combo_Equipment;
	CComboBox m_Combo_GpibAddr;
};
