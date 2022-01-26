// mecro.cpp: 구현 파일
//

#include "pch.h"
#include "MFCApplication2.h"
#include "mecro.h"
#include "afxdialogex.h"


// mecro 대화 상자

IMPLEMENT_DYNAMIC(mecro, CDialogEx)

mecro::mecro(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

mecro::~mecro()
{
}

void mecro::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(mecro, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &mecro::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &mecro::OnBnClickedButton2)
END_MESSAGE_MAP()


// mecro 메시지 처리기


void mecro::OnBnClickedButton1()
{
	/*click();	//1~4, 6~9
	esc();
	time();		//6번 정도 제자리 반복
	sides();*/	//A~D 
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void mecro::OnBnClickedButton2()
{
	/*click();	//1~4, 6~9
	esc();
	time();		//6번 정도 제자리 반복
	updown()*/	//W~S
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}
