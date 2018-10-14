#include <iostream>
#include <exception>

template<typename T>
class Array {
public:
	Array() : _arr(NULL), _size(0) {
	}

	Array(unsigned int size) {
		_arr = new T[size];
		_size = size;
	}

	Array(Array const &rfs) {
		*this = rfs;
	}

	Array &operator=(Array const &rfs) {
		delete [] _arr;
		_arr = new T[rfs._size];
		for (int i = 0; i < rfs._size; i++) {
			_arr[i] = rfs._arr[i];
		}
		_size = rfs._size;
		return *this;
	}

	T &operator[](unsigned int i) throw(std::exception) {
		if (i > _size || _size == 0) {
			throw (std::exception());
		}
		return _arr[i];
	}

	int size() const {
		return _size;
	}

private:
	T *_arr;
	ssize_t _size;
};
