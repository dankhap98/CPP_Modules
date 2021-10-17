#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template<typename T>
class Array 
{
    private:
        T *_Arr;
        unsigned int _Len;
    
    public:
        Array() : _Arr(NULL), _Len(0)
        {
            
        };
        
        ~Array() 
        { 
            delete [] _Arr; 
        };
        
        Array(unsigned int n) : _Len(n)
        {
            _Arr = new T[_Len];
            for (unsigned int i = 0; i < _Len; i++)
                _Arr[i] = 0;
        };
        
        Array(const Array &copy)
        {
            if (this != &copy)
            {
                _Len = copy._Len;
                _Arr = new T[_Len];
                for (unsigned int i = 0; i < _Len; i++)
                    _Arr[i] = copy._Arr[i];
            }
        };
        
        Array &operator=(const Array &ar)
        {
			if (this == &ar)
				return (*this);
            else
            {
                if (_Arr)
                    delete _Arr;
                _Len = ar._Len;
                _Arr = new T[_Len];
                for (unsigned int i = 0; i < _Len; i++)
                    _Arr[i] = ar._Arr[i];
            }
            return (*this);
        };
        
        T &operator[](unsigned int i)
        {
            if (i >= _Len || i < 0)
                throw exc();
            return (_Arr[i]);
        };
        
        class exc : public std::exception
        {
            virtual const char *what() const throw() 
            {
                return ("Out of range!");
            }
        };

        unsigned int size()
        { 
            return (_Len);
        };
};

#endif
