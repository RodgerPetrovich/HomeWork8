#include "TemplateArray.h"
#include <iostream>

using namespace std;


template <typename T> TemplateArray<T>::TemplateArray(int size)
{
	_size =  abs(size);
	_data = new T[_size];
}
template <typename T> TemplateArray<T>::~TemplateArray()
{
	delete[] _data;
}

template<typename T>TemplateArray<T>::TemplateArray(TemplateArray& other)
{
	_size = other._size;
	_data = new T[_size];
	for (int i = 0; i < _size; i++)
	{
		_data[i] = other._data[i];
	}
}

template<typename T> TemplateArray<T> &TemplateArray<T>::operator=(TemplateArray& other)
{
	if (this != &other)
	{
		_size = other._size;
		delete[] _data;
		_data = new T [_size];
		for (int i = 0; i < _size; i++) _data[i] = other._data[i];
	}
	return *this;
}

template <typename T> void TemplateArray<T>::setData(int a, T data)
{
	if (a>=0 && a<_size) _data[a] = data;
}

template <typename T> T TemplateArray<T>::get(int a)
{
	if (a >= 0 && a <= _size) return _data[a];
	else return 0;
}
template <typename T> int TemplateArray<T>::getSize()
{
	return _size;
}