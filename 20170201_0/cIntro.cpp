#include "stdafx.h"
#include "cIntro.h"

HRESULT cIntro::init(void)
{
	IsRogo = false;
	_alpha = 0;
	IMAGEMANAGER->addImage("��Ʈ�ι�׶���", "intro_back.bmp",1200,600,true,RGB(255,0,255));
	IMAGEMANAGER->addImage("��Ʈ�ηΰ�", "intro_back2.bmp", 1200, 600, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("��Ʈ���Ͼ��", "intro_white.bmp", 1200, 600, true, RGB(255, 0, 255));

	return S_OK;
}

void cIntro::release(void)
{

}

void cIntro::update(void)
{
	int static nCount = 0;
	nCount++;
	if (nCount>1000)
	{
		nCount = 0;
	}


	if (nCount%1==0)
	{
		_alpha+=10;
	}
	if (_alpha >= 255 && IsRogo == false) 
	{
		IsRogo = true;		
		_alpha = 0;
	}

	if (_alpha >= 255 && IsRogo == true)
	{
		SCENEMANAGER->changeScene("�ε�ȭ��");
	}	
}

void cIntro::render(void)
{
	if (IsRogo==false)
	{
		IMAGEMANAGER->findImage("��Ʈ�ι�׶���")->render(getMemDC());
	}	
	if (IsRogo == true)
	{
		IMAGEMANAGER->findImage("��Ʈ�ηΰ�")->render(getMemDC());
	}

	IMAGEMANAGER->findImage("��Ʈ���Ͼ��")->alphaRender(getMemDC(), _alpha);	
}
