/* class qaz
{
 public static void main(string args[])
 { System.out.println("welcome");

}
} */

/* class Calc {
    public static void main(String[] args) {
        int a = 10;
        int b = 5;

        System.out.println(a + b);
        System.out.println(a - b);
        System.out.println(a * b);
        System.out.println(a / b);
    }
} */


/*     class Calculator{
        public static void main(String[] args){
        System.out.println("heelo wolrd");        }
    } */

        //printing the sum of the two numbers 


/*        import java.util.*;
        class Calculator{
            public static void main(String[] args){
                Scanner sc=new Scanner(System.in);
                System.out.println("enter the first number:");
                int a=sc.nextInt();
                System.out.println("enter the second number:");
                int b=sc.nextInt();
                int sum=a+b;
                System.out.println("the sum of"+a+"and "+b+"is:"+sum);
            }
        } */
 ///printing the even number
 /// 

 /* import java.util.*;
        class Calculator{
            public static void main(String[] args){
                Scanner sc=new Scanner(System.in);
                System.out.println("enter the first number:");
               int a=sc.nextInt();
               if(a%2==0){
                System.out.println(a+"is a even number");
               }
                else{
                    System.out.println("enter a valid number");
                }
               }
            } */


        import java.util.*;
        class Calculator{
            public static void main(String[] args){
                Scanner sc=new Scanner(System.in);
                System.out.println("enter first number a:");
                int a=sc.nextInt();
                System.out.println("enter second number b:");
                int b=sc.nextInt();
                if(a>b){
                    System.out.println("a is greater than b");
                }
                    else if(a<b){
                        System.out.print("b is greater than a");
                    }
                    else {
                        System.out.println("a and b are equal");
                    }
                }
            }
            