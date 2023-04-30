#pragma once
class Interface_Virtual_Class{
public:
	virtual int CallClass(int d) = 0;
};

class Virtual_Main: public Interface_Virtual_Class {
public:
	int *data = nullptr;

	Virtual_Main();
	~Virtual_Main();

	int CallClass(int d) override;
};

class Virtual_One : public Virtual_Main {
public:
	int* data = nullptr;

	Virtual_One();
	~Virtual_One();

	int CallClass(int d) override;
};

class Virtual_Two :public Virtual_Main {
public:
	int* data = nullptr;
	Virtual_Two();
	~Virtual_Two();

	int CallClass(int d) override;
};

class Virtual_Three : public Virtual_Two, public Virtual_One, public Interface_Virtual_Class {
public:
	int* data = nullptr;

	Virtual_Three();
	~Virtual_Three();

	int CallClass(int d) override;
};

class Virtual_END :public Virtual_Three, public Virtual_Two, public Interface_Virtual_Class {
public:
	int* data = nullptr;

	Virtual_END();
	~Virtual_END();

	int CallClass(int d) override;
};

class Inteface_Call {
public:
	int data;

	Inteface_Call(int data);
	~Inteface_Call();

	void CallClass(Interface_Virtual_Class* ivc, int data);
};