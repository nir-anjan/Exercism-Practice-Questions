<strong>Introduction</strong>
<br>
<br>
Namespaces
<br>
<br>
An important method for code organization are namespaces. Two functions might have a naming collision, which can be resolved by putting them in different namespaces. Namespaces can be nested, which might help to structure big code bases. Access to the namespaces is done via the scope-resolution operator ::.
<br>
The example below shows the use of two different foo functions. They are used together by prefixing their respective namespaces.
<br>
namespace my_ns {
    int foo() {
        return 44;
    }
    namespace my_inner_ns {
        int baz() {
            return 90;
        }
    }
}
namespace my_other_ns {
    int foo() {
        return -2;
    }
}
int myresult{my_ns::foo() + my_other_ns::foo() * my_ns::my_inner_ns::baz()};
<be>

**Instructions**
<be>
<br>
You work for a prestigious law firm that is specialized in handling unique testament requests.
<br>
In this exercise, you are going to open a mysterious vault. You are the executor of the estate and will assemble the long-kept secret codes of three families to get an account number and the matching code.
<br>
To prevent any family from opening the vault alone, it can only be opened by combining their knowledge with a secret modifier that you know from the last will.
<br>
You have three tasks, all related to helping the families to open the vault.
<be>
<strong>1. Take your seat in front of the families and lay out your papers</strong>
<br>
Define a namespace called estate_executor. The code from the next tasks should be defined in the body of the estate_executor namespace.

namespace some_name {
    // The space between the curly brackets
    // is called body of the  namespace.
}
<be>
<br>
<strong>2. Find the secret account number</strong>
<be>
<br>
This is your big moment. Only you have the secret modifier key to reveal the secret account number.
<br>
Define the assemble_account_number(int secret_modifier) function that takes the secret modifier as an argument and returns the assembled account number as an int.
<br>
To get the correct number, you have to sum up the bank_number_part from each of the three families.
<be>
<br>
<strong>3. Last step: Enter the secret code</strong>
<be>
<br>
The instructions in the testament ask you to add all the blue and then all the red fragments. The resulting code is obtained by multiplying both sums.
<br>
Define the assemble_code() function that returns the resulting code by combining the fragments from the three families to a single integer. The function does not have any arguments and relies solely on the information in the relevant namespaces from the families.
