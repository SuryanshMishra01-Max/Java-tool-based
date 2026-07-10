interface Greeting {
    void sayHello(String name);
}

public class Lambdaexp {
    public static void main(String[] args) {

        Greeting g = (name) -> {
            System.out.println("Hello " + name);
        };

        g.sayHello("Suryansh");
    }
}





