#include "stdafx.h"
#include "loadingScene.h"

HRESULT loadingScene::init(void)
{
	//�ε�Ŭ���� ���� �� �ʱ�ȭ
	_loading = new loading;
	_loading->init();

	//�̹��� �� ���� �ε�
	this->loadingImage();
	this->loadingSound();

	return S_OK;
}

void loadingScene::release(void)
{
	//�ε�Ŭ���� ����
	SAFE_DELETE(_loading);
}

void loadingScene::update(void)
{
	//�ε�Ŭ���� ������Ʈ
	_loading->update();

	if (_loading->loadingDone())
	{
		if (KEYMANAGER->isOnceKeyDown(VK_RETURN))
		{
			//�ε��� �Ϸ� ������ ������
			SCENEMANAGER->changeScene("���θ޴�");
		}
	}
}

void loadingScene::render(void)
{
	//�ε�Ŭ���� ����
	_loading->render();
}

//�ε��̹��� �Լ�(�̰��� �̹����� ���� �־��)
void loadingScene::loadingImage(void)
{
	//_loading->loadImage();
	//_loading->loadFrameImage();

///////////////////////////////////////////////////////////////////////////////////////////////////////////����
	_loading->loadImage("����50", "mapchoice_white.bmp", 50, 50, true, RGB(255, 0, 255));
	_loading->loadImage("�޴�_�޴�", "menu_1.bmp", 500, 100, true, RGB(255, 0, 255));
	_loading->loadImage("�޴�_����", "menu_2.bmp", 200, 100, true, RGB(255, 0, 255));
	_loading->loadImage("�޴�_����2", "menu_2_big.bmp", 210, 110, true, RGB(255, 0, 255));
	_loading->loadImage("�޴�_����", "menu_3.bmp", 200, 100, true, RGB(255, 0, 255));
	_loading->loadImage("�޴�_����2", "menu_3_big.bmp", 210, 110, true, RGB(255, 0, 255));
	_loading->loadImage("�޴�_����", "menu_4.bmp", 200, 100, true, RGB(255, 0, 255));
	_loading->loadImage("�޴�_����2", "menu_4_big.bmp", 210, 110, true, RGB(255, 0, 255));

	_loading->loadImage("����_��׶���", "choice_back.bmp", WINSIZEX, WINSIZEY, true, RGB(255, 0, 255));
	_loading->loadImage("����_��׶���2", "choice_back2.bmp", WINSIZEX, WINSIZEY, true, RGB(255, 0, 255));
	_loading->loadImage("����_�޴�", "choice_menu.bmp", 200, 100, true, RGB(255, 0, 255));
	_loading->loadImage("����_�޴�2", "choice_menu2.bmp", 200, 100, true, RGB(255, 0, 255));
	_loading->loadImage("����_�޴�3", "choice_menu2_big.bmp", 210, 110, true, RGB(255, 0, 255));
	_loading->loadImage("����_��1", "choice_map1.bmp", 250, 150, true, RGB(255, 0, 255));
	_loading->loadImage("����_��2", "choice_map2.bmp", 250, 150, true, RGB(255, 0, 255));
	_loading->loadImage("����_��3", "choice_map3.bmp", 250, 150, true, RGB(255, 0, 255));
	_loading->loadImage("����_��4", "choice_map4.bmp", 250, 150, true, RGB(255, 0, 255));
	_loading->loadImage("����_��5", "choice_map5.bmp", 250, 150, true, RGB(255, 0, 255));
	_loading->loadFrameImage("����_��ư", "choice_button.bmp", 100, 50, 2, 1, true, RGB(255, 0, 255));
	_loading->loadFrameImage("����_��ư2", "choice_button_big.bmp", 110, 60, 2, 1, true, RGB(255, 0, 255));
	_loading->loadImage("�޴�_�̸�1", "choice_name1.bmp", 300, 70, true, RGB(255, 0, 255));
	_loading->loadImage("�޴�_�̸�2", "choice_name2.bmp", 300, 70, true, RGB(255, 0, 255));
	_loading->loadImage("�޴�_�̸�3", "choice_name3.bmp", 300, 70, true, RGB(255, 0, 255));
	_loading->loadImage("�޴�_�̸�4", "choice_name4.bmp", 300, 70, true, RGB(255, 0, 255));
	_loading->loadImage("�޴�_�̸�5", "choice_name5.bmp", 300, 70, true, RGB(255, 0, 255));


///////////////////////////////////////////////////////////////////////////////////////////////////////////����
	_loading->loadFrameImage("pacmanMap", "pacmanMap1.bmp", 600, 300, 20, 10);
	//_loading->loadImage("maptooMenu", "maptooMenu0.bmp", 20, 30, true, RGB(255, 0, 255));
	_loading->loadImage("ChangeSampleImgMenu", "ChangeSampleImgMenu.bmp", 20, 50, true, RGB(255, 0, 255));
	_loading->loadImage("ChangeSampleImgMenu2", "ChangeSampleImgMenu2.bmp", 20, 50, true, RGB(255, 0, 255));

	//������ ���� �̹�����
	_loading->loadImage("maptooMenu", "maptooMenu0.bmp", 20, 30, true, RGB(255, 0, 255));
	_loading->loadImage("maptooMenu1", "maptooMenu1.bmp", 20, 30, true, RGB(255, 0, 255));
	_loading->loadImage("ChangeSampleImgMenu", "ChangeSampleImgMenu.bmp", 20, 50, true, RGB(255, 0, 255));
	_loading->loadImage("ChangeSampleImgMenu2", "ChangeSampleImgMenu2.bmp", 20, 50, true, RGB(255, 0, 255));
	_loading->loadImage("ChangeSampleImgMenu3", "ChangeSampleImgMenu3.bmp", 20, 50, true, RGB(255, 0, 255));
	_loading->loadImage("ChangeSampleImgMenu4", "ChangeSampleImgMenu4.bmp", 20, 50, true, RGB(255, 0, 255));
	_loading->loadImage("save", "save.bmp", 70, 50, true, RGB(255, 0, 255));
	_loading->loadImage("saveBig", "saveBig.bmp", 105, 70, true, RGB(255, 0, 255));
	_loading->loadImage("load", "load.bmp", 70, 50, true, RGB(255, 0, 255));
	_loading->loadImage("loadBig", "loadBig.bmp", 105, 70, true, RGB(255, 0, 255));
	_loading->loadImage("back", "back.bmp", 70, 50, true, RGB(255, 0, 255));
	_loading->loadImage("backBig", "backBig.bmp", 105, 70, true, RGB(255, 0, 255));
	_loading->loadImage("draw", "draw.bmp", 83, 50, true, RGB(255, 0, 255));
	_loading->loadImage("drawBig", "drawBig.bmp", 105, 70, true, RGB(255, 0, 255));
	_loading->loadImage("map", "map.bmp", 70, 50, true, RGB(255, 0, 255));
	_loading->loadImage("mapBig", "mapBig.bmp", 105, 70, true, RGB(255, 0, 255));
	_loading->loadFrameImage("maptoolPacmanAny", "maptoolPacmanAny.bmp", 102, 70, 3, 2, true, RGB(255, 0, 255));
	_loading->loadFrameImage("maptoolEnemyAny0", "maptoolEnemyAny0.bmp", 76, 70, 2, 2, true, RGB(255, 0, 255));
	_loading->loadFrameImage("maptoolEnemyAny1", "maptoolEnemyAny1.bmp", 76, 70, 2, 2, true, RGB(255, 0, 255));
	_loading->loadFrameImage("maptoolEnemyAny2", "maptoolEnemyAny2.bmp", 76, 70, 2, 2, true, RGB(255, 0, 255));
	_loading->loadFrameImage("maptoolEnemyAny3", "maptoolEnemyAny3.bmp", 76, 70, 2, 2, true, RGB(255, 0, 255));
	_loading->loadFrameImage("maptoolEnemyAny4", "maptoolEnemyAny4.bmp", 76, 70, 2, 2, true, RGB(255, 0, 255));

}
//�ε����� �Լ�(�̰��� ���带 ���� �־��)
void loadingScene::loadingSound(void)
{
}
