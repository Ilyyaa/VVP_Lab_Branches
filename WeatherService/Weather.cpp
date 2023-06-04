#include "Weather.h"

Weather::Weather(std::string city, double lon, double lat, double temperature, std::string weather, double windSpeed, int clouds)
{
	city = city; lon = lon; lat = lat; temperature = temperature; weather = weather;
	windSpeed = windSpeed; clouds = clouds;
}

std::ostream& Weather::operator<<(std::ostream& out)
{
	out << city << std::endl;
	out << lon << std::endl;
	out << lat << std::endl;
	out << temperature << std::endl;
	out << weather << std::endl;
	out << windSpeed << std::endl;
	out << clouds << std::endl;
}


