/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 10:26:54 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/14 13:25:42 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main()
{
	ClapTrap c1("c1");
	ClapTrap c2("c2");

	c1.attack("hoge");
	c2.attack("fuga");
	c1.takeDamage(5);
	c2.takeDamage(10);
	c1.beRepaired(1);
	c2.beRepaired(100);
}