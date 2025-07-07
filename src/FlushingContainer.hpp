#include <memory>
#include <string>

namespace aqtc {

// Let's implement a data structure whose job it'll be to accept data and flush it to some output
//
// The flushing policy will be such that once the container accumulates n values, it'll flush them.
// Let's also implement a basic stderr flusher for this.

class Flusher {
public:
    void flush(const std::string&);
};

class FlushingContainer {
public:
    FlushingContainer(int n, std::unique_ptr<Flusher> flusher);

    void add(std::string value);
};
}