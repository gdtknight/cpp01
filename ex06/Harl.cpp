/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:06:46 by yoshin            #+#    #+#             */
/*   Updated: 2025/10/27 16:24:10 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void Harl::complain(std::string level) {
  if (level == "DEBUG")
    debug();
  else if (level == "INFO")
    info();
  else if (level == "WARNING")
    warning();
  else if (level == "ERROR")
    error();
  else
    std::cout << "[ Probably complaining about insignificant problems ]"
              << std::endl;
}

void Harl::debug(void) {
  std::cout << "[ DEBUG ] " << std::endl;
  std::cout << "I love having extra bacon for my "
               "7XL-double-cheese-triple-pickle-special-"
               "ketchup burger.I really do !"
            << std::endl;
  std::cout << std::endl;
  info();
}
void Harl::info(void) {
  std::cout << "[ INFO ]" << std::endl;
  std::cout
      << "I cannot believe adding extra bacon costs more money. You didn’t put "
         "enough bacon in my burger! If you did, I wouldn’t be asking for more!"
      << std::endl;
  std::cout << std::endl;
  warning();
}
void Harl::warning(void) {
  std::cout << "[ WARNING ]" << std::endl;
  std::cout
      << "I think I deserve to have some extra bacon for free. I’ve been "
         "coming for years, whereas you started working here just last month."
      << std::endl;
  std::cout << std::endl;
  error();
}

void Harl::error(void) {
  std::cout << "[ ERROR ]" << std::endl;
  std::cout << "This is unacceptable! I want to speak to the manager now."
            << std::endl;
}
