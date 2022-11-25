//File :useless.ms
//A piece of miniscript for demonstration purposes

const N = -100:number;

var a,b:number;

function cube(i:number):number{
	return i*i*i;
};

function add(n:number,k:number):number{
	var j:number;
	j=(N-n) + cube(k);

	writeNumber(j);
	return j;
/*Here you can see
*some multine comments..
*/
	if (j==14){
		j=15+3;
		a=a%j;
		a=a*j;

	}else if(j<10){
	   a= a+b;
	};
	if (j!=14){
		j=15+3;
	};
	else{
		kk=24;
	};
};



function start():void {
	a = readNumber();
	b=readNumber();
	add(a,b);
}
