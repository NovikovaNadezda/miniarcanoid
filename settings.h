﻿#pragma once
#include <string>
#include "SFML/Graphics.hpp"

//ÊÎÍÑÒÀÍÒÛ
const float WINDOW_WIDTH{ 800.f };
const float WINDOW_HEIGHT{ 600.f };
const std::string WINDOW_TITLE{ "SFML Mini Arcanoid P53022" };
const unsigned int FPS{ 60 };

const sf::Vector2f BAT_SIZE{ 100.f, 25.f };
const float BAT_OFFSET{ 10.f };
const sf::Color BAT_COLOR{ 178, 38, 38 };
const sf::Vector2f BAT_START_POS{
	(WINDOW_WIDTH - BAT_SIZE.x) / 2,
	WINDOW_HEIGHT - BAT_OFFSET - BAT_SIZE.y
};
const float BAT_SPEEDX = 5.f;

const float BALL_RADIUS = 17.f;
const sf::Color BALL_COLOR{ 250, 208, 0 };
const sf::Vector2f BALL_START_POS{ (WINDOW_WIDTH - 2 * BALL_RADIUS) / 2,
		WINDOW_HEIGHT - BAT_OFFSET - BAT_SIZE.y - BALL_RADIUS };

const unsigned int FONT_SIZE = 64;
const sf::Vector2f TEXT_POS{ 10.f, -10.f };

const float BRICK_WIDTH = 80.f;
const float BRICK_HEIGHT = 40.f;

const int ROWS = 8;
const int COLUMNS = 10;
