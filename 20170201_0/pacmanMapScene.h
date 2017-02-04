#pragma once
#include "gameNode.h"
#include "pacmanMapNode.h"
struct tagButton
{
	RECT rc;
	int x, y;
	bool isClick;
};
struct tagFramX
{
	int x, y;
	int frameX;
	int frameY;
	image* img;
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


	float frameX, frameY;
	CTRL mouse;
	image* _sampleImg;
	RECT _line;

	bool _isAnyLeft;
	tagFramX _any[6];
	int _count;

public:
	HRESULT init(void);
	void release(void);
	void update(void);
	void render(void);

	void check();

	//���� �߰��� �ִϸ��̼� 
	void anyInit();
	void anyTime();
	void anyRender();

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

