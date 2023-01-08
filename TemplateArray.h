#pragma once

template <typename T> class TemplateArray
{
	int _size;
	T* _data;
public:
	TemplateArray()=default;
	TemplateArray(int size);
	virtual ~TemplateArray();
	TemplateArray(TemplateArray& other);
	TemplateArray& operator=(TemplateArray& other);
	void setData(int a, T data);
	T get(int a);
	int getSize();
};

