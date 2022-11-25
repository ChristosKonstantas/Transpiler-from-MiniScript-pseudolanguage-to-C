// File: prime.ms
var limit, num, counter: number;

function prime(n: number): boolean {
   var i: number; 
   var result, isPrime: boolean;
      
   
   
   return result;
};

function start(): void {

   limit = readNumber();
   counter = 0;
   num = 2;

   while (num <= limit) { 
      if (prime(num)) { 
         counter = counter + 1;
         writeNumber(num);
         writeString(" ");
      };
      num = num + 1;
   };
  
   writeString("\n");
   writeNumber(counter);   
}
