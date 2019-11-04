#pragma once
#include"DxLib.h"
/*
http://www.tokyo-colors.com/dictionary/dictionary_category/japanese-color/page/2/
*/

enum ColorName {
	Red,//��F
	Blue,//�I���F
	DarkBlue,//���F
	Orange,//��F
	Purple,//�C�V�F
	Pink,//���O�F
	Yellow,//�R���F
	Green,//�|�F
	DarkGreen,//���t�F
	YellowGreen,//�S�F
	White,
	Black,
};
class UICompTool {
public:
	static int color(ColorName colorName) {
		switch (colorName)
		{
		case Red:
			return GetColor(216, 12, 24);
			break;
		case Blue:
			return GetColor(0,128 ,200 );
			break;
		case DarkBlue:
			return GetColor(0, 272, 122);
			break;
		case Orange:
			return GetColor(233,71 ,9);
			break;
		case Purple:
			return GetColor(125,45 ,40 );
			break;
		case Pink:
			return GetColor(211, 84, 153);
			break;
		case Yellow:
			return GetColor(250,190,0);
			break;
		case Green:
			return GetColor(0,141 ,120 );
			break;
		case DarkGreen:
			return GetColor(0, 94, 70);
			break;
		case YellowGreen:
			return GetColor(199, 203, 17);
			break;
		case White:
			return GetColor(255, 255, 255);
			break;
		case Black:
		default:
			break;
		}
		return GetColor(0, 0, 0);
	}
};