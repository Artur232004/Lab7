#pragma once
#include "json.hpp"
#include "Service.h"
#include <fstream>
using nlohmann::json;
class JsonService :public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~JsonService() {};
};

