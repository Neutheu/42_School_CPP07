/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:31:53 by nsouchal          #+#    #+#             */
/*   Updated: 2024/11/07 10:52:05 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T, typename F> void iter(T *array_address, int len_array, F(*f)(T x))
{
    for (int i = 0; i < len_array; i++)
        f(*(array_address + i));
}

template <typename T2> int test_function(T2 x)
{
   std::cout << x << std::endl;
   return (0);
}

#endif