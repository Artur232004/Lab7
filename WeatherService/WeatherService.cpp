#include <iostream>
#include "json.hpp"
#include "pugixml-1.14/src/pugixml.hpp"
#include "Weather.h"
#include "JsonService.h"
using nlohmann::json;

int main()
{
    JsonService js;
    Weather w = js.getWeather("weather.json");

}


