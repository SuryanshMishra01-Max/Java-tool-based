//////////////////////AVERAGE OF ARRAY/////////////////////////
class average {
    public static void main(String[] args) {
        int arr[]={10,20,30,40,50};
        int average;
        int sum=0;
        for (int i=0;i<arr.length;i++){
            sum=sum+arr[i];
        }
        average=sum/arr.length;
        System.out.println("average is "+average);

}
} 

/////////////COPY OF THE ARRAY///////////////// 
class copy {
    public static void main(String[] args){
        int arr[]={1,2,3};
        int copy[]=new int [arr.length]; 
        for(int i=0; i<arr.length; i++){
            copy[i]=arr[i];

        } 
        System.out.println("copy of the array is ");
        for(int i=0; i<copy.length; i++){
            System.out.println(copy[i]);
        }
    }
}

////////////////counting the numbers are even or odd in an array///////////////////
class evenodd{
    public static void main(String[] args){
        int arr[]={1,2,3,4,5,6,7,7,7,7,9,1,9,9,13,24,26}
        int even=0;
        int odd=0;
        for(int i=0; i<arr.length; i++){
            if(arr[i]%2==0){
                System.out.println(arr[i]+"is even");
                even++;
            }
          else{
            System.out.println(arr[i]+"is odd");
            odd++;
          }
        }
        System.out.println("even numbers are"+even);
        System.out.println("odds numbers are"+odd);
    }
}

////////////////////////finding the largest number in the array//////////////////////
class largest{
    public static void main(String[] args){
        int arr[]={25,10,55,30};
        int largest=0;
        for(int i=0; i<arr.length; i++){
            if(arr[i]>largest){
                largest=arr[i];
            }
            else {
                largest=largest;
            }
        }
        System.out.println("largest number is"+largest);
    }
}

////////////////////PRINTING ARRAY IN THE REVERSE ORDER//////////////////////
class reverse{
    public static void main(String[] args){
        int arr[]={1,2,3,4,5,6,7};
       System.out.println("reverse of the array is");
       for(int i>=0; i<arr.length; i++){
         System.out.println("reverse of the array is"+arr[i]);
         
       }
}

//////////////12/03/26////////////
////oops java lab/////
class Account {
    private double balance;   // data hiding

    // constructor
    Account(double initialBalance) {
        balance = initialBalance;
    }

    // deposit method
    void deposit(double amount) {
        if (amount > 0) {
            balance = balance + amount;
            System.out.println("Deposited: " + amount);
        } else {
            System.out.println("Invalid deposit amount");
        }
    }

    // withdraw method
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance = balance - amount;
            System.out.println("Withdrawn: " + amount);
        } else {
            System.out.println("Insufficient balance or invalid amount");
        }
    }

    // getter method
    double getBalance() {
        return balance;
    }
}

public class Main {
    public static void main(String[] args) {

        // create account with initial balance
        Account acc = new Account(1000);

        // display initial balance
        System.out.println("Initial Balance: " + acc.getBalance());

        // deposit money
        acc.deposit(500);

        // withdraw money
        acc.withdraw(300);

        // display final balance
        System.out.println("Final Balance: " + acc.getBalance());
    }
}

