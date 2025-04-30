// Constructeur par défaut
template <typename T>
Array<T>::Array() : _array(NULL), _size(0)
{
	return ;
}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]()), _size(n)
{
	return ;
}

template <typename T>
Array<T>::Array(const Array& copied) : _array(NULL), _size(0)
{
    *this = copied;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& base)
{
    if (this != &base)
	{
        delete[] _array;
        _size = base._size;
        _array = new T[_size];
        for (unsigned int i = 0; i < _size; ++i)
            _array[i] = base._array[i];
    }
    return *this;
}

template <typename T>
Array<T>::~Array()
{
    delete[] _array;
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
    if (index >= _size)
        throw std::out_of_range("Index out of bounds");
    return _array[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
    if (index >= _size)
        throw std::out_of_range("Index out of bounds");
    return _array[index];
}

template <typename T>
unsigned int Array<T>::size() const
{
    return _size;
}
