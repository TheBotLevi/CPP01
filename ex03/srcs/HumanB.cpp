/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljeribha <ljeribha@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 14:09:56 by ljeribha          #+#    #+#             */
/*   Updated: 2025/12/04 16:44:31 by ljeribha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanB.hpp"

HumanB::HumanB(const std::string &name) : _name(name) {
        
}

void    HumanB::attack() {
        std::cout << _name << " attacks with their " << _weapon->getType() << "!" << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon) {
        _weapon = &weapon;
}