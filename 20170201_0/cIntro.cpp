#include "stdafx.h"
#include "cIntro.h"

HRESULT cIntro::init(void)
{
	_alpha = 0;
	IMAGEMANAGER->addImage("��Ʈ�ι�׶���", "intro_back.bmp",800,800,true,RGB(255,0,255));
	IMAGEMANAGER->addImage("��Ʈ���Ͼ��", "intro_white.bmp", 800, 800, true, RGB(255, 0, 255));

	return S_OK;
}

void cIntro::release(void)
{

}

void cIntro::update(void)
{
	int static nCount = 0;
	nCount++;
	if (nCount%1==0)
	{
		_alpha+=10;
	}
	if (_alpha>=255)
	{
		SCENEMANAGER->changeScene("�ε�ȭ��");
	}
}

void cIntro::render(void)
{
	IMAGEMANAGER->findImage("��Ʈ�ι�׶���")->render(getMemDC());
	IMAGEMANAGER->findImage("��Ʈ���Ͼ��")->alphaRender(getMemDC(), _alpha);
}
