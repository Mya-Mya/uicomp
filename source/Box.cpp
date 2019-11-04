#include "Box.h"
#include"DxLib.h"
#include"UICompConstants.h"
Box::Box()
	:Box(UICompTool::color(UICompConstants::defaultBaseColor), 
		UICompConstants::defaultPosition, UICompConstants::defaultPart,UICompConstants::defaultSize)
{
}

Box::Box(int bgColor, Vec2 pos, Part part, Vec2 size)
	:UIComponent(pos,part,size)
{
	setBgColor(bgColor);
}

void Box::setBgColor(int bgColor)
{
	_color = bgColor;
}

void Box::draw()
{
	DrawBox(_TLPos.getX(), _TLPos.getY(), _BRPos.getX(), _BRPos.getY(), _color, TRUE);
}

void Box::update()
{
}
