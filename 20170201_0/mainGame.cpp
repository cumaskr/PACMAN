#include "stdafx.h"
#include "mainGame.h"
//=============================================================
//	## init(void) ## �ʱ�ȭ
//=============================================================
HRESULT mainGame::init(void)
{
	gameNode::init(TRUE);
	
	//������ ���ΰ��� Ŭ���� �ȿ����� ���鸸 �����Ѵ�
	//�׸��� ������ ������ ���ΰ��ӿ����� �ϸ� �ȴ�
	/*���߰�*/
	//SCENEMANAGER->addScene("�ȼ��浹", new pixelCollision);
	//SCENEMANAGER->addScene("ini", new iniTestScene);
	//SCENEMANAGER->addScene("����", new soundTestScene);
	//SCENEMANAGER->addScene("��ũ����", new tankGameScene);
	//SCENEMANAGER->addScene("���׽�Ʈ", new sceneTest);	
	//�Ѹǿ��� ���̴¾���!
	SCENEMANAGER->addScene("��Ʈ��", new cIntro);
	SCENEMANAGER->addScene("�ε�ȭ��", new loadingScene);			
	SCENEMANAGER->addScene("���θ޴�", new cMenu);
	SCENEMANAGER->addScene("����", new pacmanMapScene);
	SCENEMANAGER->addScene("�ʼ���", new cMapChoice);
	
	/*ó���� ����*/
	SCENEMANAGER->changeScene("��Ʈ��");

	return S_OK;
}
//=============================================================
//	## release(void) ## ����
//=============================================================
void mainGame::release(void)
{
	gameNode::release();
}
//=============================================================
//	## update(void) ## ������Ʈ
//=============================================================
void mainGame::update(void)
{
	gameNode::update();

	//���Ŵ��� ������Ʈ
	SCENEMANAGER->update();
}
//=============================================================
//	## render(void) ## ����
//=============================================================
void mainGame::render(void)
{
	//��� �� ��Ʈ�� (������ �׳� �״�� �Ѱ�!!)
	PatBlt(getMemDC(), 0, 0, WINSIZEX, WINSIZEY, WHITENESS);
//=============================================================
	
	//���Ŵ��� ����
	SCENEMANAGER->render();

	if (KEYMANAGER->isToggleKey(VK_F12))
	{
		//Ÿ�ӸŴ��� ����
		TIMEMANAGER->render(getMemDC());
	}

//=============================================================
	//������� ������ HDC�� �׸��� (������ �״�� �Ѱ�!!)
	this->getBackBuffer()->render(getHDC());
}