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
#ifndef ___CAR_H
#define ___CAR_H

enum CarType { JEEP, AIXAM, FIAT_MULTIPLA };
enum Color { RED, GREEN, BLUE, ORANGE, SILVER, BLACK };

typedef struct CarImplementation* Car;

struct CarImplementation {
  enum CarType type;
  enum Color color;
  double speed;
  double acceleration_rate;
  double fill_level;
  bool rented;
};

Car get_car(CarType car);
enum CarType get_type(Car car);
enum Color get_color(Car car);
void init();
double get_fill_level(Car car);
double get_acceleration_rate(Car car);
void set_acceleration_rate(Car car, double rate);
int get_speed(Car car);
void accelerate(Car car);
#endif
