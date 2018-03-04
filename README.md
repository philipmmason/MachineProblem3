# MachineProblem3

Imagine a publishing company that markets both books and audiocassette versions of its works. Create a class publication that stores the title (a string) and price (double) of a publication.

From this class derive two classes:

book, which adds a page count (type int), and
tape, which adds a playing time in minutes (type double). Each of these three classes should have a readData() function to get its data from the user at the keyboard, and a displayData() function to display its data.
Write a main() program to test the book and tape classes by creating a pointer of them asking the user to fill in data with readData(), and then displaying the data with displayData().

Use the following data for the book:

title: Gone with the wind
price: 59.99
pages: 566
Use the following data for the tape:

title: Beethoven
price: 99.99
time in minutes: 60
Print the code and the output.

Now create another base class called sales; that holds an array of the three doubles so that you can record the dollar sales of a particular publication (books or tapes) for the last 3 months (use any numbers you wish). Include a readData() function to get 3 sales amounts from the user, and a displayData() function to display the sales figures.

Alter the book and tape classes so they are derived from both publication and sales. An object of class book or tape should input and output sales data along with its other data.

Modify the main() program to create an array of 3 book objects and 2 tape objects and exercise their input/output capabilities.

Use any number for the books' pages, and the tapes' times. Use any amount for the 3 month sales. Use your own data for the titles and the prices.


Please upload the following:

The class .cpp file
The main program
The class .h file
Output File
