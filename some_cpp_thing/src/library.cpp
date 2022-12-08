#include "../include/library.hpp"

class Book {
private:    
    int struggle_counted;
protected:
    std::string copyright;
    std::string writer;
    std::string publisher;
public:
    virtual std::string set_copyright(std::string copy_right);
    virtual void get_copyright();
    virtual std::string set_writer_publisher(std::string w, std::string p);
    virtual void get_writer_publisher();

    void *operator new(size_t size);
    void operator delete(void *latest_memory);
};

std::string Book::set_copyright(std::string copy_right) {
    copyright = copy_right;

    return copyright;
}

void Book::get_copyright() {
    std::cout << "copyright from " << copyright << std::endl;
}

std::string Book::set_writer_publisher(std::string w, std::string p) {
    writer = w;
    publisher = p;

    return writer;
    return publisher;
}

void Book::get_writer_publisher() {
    std::cout << "from the writer " << writer << " and published by " << publisher << std::endl;
}

void *Book::operator new(size_t size) {
    void *new_memory;
    std::cout << "allocated\n";
    new_memory = malloc(size);  
    if(!new_memory) {
        std::bad_alloc ba;
        throw ba;
    }

    return new_memory;
}

void Book::operator delete(void *latest_memory) {
    std::cout << "freeing\n";
    free(latest_memory);
}

int cppthing::access_book() {
    Book *bk;
    bk = new Book;

    bk->set_copyright("the weird is wire");
    bk->get_copyright();

    bk->set_writer_publisher("maulanazn", "gramedia");
    bk->get_writer_publisher();

    delete bk;

    return 0;
}