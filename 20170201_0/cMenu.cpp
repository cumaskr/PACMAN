#include "stdafx.h"
#include "cMenu.h"

HRESULT cMenu::init(void)
{
	
	mapMenuRC.x = WINSIZEX / 2;
	mapMenuRC.y = 100;
	mapMenuRC.rc = RectMakeCenter(mapMenuRC.x, mapMenuRC.y, 500, 100);
	mapChoiceRC.x = WINSIZEX / 2;
	mapChoiceRC.y = 230;
	mapChoiceRC.rc = RectMakeCenter(mapChoiceRC.x, mapChoiceRC.y, 200, 100);
	mapToolRC.x = WINSIZEX / 2;
	mapToolRC.y = 350;
	mapToolRC.rc = RectMakeCenter(mapToolRC.x, mapToolRC.y, 200, 100);
	mapEndRC.x = WINSIZEX / 2;
	mapEndRC.y = 470;
	mapEndRC.rc = RectMakeCenter(mapEndRC.x, mapEndRC.y, 200, 100);

	return S_OK;
}

void cMenu::release(void)
{

}

void cMenu::update(void)
{
	if (PtInRect(&mapChoiceRC.rc, _ptMouse))
	{		
		if (KEYMANAGER->isOnceKeyDown(VK_LBUTTON))
		{
			SCENEMANAGER->changeScene("�ʼ���");
		}
	}
	if (PtInRect(&mapToolRC.rc, _ptMouse))
	{
		if (KEYMANAGER->isOnceKeyDown(VK_LBUTTON))
		{			
			SCENEMANAGER->changeScene("����");								
		}
	}
	if (PtInRect(&mapEndRC.rc, _ptMouse))
	{
		if (KEYMANAGER->isOnceKeyDown(VK_LBUTTON))
		{
			PostQuitMessage(0);
		}
	}

}

void cMenu::render(void)
{
	IMAGEMANAGER->findImage("�޴�_��׶���")->render(getMemDC());	
	IMAGEMANAGER->findImage("�޴�_�޴�")->render(getMemDC(), mapMenuRC.rc.left, mapMenuRC.rc.top);


	if (PtInRect(&mapChoiceRC.rc, _ptMouse)) 
	{
		IMAGEMANAGER->findImage("�޴�_����2")->render(getMemDC(), mapChoiceRC.rc.left, mapChoiceRC.rc.top);
	}
	else
	{
		IMAGEMANAGER->findImage("�޴�_����")->render(getMemDC(), mapChoiceRC.rc.left, mapChoiceRC.rc.top);
	}

	if (PtInRect(&mapToolRC.rc, _ptMouse)) 
	{		
		IMAGEMANAGER->findImage("�޴�_����2")->render(getMemDC(), mapToolRC.rc.left, mapToolRC.rc.top);
	}
	else
	{
		IMAGEMANAGER->findImage("�޴�_����")->render(getMemDC(), mapToolRC.rc.left, mapToolRC.rc.top);
	}
	if (PtInRect(&mapEndRC.rc, _ptMouse)) 
	{
		IMAGEMANAGER->findImage("�޴�_����2")->render(getMemDC(), mapEndRC.rc.left, mapEndRC.rc.top);
	}
	else
	{
		IMAGEMANAGER->findImage("�޴�_����")->render(getMemDC(), mapEndRC.rc.left, mapEndRC.rc.top);
	}

	//RectangleMake(getMemDC(), mapToolRC.rc);
	//RectangleMake(getMemDC(), mapChoiceRC.rc);
	//RectangleMake(getMemDC(), mapMenuRC.rc);			
	//RectangleMake(getMemDC(), mapEndRC.rc);					
}
