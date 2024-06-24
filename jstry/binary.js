class Students{
    constructor(){

    }
    sum(v1=4,v2=6){
        return v1+v2;
    }
}

class School extends Students{
    minus(b){
        return this.sum(1,2)-b;
    }
}
const newSum = new Students();
 
const newMinus = new School();
newMinus.sum(1,2);
const newData = newMinus.minus(3);

console.log(newData)