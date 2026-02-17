/* calculating the last digit of the string
var lastname="hellP";
var lastnamelength=lastname[lastname.length-1];
console.log(lastnamelength)
 */

/* function mywordbank(noun,verb,adjective,){
var result="";
result += "The " + noun + " " + adjective + " " + verb + " for the store";
return result;
}
console.log(mywordbank("dog", "fast", "is",)); 
*/

/* var myarray=["yooo",1,"hi",2];
var mydata= myarray[1];
console.log(mydata); */

/* var myarray=["yooo",1,"hi",2];
var theplace=myarray[0];
console.log(theplace); */

/* var myarray=[2,"hello ayush",8,9];
myarray[3]=87;
var myarray=[2,"hello ayush",8,9];
myarray[1]=63;
console.log(myarray); */

/* var myarray=[["ayush",9,0,3,2,1],["broo",8,7],2,5];
var mydata=myarray[0][1];
console.log(mydata); */
//to add something on array we use push mehthod

/* var myarray = [2, "hello ayush", 8, 9];
myarray.push = (["yoo", 9]);
console.log(myarray); 
*/

/* var myarray=["hello there",2,8,0,54];
var deletearray=myarray.shift();
console.log(deletearray); 
*/

/* var myarray=["brooo",["hello"]];
myarray.shift();
console.log(myarray); 
*/

/* 
function myfunctioncode(){
    console.log("hello there");
}  

 myfunctioncode(); 
*/

/* function fucntionwithargs(a,b){
    console.log(a-b);
}
fucntionwithargs(99,1);
*/

/* var myarray=[[5,9,8],[6,0,8],[3,1,2]];
var mydata=myarray[1][2];
console.log(mydata); */

/* 
 function myfunction(a,b){
    var myvar=5;
    console.log(myvar);
 
 }
*/


/*    var outerwear="tshirt";
 function myfunction(){
    var outerwear="sweater";
  return outerwear;
 }
    console.log(myfunction());
    console.log(outerwear); 
*/

/* var processed = 0;
function processArg(num) {
    return (num + 3) / 5;
}
processed = processArg(7);
console.log(processed); 
or we can also do it like this
//console.log(processArg(7));//  */

/* function nextinline(arr,item){
arr.push(item);
return item;
}
var testarr=[1,2,3,4,5];
console.log("Before: " + JSON.stringify(testarr)); 
//JSON.stringify is just a method to show array in string form
console.log(nextinline(testarr,6));
console.log("After: " + JSON.stringify(testarr));   */  


/*function testequal(value){
    if(value==12) {
        return"equal";  
}
 return"not equal";
}
console.log(testequal(12)); */

/* 
function compareequality(a,b){
    if (a===b){
        return "equal";
    }
    return "not equal";

}
//change this value to test
console.log(compareequality(10,10));
 */ 

/* function testelse(val){
 var return ;
if (val<10){
    return "value less than 10";
}
else if (val<5){
    return  "5 or smaller";
}
else{
return "greater than or equal to 10";
}
console.log(testelse(4)); */
}

/* function testnum(val){
    if (val>100){
        return "greater than 100";
    }
    if (val>10){
        return "greater than 10";
    }
    return "10 or smaller";
} 
 console.log(testnum(9)); */
        
             //the golf code//
 var names["hole in one","eagle","birdie","par","bogey","double bogey","home"];
    function golfscore(par,strokes){
        if (strokes==1){
          return names[0];
        }
        else if (strokes<=par-2){
            return names[1];
        }
        else if(strokes==par-1){
            return names[2];
        } else if (strokes== par-3){
            return names[3];
        }
        return "change me"
    }

