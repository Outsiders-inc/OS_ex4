/*
 * Cache.cpp
 *
 *  Created on: 27 במאי 2015
 *      Author: shaj
 */

#include "Cache.h"


Cache::Cache(unsigned int numOfBlocks, unsigned int  blockSize)
{
	typedef char block[blockSize];
	cache.reserve(numOfBlocks);
	// TODO Auto-generated constructor stub

}

Cache::~Cache() {
	// TODO Auto-generated destructor stub
}

