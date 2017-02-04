#pragma once
#include "gameNode.h"
#include "pacmanMapNode.h"
struct tagButton
{
	RECT rc;
	int x, y;
	bool isClick;
};
class pacmanMapScene : public gameNode
{
private:
	tagTiles tile[TILEY][TILEX];
	tagSampleTiles sampleTile[SAMPLETILEY][SAMPLETILEX];
	tagCurrentTiles currentTile;
	tagButton _button[5];


	RECT _rc[5];
	RECT _camera;
	RECT _sampleCamera;
	int _cameraX, _cameraY;
	int _sampleCameraX, _sampleCameraY;
	int _sampleCameraX1, _sampleCameraY1;
	int _count;

	float frameX, frameY;
	CTRL mouse;
	image* _sampleImg;
	RECT _line;

public:
	HRESULT init(void);
	void release(void);
	void update(void);
	void render(void);

	void check();

	//���� �ʱ�ȭ
	void MaptoolSet();
	//�����̹��� �� ��ư �ʱ�ȭ
	void buttoninit();
	//���� �� Ÿ�ϱ׸���
	void Map();
	//��ư Ŭ���ϱ�
	void buttonClick();
	//���ʸ� ����
	void MapRender();
	//�����̹��� �� ��ư ����
	void buttonRender();
	//ī�޶� ������
	void cameraMove();
	//���̺�
	void save();
	//�ε�
	void load();

	TERRAIN terrainSelect(int frameX, int frameY);

	pacmanMapScene() {}
	~pacmanMapScene() {}
};

