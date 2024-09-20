/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:31:53 by nsouchal          #+#    #+#             */
/*   Updated: 2024/09/19 12:10:02 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T> void iter(T *array_address, int len_array, void(*f)(T x))
{
    for (int i = 0; i < len_array; i++)
        f(*(array_address + i));
}

template <typename T2> void test_function(T2 x)
{
   std::cout << x << std::endl;
}

#endif