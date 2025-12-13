/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljeribha <ljeribha@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 17:25:22 by ljeribha          #+#    #+#             */
/*   Updated: 2025/12/12 17:28:07 by ljeribha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

void Harl::debug( void ) {
	std::cout << "[DEBUG]love having extra bacon for my 7XL-double-cheese-"
	"triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info( void ) {
	std::cout << "[INFO] I cannot believe adding extra bacon costs more money. You didn't put"
	"enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning( void ) {
	std::cout << "[WARNING] I think I deserve to have some extra bacon for free. I've been coming for"
	"years, whereas you started working here just last month." << std::endl;
}

void Harl::error( void ) {
	std::cout << "[ERROR] This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
	std::string levels[4] = {
		"DEBUG", "INFO", "WARNING", "ERROR"
	};

	void (Harl::*functions[4])() = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	for (int i = 0; i < 4; i++) {
		if (level == levels[i]) {
			(this->*functions[i])();
			return;
		}
	}
	std::cerr << "Invalid level: " << level << std::endl;
}