/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:19:22 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/15 16:18:40 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	protected:
		FragTrap(void);
	public:
		FragTrap(std::string name);
		FragTrap(FragTrap const &other);
		~FragTrap(void);
		FragTrap &operator=(FragTrap const &other);
		void highFivesGuys(void);
};

#endif
