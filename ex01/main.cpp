/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 10:26:54 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/14 15:42:03 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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

	ScavTrap s1("s1");
	ScavTrap s2("s2");

	s1.attack("42");
	s2.attack("tokyo");
	s1.takeDamage(7);
	s2.takeDamage(0);
	s1.guardGate();
	s1.beRepaired(1);
	s2.beRepaired(1);
}