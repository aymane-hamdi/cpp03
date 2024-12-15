/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdi <ahamdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:11:06 by ahamdi            #+#    #+#             */
/*   Updated: 2024/12/15 15:20:20 by ahamdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap 
{
    private:
        std::string name;
        int Hit_points;
        int Energy_points;
        int Attack_damage; 
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap(ClapTrap &original);
        ClapTrap& operator=(const ClapTrap& original);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};
#endif