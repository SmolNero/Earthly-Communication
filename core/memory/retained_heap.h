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
 public :
	void retain(const std::string& id, const std::string& content, bool core = false);
	void remove(const std::string& id);
	void inspect() const;
	std::vector<RetainedObject> exportCoreMemory() const;


private:
 std::unordered_map<std::string, RetainedObject> heap;

};

#endif // RETAINED_HEAP_H