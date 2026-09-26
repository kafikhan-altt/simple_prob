import java.util.Scanner;

class Book {
    private String title;
    private String author;

    Book(String title, String author) {
        this.title = title;
        this.author = author;
    }

    void display() {
        System.out.println("Title  : " + title);
        System.out.println("Author : " + author);
    }
}

class EBook extends Book {
    private double fileSize;

    EBook(String title, String author, double fileSize) {
        super(title, author);
        this.fileSize = fileSize;
    }

    @Override
    void display() {
        super.display();
        System.out.println("Type   : E-Book");
        System.out.println("Size   : " + fileSize + " MB");
    }
}

class PrintedBook extends Book {
    private int pages;

    PrintedBook(String title, String author, int pages) {
        super(title, author);
        this.pages = pages;
    }

    @Override
    void display() {
        super.display();
        System.out.println("Type   : Printed Book");
        System.out.println("Pages  : " + pages);
    }
}

public class Library {
    public static void main(String[] args) {

        Book b1 = new EBook("Java Programming", "James", 5.2);
        Book b2 = new PrintedBook("Data Structures", "Mark", 450);

        System.out.println("---- E-BOOK ----");
        b1.display();

        System.out.println("\n---- PRINTED BOOK ----");
        b2.display();
    }
}