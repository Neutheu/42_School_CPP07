/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 10:08:10 by nsouchal          #+#    #+#             */
/*   Updated: 2024/09/19 12:08:11 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

int main()
{
    char    array[4] = {'a', 'b', 'c', 'd'};
    int    array2[4] = {1, 2, 3, 4};
    
    iter(array2, 4, test_function);
    iter(array, 4, test_function);
}