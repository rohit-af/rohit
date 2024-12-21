function  length(){
    let str1=document.getElementById("first").value;
    let len=str1.length
    document.getElementById("output").innerHTML=len;

}
function charAt(){
    let str1=document.getElementById("first").value;
    let str2=parseInt(document.getElementById("second").value);
    let char=str1.charAt(str2);
    document.getElementById("output").innerHTML=char;
}
function charcodeAt(){
    let str1=document.getElementById("first").value;
    let str2=parseInt(document.getElementById("second").value);
    let char=str1.charCodeAt(str2);
    document.getElementById("output").innerHTML=char;
}
function concate(){
    let str1=document.getElementById("first").value;
    let str2=document.getElementById("second").value;
    let char=str1.concat(str2);
    document.getElementById("output").innerHTML=char;
}