/* What is Constructor?

Special method used to initialize object data

Same name as class

No return type (not even void)

Must be written inside class but outside main() */




//////////////////use of constructor in java///////////////////////
class constructor{
    int id;
    String name;
    constructor(int id , String name) {
        this.id=id;
        this.name=name;
    }
    public static void main(String args[]){
        constructor obj= new constructor(1,"SURYANSH");
        System.out.println(obj.id+" "+obj.name);
    }
}
///////class is an template of an object....an object is an instance of a class
    //class---->LOGICAL SONSTRUCT----
    //object---->PHYSICAL REALITY----
    class student{
    String[] name= new String[5];
    float[] marks = new float[5];
    int rollno[] = new int[5];
    }
 student ayush;
/////////instance variables///---> variables that are inside the object are the instance variables....




