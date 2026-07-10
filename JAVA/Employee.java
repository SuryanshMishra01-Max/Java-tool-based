////////////////creating class named employee with attributes/////////////////////////////
class Employee{
    int id;
    String name;
    String designation;
    
    Employee(int id, String name, String designation){
        this.id=id;
        this.name=name;
        this.designation=designation;
    }
    public static void main(String args[]){
      Employee emp1= new Employee(1,"suryansh","software developer engineer");
    System.out.println(emp1.id+" "+emp1.name+" "+emp1.designation);

    }
}
