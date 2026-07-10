interface Message {
    void printMessage(String msg);
}

class Printer {
    public static void display(String msg) {
        System.out.println(msg);
    }
}

public class Methodref{
    public static void main(String[] args) {

        // Method Reference
        Message m = Printer::display;

        m.printMessage("This is method reference");
    }
}
