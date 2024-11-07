/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 10:08:10 by nsouchal          #+#    #+#             */
/*   Updated: 2024/11/07 10:54:27 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

int main()
{
    char    array[4] = {'a', 'b', 'c', 'd'};
    int    array2[4] = {1, 2, 3, 4};
    
    iter<int, int>(array2, 4, test_function);
    iter<char, int>(array, 4, test_function);
}