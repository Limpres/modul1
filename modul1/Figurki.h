#pragma once

class figurki{
	private:
    public:
		virtual void draw();
};

class krest :public figurki {
public:
	void draw();
};

class trap : public figurki {
public:
	void draw();
};
void ch();