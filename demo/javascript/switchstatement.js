function caseinswitch(val) {
    var answer = "";
    switch (val) {
        case 1:
            answer = "first";
            break;
        case 2:
            answer = "second";
            break;
        case 3:
            answer = "third";
            break;
        case 4:
            answer = "fourth";
            break;
        case 5:
            answer = "fifth";
            break;
        case 6:
            answer = "sixth";
            break;
        case 7:
            answer = "seventh";
            break;
        default:
            answer = "not found";
            break;
    }
    return answer;

}

console.log(caseinswitch(9));