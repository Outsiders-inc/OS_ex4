/*
 * Cache.h
 *
 *  Created on: 27 במאי 2015
 *      Author: shaj
 */

#ifndef CACHE_H_
#define CACHE_H_


#include <vector>

typedef char Block[];

using namespace std;

class Cache {
public:
	Cache(unsigned int numOfBlocks, unsigned int  blockSize);
	virtual ~Cache();
private:
	vector<char[]> cache;
};

#endif /* CACHE_H_ */
