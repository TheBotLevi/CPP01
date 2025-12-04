/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljeribha <ljeribha@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:45:14 by ljeribha          #+#    #+#             */
/*   Updated: 2025/12/04 16:45:41 by ljeribha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"

Weapon::Weapon(const std::string &type) : _type(type) {

}

const std::string &Weapon::getType() const {
        return _type;
}

void Weapon::setType(const std::string &type) {
        _type = type;
}