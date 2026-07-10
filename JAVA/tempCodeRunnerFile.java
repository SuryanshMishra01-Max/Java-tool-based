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