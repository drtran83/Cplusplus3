// Implementation file for WeatherStats

#include <iostream>
#include "WeatherStats.h"

// WeatherStats Constructor

WeatherStats::WeatherStats(double r, double s, double su) {

	rain = r;
	snow = s;
	sunny = su;

}

// Mutators

void WeatherStats::setRain(double r) {

	rain = r;
}

void  WeatherStats::setSnow(double s) {
	snow = s;
}

void WeatherStats::setSunny(double su) {
	sunny = su;
}


// Accessors

double WeatherStats::getRain()const {
	return rain;
}

double WeatherStats::getSnow()const {
	return snow;
}

double WeatherStats::getSunny()const {
	return sunny;
}

// Overloaded opeartor


ostream & operator<<(ostream & stream, const WeatherStats & obj)
{
	stream << "Rainy Days: " << obj.rain << endl;
	stream << "Snowy Days: " << obj.snow << endl;
	stream << "Sunny Days: " << obj.sunny << endl;
	return stream;
}
