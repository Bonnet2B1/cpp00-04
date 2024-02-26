/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:27:38 by edelarbr          #+#    #+#             */
/*   Updated: 2024/02/26 20:40:06 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "time.h"
#include "stdlib.h"
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {}

Base* generate(void) {
	std::srand(time(0));
	int rdm = std::rand() % 3;
	if (rdm == 0)
		return new A();
	else if (rdm == 1)
		return new B();
	else
		return new C();
}

