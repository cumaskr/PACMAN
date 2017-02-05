#pragma once
#include "gameNode.h"
#define MAPMAX 5
#define MAPBUTTONSIZEX 250
#define MAPBUTTONSIZEY 150
enum BUTTON_STATE
{
	BUTTON_IDLE,
	BUTTON_LRESET,
	BUTTON_RRESET,
	BUTTON_LEFT,
	BUTTON_RIGHT,
};

struct tag_buttons
{
	RECT rc;
	float x;
	float y;
	float angle;
	float gravity;
};

struct tag_mapbutton
{
	RECT rc;
	float x;
	float y;
	int alpha;
	int state;
	float angle;
	float gravity;
};



class cMapChoice : public gameNode
{
private:
	TCHAR buffer[123];
	int frontIndex = 0;
	int endIndex = 0;
	int centerIndex = 0;
	int centerIndexPlus = EOF;
	int centerIndexMinus = EOF;
	bool IsMapMove;

	tag_buttons menu_RC;      // �»�� �޴�����
	tag_buttons back_RC;      // �»�� �޴�����
	tag_buttons map_nameRC;      // ��� ���̸�
	tag_buttons left_button;  //���ʹ�ư
	tag_buttons right_button; //�����ʹ�ư

	tag_mapbutton map_button[MAPMAX]; // ��5��

public:

	void MapMoveCheck();
	void MoveButton();
	void MoveLeftMap();
	void MoveRightMap();

	HRESULT init(void);
	void release(void);
	void update(void);
	void render(void);

	cMapChoice() {}
	~cMapChoice() {}
};

