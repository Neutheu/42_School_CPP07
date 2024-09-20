/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:25:41 by nsouchal          #+#    #+#             */
/*   Updated: 2024/09/20 12:16:51 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T> class Array
{
    private:
    T            *array_attribut;
    unsigned int size_array;
    
    public:
    Array();
    Array(unsigned int n);
    Array(const Array &src);
    Array   &operator=(const Array &rhs);
    ~Array();
    T &operator[](int index) const;
    unsigned int    size() const;
    class OutOfBoundsException : public std::exception
    {
        public:
        const char  *what() const throw();
    };
    
};

# include "../srcs/Array.tpp"

#endif