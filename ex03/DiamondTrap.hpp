/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdi <ahamdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 09:49:18 by ahamdi            #+#    #+#             */
/*   Updated: 2024/12/15 16:50:42 by ahamdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class  DiamondTrap : public FragTrap , public  ScavTrap
{
    private :
        std::string name;   
    public :
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap &original);
        DiamondTrap& operator=(const DiamondTrap& original);
        ~DiamondTrap();
        void attack(const std::string &target);
        void whoAmI();
};
#endif