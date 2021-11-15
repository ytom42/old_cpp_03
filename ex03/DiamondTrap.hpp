/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:41:51 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/15 14:06:15 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string _name;
		DiamondTrap(void);
	public:
		DiamondTrap(std::string const &name);
		DiamondTrap(DiamondTrap const &other);
		~DiamondTrap(void);
		DiamondTrap &operator=(DiamondTrap const &other);
		void attack( std::string const & target );
		void whoAmI();
};

#endif
