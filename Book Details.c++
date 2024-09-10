#include <iostream>
#include <string>

class Book {
private:
    int bookID;
    int pages;
    double price;

public:
    // Constructor
    Book(int id, int pg, double pr) : bookID(id), pages(pg), price(pr) {}

    // Setter functions
    void setBookID(int id) { bookID = id; }
    void setPages(int pg) { pages = pg; }
    void setPrice(double pr) { price = pr; }

    // Getter functions
    int getBookID() { return bookID; }
    int getPages() { return pages; }
    double getPrice() { return price; }

    // Function to show book details
    void showBookDetails() {
        std::cout << "Book ID: " << bookID << std::endl;
        std::cout << "Number of Pages: " << pages << std::endl;
        std::cout << "Price: " << price << std::endl;
    }
};

int main() {
    // Create 2 objects of Book dynamically
    Book* book1 = new Book(1, 200, 500.0);
    Book* book2 = new Book(2, 300, 700.0);

    // Print the details of both books
    std::cout << "Book 1 Details:" << std::endl;
    book1->showBookDetails();

    std::cout << "\nBook 2 Details:" << std::endl;
    book2->showBookDetails();

    // Determine which book is costlier
    if (book1->getPrice() > book2->getPrice()) {
        std::cout << "\nBook 1 is costlier." << std::endl;
    } else {
        std::cout << "\nBook 2 is costlier." << std::endl;
    }

    // Don't forget to delete dynamically allocated memory
    delete book1;
    delete book2;

    return 0;
}