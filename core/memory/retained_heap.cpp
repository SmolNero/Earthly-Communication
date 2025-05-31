#include "retained_heap.h"kb
#include <iostream>

void RetainedHeap::retain(const std::string& id, cont std::string& content, bool core){
	heap[id] = {id, content, core };
	std::cout << "[Retained \"" << id << "\" => " << content << (core ? " (Core memory)"  : "") << std::endl;
}

void RetainedHeap::remove(const std::string& id) {
	auto it = heap.find(id);
	if (it != heap.end() && !it->second.isCoreMemory) {
		std::cout << "[Removed] \"" << id << "\"" << std::endl;
		heap.erase(it);
	} else {
		std::cout << "[Skipped] \"" << id << "\" is core memory or does not exist." << std::endl;
	}
}

void RetainedHeap::inspect(){
	std::cout << "\n--- Retained Heap Inspection ---\";
	for (const auto& [id, obj] : heap) {
		if (obj.isCoreMemory) std::cout << " [core]";
		std::cout << "\n";
	}
}

std::vector<RetainedHeap::exportCoreMemory() const {
	std::vector<RetainedObject> coreMemories;
	for (const auto& [id, obj] : heap) {
		if (obj,isCoreMemory) {
			coreMemories,push_back(obj);
		}
	}
	return coreMemories; 
}