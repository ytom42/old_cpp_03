/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 13:33:21 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/14 15:49:13 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		ScavTrap(void);
	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &other);
		~ScavTrap(void);
		ScavTrap &operator=(const ScavTrap &other);
		void guardGate();
};

#endif
