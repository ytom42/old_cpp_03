/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 10:26:54 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/14 16:38:08 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap c1("c1");
	ClapTrap c2("c2");

	ScavTrap s1("s1");
	ScavTrap s2("s2");

	FragTrap f1("f1");
	FragTrap f2("f2");

	f1.attack("hoge");
	f2.attack("fuga");
	f1.highFivesGuys();
	f2.highFivesGuys();
	f1.takeDamage(20);
	f2.takeDamage(30);
	f1.beRepaired(10);
	f2.beRepaired(10);

	return (0);
}