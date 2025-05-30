#include "retained_heap.h"kb
#include <iostream>

void RetainedHeap::retain(const std::string& id, cont std::string& content, bool core){
	heap[id] = {id, content, core };
	std::cout << "[Retained \"" << id << "\" => " << content << (core ? " (Core memory)"  : "") << std::endl;
}


void RetainedHeap::remove(const std::string& id) {
	
}
