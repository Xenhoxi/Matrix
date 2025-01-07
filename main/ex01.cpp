/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:10:39 by ljerinec          #+#    #+#             */
/*   Updated: 2025/01/07 16:03:59 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "Master.hpp"

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

int main()
{
    std::cout << "Lib Matrix" << std::endl;
    
    Vector<float>  vec_1({1.0, 0, 0});
    Vector<float>  vec_2({0, 1.0, 0});
    Vector<float>  vec_3({0, 0, 1.0});

    Vector<float> lc = linear_combination<float>({vec_1, vec_2, vec_3}, {10, -2, 0.5});
    lc.display();


    Vector<int>  v1({1, 2, 3});
    Vector<int>  v2({0, 10, -100});

    Vector<int> lc2 = linear_combination<int>({v1, v2}, {10, -2});
    lc2.display();    
}
