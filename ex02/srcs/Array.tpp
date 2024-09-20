/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 08:40:13 by nsouchal          #+#    #+#             */
/*   Updated: 2024/09/20 12:16:41 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

template <typename T> Array<T>::Array()
{
    this->array_attribut = new T[0];
    this->size_array = 0;
}

template <typename T> Array<T>::Array(unsigned int n)
{
    this->array_attribut = new T[n];
    this->size_array = n;
    for (unsigned int i = 0; i < n; i++)
        this->array_attribut[i] = 0;
}

template <typename T> Array<T>::Array(const Array<T> &src)
{
    this->size_array = src.size_array;
    this->array_attribut = new T[src.size_array];
    for (unsigned int i = 0; i < this->size_array; i++)
        this->array_attribut[i] = src.array_attribut[i];
}

template <typename T> Array<T> &Array<T>::operator=(const Array<T> &rhs)
{
    if (this != &rhs)
    {
        this->size_array = rhs.size_array;
        delete[] this->array_attribut;
        this->array_attribut = new T[rhs.size_array];
        for (unsigned int i = 0; i < this->size_array; i++)
            this->array_attribut[i] = rhs.array_attribut[i];
    }
    return (*this);
}

template <typename T> T &Array<T>::operator[](int index) const
{
    if (index < 0 || index > static_cast<int>(this->size_array) - 1)
        throw Array<T>::OutOfBoundsException();
    return (this->array_attribut[index]);  
}

template <typename T> Array<T>::~Array()
{
    delete[] this->array_attribut;
}

template <typename T> unsigned int  Array<T>::size() const
{
    return (this->size_array);
}

template <typename T> const char    *Array<T>::OutOfBoundsException::what() const throw()
{
    return ("cannot acces element, index is out of bounds");
}
