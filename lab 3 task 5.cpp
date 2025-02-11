#include <iostream>
using namespace std;
class Book{
	string bookname;
	string isbn;
	string author;
	string publisher;
public:
Book(string name, string number, string authorname, string publishername){
	this->bookname=name;
	this->isbn=number;
	this->author=authorname;
	this->publisher=publishername;
}
string getbookname(){
return this->bookname;
}
string getisbn(){
return this->isbn;
}
string getauthor(){
return this->author;
}
string getpublisher(){
return this->publisher;
}
string getBookInfo(){
 return "Book name:" + this->bookname + "\n" + "ISBN:" + this->isbn + "\n" + "Author name:" + this->author +"\n" + "Publisher: " + this->publisher;
}
};
int main(){
	Book b[5] { 
	Book("The Great Gatsby", "9780743273565", "F. Scott Fitzgerald", "Scribner"),
	Book("1984", "9780451524935", "George Orwell", "Harcourt Brace Jovanovich"),
    Book("To Kill a Mockingbird", "9780061120084", "Harper Lee", "J.B. Lippincott & Co."),
    Book("Moby-Dick", "9781503280786", "Herman Melville", "Harper & Brothers"),
    Book("The Catcher in the Rye", "9780316769488", "J.D. Salinger", "Little, Brown and Company")
};
for (int i=0;i<5;i++){
	cout << b[i].getBookInfo()<<"\n" <<endl;
}
return 0;
}