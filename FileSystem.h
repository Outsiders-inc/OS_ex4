/*
 * FileSystem.h
 *
 *  Created on: 27 במאי 2015
 *      Author: shaj
 */

#ifndef FILESYSTEM_H_
#define FILESYSTEM_H_

#include "Cache.h"

class FileSystem
{
public:
	FileSystem(unsigned int numOfBlocks, unsigned int  blockSize);
	virtual ~FileSystem();
};

#endif /* FILESYSTEM_H_ */
