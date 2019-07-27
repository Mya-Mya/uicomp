#pragma once
class Mouse {

	Mouse();

	virtual ~Mouse() {}
	Mouse(const Mouse&r) {}
	Mouse&operator=(const Mouse&r) {}
public:
	static Mouse*Instance() {
		static Mouse inst;
		return&inst;
	}
	bool Update();	//�X�V
	int GetPressingCount(int keyCode);//keyCode�̃L�[��������Ă���t���[�������擾
	int GetReleasingCount(int keyCode);//keyCode�̃L�[��������Ă���t���[�������擾
	int GetX();
	int GetY();
	const static int LEFT = 0;
	const static int RIGHT = 1;
	const static int MIDDLE = 2;

private:
	const static int BUTTON_NUM = 8;
	int mKeyPressingCount[BUTTON_NUM];//������J�E���^
	int mKeyReleasingCount[BUTTON_NUM];//������J�E���^
	int mX, mY;

	bool IsAvailableCode(int keyCode);//keyCode���L���ȃL�[�ԍ����₤
};