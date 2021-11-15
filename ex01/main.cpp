/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 10:26:54 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/15 16:49:30 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap c1("c1");

	c1.attack("hoge");
	c1.takeDamage(5);
	c1.beRepaired(1);

	ScavTrap s1("s1");

	s1.attack("42");
	s1.takeDamage(7);
	s1.beRepaired(2);
	s1.guardGate();

	return (0);
}