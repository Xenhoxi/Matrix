/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex00.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:10:39 by ljerinec          #+#    #+#             */
/*   Updated: 2024/12/18 14:20:35 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "Vector.hpp"
#include "Matrix.hpp"

int main()
{
    std::cout << "Lib Matrix" << std::endl;
    
    Vector  my_vec({1.0, 2.3, 6.0, 7.8902});
    Vector  vec_2(my_vec);
    Vector  vec_3({1.0, 2.3, 6.0, 7.8902, 9});

    std::cout << "------ Vector add, sub and scaler operation ------" << std::endl;
    try
	{
        Vector  vec_1({1.0, 2.3, 6.0, 7.8902});
        Vector  vec_2(my_vec);
        vec_1.display();
        vec_2.display();
        vec_1.add(vec_2);
        vec_1.display();
        vec_1.sub(vec_2);
        vec_1.display();
        vec_1.scl(2.0);
        vec_1.display();
        vec_1.scl(-2.0);
        vec_1.display();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}

    std::cout << "------ Matrix add, sub and scaler operation ------" << std::endl;
    try
	{
        Matrix  mat_1({
        {-1, 0, 1},
        {2, 3, 4},
        {5, 6, 7},
        {8, 9, 10}}
        );
        Matrix  mat_2(mat_1);
        mat_1.display();
        mat_2.display();
        mat_1.add(mat_2);
        mat_1.display();
        mat_1.sub(mat_2);
        mat_1.display();
        mat_1.scl(2.0);
        mat_1.display();
        mat_1.scl(-2.0);
        mat_1.display();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
    return (0);
}


// let e1 = Vector::from([1., 0., 0.]);

// let e2 = Vector::from([0., 1., 0.]);

// let e3 = Vector::from([0., 0., 1.]);

// let v1 = Vector::from([1., 2., 3.]);

// let v2 = Vector::from([0., 10., -100.]);

// println!("{}", linear_combination<Vector<f32>, f32>([e1, e2, e3], [10., -2., 0.5]));
// [10.]
// [-2.]
// [0.5]

// println!("{}", linear_combination<Vector<f32>, f32>([v1, v2], [10., -2.]));
// [10.]
// [0.]
// [230.]
