#include "Weather.h"
#include "Weather.h"

Weather::Weather(string c, double l, double l1, double t, string w, double ws, int cl)
{
	city = c;
	lon = l;
	lat = l1;
	temperature = t;
	weather = w;
	windSpeed = ws;
	clouds = cl;
}

ostream& Weather::operator<<(std::ostream& os)
{
	return os << "in " << city << "(" << lon << ", " << lat << ") the temperature is " << temperature << " " << weather << " weather " << "windspeed is " << windSpeed << " " << clouds << " clouds\n";
}
