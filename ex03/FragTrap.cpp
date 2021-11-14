/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:19:24 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/14 17:24:12 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap Constructor Called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap Constructor Called(" << this->_name << ")" << std::endl;
}

FragTrap::FragTrap(FragTrap const &other)
{
	std::cout << "FragTrap copy Constructor Called" << std::endl;
	*this = other;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor Called(" << this->_name << ")" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &other)
{
	std::cout << "FragTrap assignment operator called" << std::endl;
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "positive high fives request" << std::endl;
}
