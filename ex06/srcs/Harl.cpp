/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljeribha <ljeribha@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 17:25:22 by ljeribha          #+#    #+#             */
/*   Updated: 2025/12/13 12:19:19 by ljeribha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

Harl::Level Harl::parseLevel(const std::string& level) const {
	if (level == "DEBUG") return DEBUG;
	if (level == "INFO") return INFO;
	if (level == "WARNING") return WARNING;
	if (level == "ERROR") return ERROR;
	return INVALID;
}

void Harl::debug( void ) {
	std::cout << "[ DEBUG ] love having extra bacon for my 7XL-double-cheese-"
	"triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info( void ) {
	std::cout << "[ INFO ] I cannot believe adding extra bacon costs more money. You didn't put"
	"enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning( void ) {
	std::cout << "[ WARNING ] I think I deserve to have some extra bacon for free. I've been coming for"
	"years, whereas you started working here just last month." << std::endl;
}

void Harl::error( void ) {
	std::cout << "[ ERROR ] This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
	std::string levels[4] = {
		"DEBUG", "INFO", "WARNING", "ERROR"
	};
	switch (parseLevel(level)) {
		case DEBUG: 
			debug();
			info();
			warning();
			error();
			break;
		case INFO:
			info();
			warning();
			error();
			break;
		case WARNING:
			warning();
			error();
			break;
		case ERROR:
			error();
			break;
		default: std::cout << "[ INVALID ] Invalid level\n";
	}
}