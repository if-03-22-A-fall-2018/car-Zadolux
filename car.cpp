/*----------------------------------------------------------
*				HTBLA-Leonding / Klasse: 2AHIF
* ---------------------------------------------------------
* Exercise Number: 0
* Title:			car.h
* Author:			M. Wallinger
* Due Date:		November 20, 2018
* ----------------------------------------------------------
* Description:
* Car abstract data type demo.
* ----------------------------------------------------------
*/
#include <stdio.h>
#include <stdbool.h>
#include "car.h"

Car aixam = {AIXAM, RED, 0, 0, 16, false};
Car multipla1 = {FIAT_MULTIPLA, GREEN, 0, 0, 65, false};
Car multipla2 = {FIAT_MULTIPLA, BLUE, 0, 0, 65, false};
Car multipla3 = {FIAT_MULTIPLA, ORANGE, 0, 0, 65, false};
Car jeep1 = {JEEP, SILVER, 0, 0, 80, false};
Car jeep2 = {JEEP, BLACK, 0, 0, 80, false};

Car car_park[6] = {
  &aixam,
  &multipla1,
  &multipla2,
  &multipla3,
  &jeep1,
  &jeep2
};

Car get_car(CarType car)
{
  return 0;
}

enum CarType get_type(Car car)
{
  return AIXAM;
}

enum Color get_color(Car car)
{
  return BLACK;
}

void init()
{

}

double get_fill_level(Car car)
{
  return 0.0;
}

double get_acceleration_rate(Car car)
{
  return 0.0;
}

int get_speed(Car car)
{
  return 0;
}

void set_acceleration_rate(Car car, double rate)
{

}

void accelerate(Car car)
{

}
