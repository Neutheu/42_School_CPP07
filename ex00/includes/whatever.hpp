/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:55:45 by nsouchal          #+#    #+#             */
/*   Updated: 2024/09/18 15:24:34 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T> void  swap(T &a, T &b)
{
    T   backup;
    
    backup = a;
    a = b;
    b = backup;
}

template <typename T> T     min(T a, T b)
{
    if (a < b)
        return (a);
    else
        return (b);
}

template <typename T> T     max(T a, T b)
{
    if (a > b)
        return (a);
    else
        return (b);
}

#endif