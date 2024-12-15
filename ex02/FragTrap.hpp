/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdi <ahamdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 22:07:40 by ahamdi            #+#    #+#             */
/*   Updated: 2024/12/15 16:48:43 by ahamdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>
class FragTrap : public  ClapTrap
{   
    public :
        FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap &original);
        FragTrap& operator=(const FragTrap& original);
        void attack(const std::string& target);
        ~FragTrap();
        void highFivesGuys();
};

#endif