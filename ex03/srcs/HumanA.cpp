/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljeribha <ljeribha@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 09:00:44 by ljeribha          #+#    #+#             */
/*   Updated: 2025/12/04 14:56:08 by ljeribha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"

void HumanA::attack() {
        std::cout << _name << " attacks with their " << _weapon.getType() << "!" << std::endl;
}

HumanA::HumanA(const std::string &name, Weapon &weapon)
        : _weapon(weapon), _name(name) {

}