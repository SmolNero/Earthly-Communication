#ifndef RETAINED_HEAP_H 
#define RETAINED_HEAP_H

#include <string>
#include <vector>
#include <unordered_map> 	// A map is implemented by the hash table

struct RetainedObject { 
	std::string id;
	std::string content;
	bool isCoreMemory;     // Non-negotiable, foundational truths
 };

 class RetainedHeap {


 	
 }