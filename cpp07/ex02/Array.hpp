#ifndef ARRAY_H
# define ARRAY_H
# include <iostream>

template<typename T>
class Array {
	public:
		Array();
		~Array();
		Array(unsigned int n);
		Array(const Array &cpy);
		Array &operator=(const Array &a);
		T		&operator[](unsigned int i);
		unsigned int	size() const;
	private:
		T	*_elements;
		unsigned int _size;
};

template<typename T>
Array<T>::Array() : _elements(NULL), _size(0) {
}

template<typename T>
Array<T>::~Array() {
	delete[] _elements;
}

template<typename T>
Array<T>::Array(unsigned int n) : _elements(NULL), _size(n) {
	_elements = new T[n];
}

template<typename T>
Array<T>::Array(const Array &cpy) : _size(0) {
	*this = cpy;
}

template<typename T>
Array<T>	&Array<T>::operator=(const Array &a) {
	if (_size > 0)
		delete[] _elements;
	_elements = NULL;
	if (a.size() > 0) {
		_elements = new T[a.size()];
		for (unsigned int l = 0; l < a.size(); l++) {
			_elements[l] = a._elements[l];
			_size = l;
		}
	}
	_size = a.size();
	return (*this);
}

template<typename T>
T	&Array<T>::operator[](unsigned int i) {
	if (i + 1 > size())
		throw std::exception();
	return (_elements[i]);
}

template<typename T>
unsigned int	Array<T>::size() const {
	return (_size);
}

#endif