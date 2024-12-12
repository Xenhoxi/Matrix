/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:10:39 by ljerinec          #+#    #+#             */
/*   Updated: 2024/12/12 16:31:01 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "Vector.hpp"

int main()
{
    std::cout << "Matrix" << std::endl;

    // vector vec = {1.0, 2.3, 6.0, 7.8902};
    // vector vec2 = {3.0, 3.3, 6.0, 7.8902};
    
    Vector  my_vec({1.0, 2.3, 6.0, 7.8902});
    Vector  vec_2(my_vec);
    my_vec.display();
    vec_2.display();
    my_vec.plus_un();
    my_vec.display();
    vec_2.display();

    Matrix  mat_1({
        {1.6, 2, 3},
        {1, 6, 3},
        {1, 2, 9.5423}}
    );
    mat_1.display();
    return (1);
}
