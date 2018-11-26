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

#define CAR_PARK_SPACE 6

struct CarImplementation multipla1 = {FIAT_MULTIPLA, GREEN, 0, 0, 65, false};
struct CarImplementation multipla2 = {FIAT_MULTIPLA, BLUE, 0, 0, 65, false};
struct CarImplementation multipla3 = {FIAT_MULTIPLA, ORANGE, 0, 0, 65, false};
struct CarImplementation aixam = {AIXAM, RED, 0, 0, 16, false};
struct CarImplementation jeep1 = {JEEP, SILVER, 0, 0, 80, false};
struct CarImplementation jeep2 = {JEEP, BLACK, 0, 0, 80, false};

Car car_park[CAR_PARK_SPACE] = {&aixam, &multipla1, &multipla2, &multipla3, &jeep1, &jeep2};

Car get_car(CarType car_type)
{
  for(int i = 0; i < CAR_PARK_SPACE; i++)
  {
    if((car_park[i]->type == car_type) && (!car_park[i]->rented))
    {
      car_park[i]->rented = true;
      return car_park[i];
    }
  }

  return 0;
}

enum CarType get_type(Car car)
{
  return car->type;
}

enum Color get_color(Car car)
{
  return car->color;
}

void init()
{
  for(int i = 0; i < CAR_PARK_SPACE; i++)
  {
    car_park[i]->rented = false;
    car_park[i]->speed = 0;
    car_park[i]->acceleration_rate = 0;

    switch(car_park[i]->type)
    {
      case AIXAM:
        car_park[i]->fill_level = 16;
        break;
      case JEEP:
        car_park[i]->fill_level = 80;
        break;
      case FIAT_MULTIPLA:
        car_park[i]->fill_level = 65;
        break;
    }
  }
}

double get_fill_level(Car car)
{
  return car->fill_level;
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
