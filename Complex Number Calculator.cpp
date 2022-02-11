#include <iostream>
using namespace std;

class ComplexNumber {

    public:
        double real;
        double imaginary;

        void add(ComplexNumber a, ComplexNumber b) {

            //Just add real- and imaginary-parts
            double real = a.real + b.real;
            double imaginary = a.imaginary + b.imaginary;
            ComplexNumber c = ComplexNumber(real, imaginary);
            cout << "a + bi = " << c.real << " + (" << c.imaginary << ") * i" << endl; 
        }

        void sub(ComplexNumber a, ComplexNumber b) {

            //Just subtract real- and imaginary-parts
            double real = a.real - b.real;
            double imaginary = a.imaginary - b.imaginary;
            ComplexNumber c = ComplexNumber(real, imaginary);
            cout << "a - b = " << c.real << " + (" << c.imaginary << ") * i" << endl; 
        }

        void multiply(ComplexNumber a, ComplexNumber b) {

            //Use binomial theorem to find formula to multiply complex numbers
            double real = a.real * b.real - a.imaginary * b.imaginary;
            double imaginary = a.imaginary * b.real + a.real * b.imaginary;
            ComplexNumber c = ComplexNumber(real, imaginary);
            cout << "a * b = " << c.real << " + (" << c.imaginary << ") * i" << endl; 
        }


        void divide(ComplexNumber a, ComplexNumber b) {

            //Again binomial theorem
            double real = (a.real * b.real + a.imaginary * b.imaginary) / (b.real * b.real + b.imaginary * b.imaginary);
            double imaginary = (a.imaginary * b.real - a.real * b.imaginary) / (b.real * b.real + b.imaginary * b.imaginary);
            ComplexNumber c = ComplexNumber(real, imaginary);
            cout << "a : b = " << c.real << " + (" << c.imaginary << ") * i" << endl; 
        }

    /*
     * Constructor to create complex numbers
     */
    ComplexNumber(double real, double imaginary) {
        this->real = real;
        this->imaginary = imaginary;
    }
};

int main() {

    /*
     * Variables for the real- and imaginary-parts of
     * two complex numbers
     */
    double realA;
    double imaginaryA;
    double realB;
    double imaginaryB;
    int option;
    
    /*
	 *About Auther
	 */
    cout << "\t***Programmer Name: M Mustafa***\n\t***Reg.No:19MDELE045***\n";
    cout << "----------------------------------------\n";
    cout << "\n\tCompex Number Calculator\n\n";
    cout << "----------------------------------------\n";

    /*
     * User input
     */
    while(option !=5)
    {
    	cout << "\t1.Addition\n";
	    cout << "\t2.Subtraction\n";
		cout << "\t3.Multiplication\n";
		cout << "\t4.Division\n";
		cout << "\t5.Exit\n";
    	cout << "Please Select your choice for Calculation:\n";
    	cin>>option;
    	switch(option)
    	{
    		case 1:
			{	
    		cout << "Enter two complex numbers to Add According to the below instructions:\n";
			cout << "real(A), imag(A), real(B) and imag(B)\n";
    		cin >> realA >> imaginaryA >> realB >> imaginaryB;
    		 /*
     		  * Creation of two objects of the type "ComplexNumber"
     		  */
    		ComplexNumber a = ComplexNumber(realA, imaginaryA);
   			ComplexNumber b = ComplexNumber(realB, imaginaryB);

   			 /*
    		  * Calling the functions to add the two complex numbers.
    		  */
    		 a.add(a, b);
    		break;
    		
        	}
        	
    		case 2:
			{
    		cout << "Enter two complex numbers to Subtract According to the below instructions:\n";
			cout << "real(A), imag(A), real(B) and imag(B)\n";
    		cin >> realA >> imaginaryA >> realB >> imaginaryB;
    		 /*
     		  * Creation of two objects of the type "ComplexNumber"
     		  */
    		ComplexNumber a = ComplexNumber(realA, imaginaryA);
   			ComplexNumber b = ComplexNumber(realB, imaginaryB);

   			 /*
    		  * Calling the functions to subtract the two complex numbers.
    		  */
    		 a.sub(a, b);
    		break;
  		    }
  		    
  		    case 3:
			{
    		cout << "Enter two complex numbers to Multiply According to the below instructions:\n";
			cout << "real(A), imag(A), real(B) and imag(B)\n";
    		cin >> realA >> imaginaryA >> realB >> imaginaryB;
    		 /*
     		  * Creation of two objects of the type "ComplexNumber"
     		  */
    		ComplexNumber a = ComplexNumber(realA, imaginaryA);
   			ComplexNumber b = ComplexNumber(realB, imaginaryB);

   			 /*
    		  * Calling the functions to Multiply the two complex numbers.
    		  */
    		 a.multiply(a, b);
    		break;
  		    }
  		    
  		    case 4:
			{
    		cout << "Enter two complex numbers to Divide According to the below instructions:\n";
			cout << "real(A), imag(A), real(B) and imag(B)\n";
    		cin >> realA >> imaginaryA >> realB >> imaginaryB;
    		 /*
     		  * Creation of two objects of the type "ComplexNumber"
     		  */
    		ComplexNumber a = ComplexNumber(realA, imaginaryA);
   			ComplexNumber b = ComplexNumber(realB, imaginaryB);

   			 /*
    		  * Calling the functions to Divide the two complex numbers.
    		  */
    		 a.divide(a, b);
    		break;
  		    }
    	
		}       //End of Switch
    	
	}        //End of While

}         //End of main
