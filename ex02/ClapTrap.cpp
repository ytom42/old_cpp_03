/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 10:27:02 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/14 16:02:36 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "CrapTrap constructor called(" << this->_name << ")" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Destructor called(" << this->_name << ")" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
	std::cout << "ClapTrap assignment operator called" << std::endl;
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	return (*this);
}

void ClapTrap::attack(std::string const &target)
{
	this->_energyPoints -= this->_attackDamage;
	std::cout << "ClapTrap " << this->_name << " attacks " << target
		<< ", causing " << this->_attackDamage << " points of damage!" << std::endl
		<< this->_name << "'s Energy points: " << this->_energyPoints
		<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	std::cout << "ClapTrap " << this->_name << " takes "
		<< amount << " points of damage!" << std::endl
		<< this->_name << "'s Hit points: " << this->_hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints += amount;
	std::cout << "ClapTrap " << this->_name << " is repaired "
		<< amount << " points!" << std::endl
		<< this->_name << "'s Hit points: " << this->_hitPoints << std::endl;
}
