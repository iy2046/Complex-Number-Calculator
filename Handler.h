#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Handler{
    public:
        static int print_and_get_choices(){
            // To DO
            int select;
            cout<<"Please choose one of the following options: "<<endl; 
            cout<<"(1) Add"<<endl; 
            cout<<"(2) Subtract"<<endl; 
            cout<<"(3) Multiply"<<endl; 
            cout<<"(4) Divide"<<endl; 
            cout<<"(5) Find Conjugate"<<endl; 
            cout<<"(6) Quit"<<endl; 
            cout<<"============================================"<<endl;
            cout<<"What is your choice (Please enter a number)? "<<endl;
            cin>>select;
            return select; 
        }
        static void add_two_complex_numbers(){
            // To DO
            cout<<"Adding two complex numbers: "<<endl;
            cout<<"============================================"<<endl;
            Complex firstNum = user_input("Enter the first number without spaces (for example: 2+i3): ");
            Complex secondNum = user_input("Enter the second number without spaces (for example: 2+i3): ");
            Complex output = firstNum+secondNum;
            cout<<"result is: "<<result_format(output)<<endl;
        }
        static void subtract_two_complex_numbers(){
            // To DO
            cout<<"Subtract two complex numbers: "<<endl;
            cout<<"============================================"<<endl;
            Complex firstNum = user_input("Enter the first number without spaces (for example: 2+i3): ");
            Complex secondNum = user_input("Enter the second number without spaces (for example: 2+i3): ");
            Complex output = firstNum-secondNum;
            cout<<"result is: "<<result_format(output)<<endl;
        }
        static void multiply_two_complex_numbers(){
            // To DOndl;
            cout<<"Multiply two complex numbers: "<<endl;
            cout<<"============================================"<<endl;
            Complex firstNum = user_input("Enter the first number without spaces (for example: 2+i3): ");
            Complex secondNum = user_input("Enter the second number without spaces (for example: 2+i3): ");
            Complex output = firstNum*secondNum;
            cout<<"result is: "<<result_format(output)<<endl;
        }
        static void divide_two_complex_numbers(){
            // To DO
            cout<<"Divide two complex numbers: "<<endl;
            cout<<"============================================"<<endl;
            Complex firstNum = user_input("Enter the first number without spaces (for example: 2+i3): ");
            Complex secondNum = user_input("Enter the second number without spaces (for example: 2+i3): ");
            Complex output = firstNum/secondNum;
            cout<<"result is: "<<result_format(output)<<endl;
        }
        static void find_conjugate_of_a_complex_number(){
            // To DO
            cout<<"Find Conjugate of a complex number: "<<endl;
            cout<<"============================================"<<endl;
            Complex firstNum = user_input("Enter the number without spaces (for example: 2+i3): ");
            Complex output = firstNum.conjugate();
            cout<<"result is: "<<result_format(output)<<endl;
        }
        static Complex user_input(string number) {
            string input;
            cout<<number<<endl;
            cin>>input;
            float realNum = 0;
            float imagineNum = 0;

            if (sscanf(input.c_str(), "%f+i%f", &realNum, &imagineNum) == 2) {}
            else if (sscanf(input.c_str(), "%f-i%f", &realNum, &imagineNum) == 2) {
                imagineNum = -(imagineNum);
            }
            return Complex(realNum, imagineNum);
        }
        static string result_format(Complex& output) {
            string result;
            float real_section = output.real_getter();
            float imaginary_section = output.imagine_getter();

            if (real_section == static_cast<int>(real_section)) {
                result += to_string(static_cast<int>(real_section));
            }
            else {
                result += to_string(real_section);
            }
            if (imaginary_section<0) {
                result += "-i";
                imaginary_section = -(imaginary_section);
            }
            else {
                result += "+i";
            }
            if (imaginary_section == static_cast<int>(imaginary_section)) {
                result += to_string( static_cast<int>(imaginary_section) );
            }
            else {
                result += to_string(imaginary_section);
            }
            return result;
        }
};