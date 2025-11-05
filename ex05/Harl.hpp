/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:02:23 by yoshin            #+#    #+#             */
/*   Updated: 2025/11/05 20:34:29 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl {
public:
  void complain(std::string level);

private:
  typedef struct s_log {
    std::string level;
    void (Harl::*log)(void);
  } t_log;

  static const t_log logs[4];

  void debug(void);
  void info(void);
  void warning(void);
  void error(void);
};

#endif
