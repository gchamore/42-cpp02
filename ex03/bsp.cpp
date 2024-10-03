/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 09:51:29 by gchamore          #+#    #+#             */
/*   Updated: 2024/10/03 14:11:07 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed const x = point.getX();
    Fixed const y = point.getY();
    Fixed const xa = a.getX();
    Fixed const ya = a.getY();
    Fixed const xb = b.getX();
    Fixed const yb = b.getY();
    Fixed const xc = c.getX();
    Fixed const yc = c.getY();

    Fixed const a1 = (x - xa) * (yb - ya) - (xb - xa) * (y - ya);
    Fixed const a2 = (x - xb) * (yc - yb) - (xc - xb) * (y - yb);
    Fixed const a3 = (x - xc) * (ya - yc) - (xa - xc) * (y - yc);

    if ((a1 >= 0 && a2 >= 0 && a3 >= 0) || (a1 <= 0 && a2 <= 0 && a3 <= 0))
        return true;
    return false;
}