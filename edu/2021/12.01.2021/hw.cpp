#include <iostream>
#include <cmath>

using namespace std;

int main(){
  cout << "ЗАДАНИЕ 1" << endl;


  int x = 12345678;
  // Деление на 10^n, где N количество разрядов, позволяет нам уменьшить количество разрядов в числе, чтобы мы могли взять модуль и вытащить нужный нам разряд. 
  cout << x/10000000 << " " << (x/1000000)%10 << " " << (x/100000)%10 << " " << (x/10000)%10 << " " << (x/1000)%10 << " " << (x/100)%10 << " " << (x/10)%10 << " " << x%10 << endl;





//...................................


  cout << endl << endl << "Усложение задания 1" << endl;
  //усложним. Пользователь вводит число, которое мы должны разложить по разрядам. 

  //Число больше 10 разрядов все ломает. Починил. long int во всех int спас. Но я все равно ограничен длинной long int 9223372036854775807, что говорит о том, что пользователь может запросить максимум 19 разрядное число до 9223372036854775807.



  long int y; // задаем пользовательскую переменную, конкретно long, потому что обычный int не сможет вместить значение более 214......
  int z = 0; //задаем изначальное количество разрядов. меньше одного разряда ввести невоможно

  cout << "Введите пользовательское значение: " << endl;
  cin >> y; // пользователь присваивает значение переменной y
  cout << endl;


  //если у нас отрицательное значение, берем модуль, и обозначаем что вывод отрицательный. Зачем выводить разряды и обозначать отрицательное значение? Прост захотелось %)
  if (y < 0) {
      y = fabs(y);
      cout <<  " - " ;
  }

  long int i = y; // присваиваем i значение y и  для расчетов количества разрядов без изменения пользовательского значения


  // создаем цикл проверки. Пока i>=10 мы прибавляем 1 к z (переменной фиксирующей разряды), после чего делим i на 10. Как только y/=10 становится меньше 10, выполнение цикла заканчивается и мы получаем количество разрядов введенного числа в переменной z 
  while ( i >= 10 ){ 
    z++;
    i/=10;
    // cout << z << endl;
  }

  // Зная количество разрядов числа мы можем запустить обратный цикл, в котором будем делить y на 10 в степени z, после чего вычитать 1 разряд из z.
  while ( z >= 0 ){

    long int up = pow(10,z); //выносим 10 возведенную в степень z (количество разрядов) для получения самого "левого" разряда. long int > 11 разрядов. ограничены тем, что возведение в степень z долно придерживаться размера long int

    // cout << up << endl;

    long int count = y/up; //делим заданное пользователем число для получение разряда. long int

    z--;
    
    // cout << y << " " << up << endl;
    cout <<  count%10 << "  ";
    
  }


//..........................................


  cout << endl << endl << "ЗАДАНИЕ 2" << endl;

  double number;//пользовательское число
  cout << "Введите число для проверки задания 2 [2,9]" << endl;
  cin >> number;
  
  
  if (number >= 2 && number <= 9){
  cout << number << " находится в диапазоне [2,9]" << endl;

  } else {
    cout << number << " НЕ находится в диапазоне [2,9]" << endl;
  }


//.........................................

  cout << endl << endl << "ЗАДАНИЕ 3" << endl;

  double numberTwo;
  cout << "Введите число для проверки задания 3 [-89,0] [1,19] [66]" << endl;
  cin >> numberTwo;
  
  if ((numberTwo >= -89 && numberTwo <=0) || (numberTwo >= 1 && numberTwo <= 19) || (numberTwo == 66)){
    cout << numberTwo << " is good";
  } else {
    cout << numberTwo << " is bad";
  }

//.......................................

  cout << endl << endl << "ЗАДАНИЕ 4" << endl;

  double a,b,c,d,numberThree;
  cout << "Введите промежуток для первого диапазона:" << endl;
  cin >> a;
  cin >> b;

  while ( b < a){
    cout << "Второе значение не может быть меньше первого" << endl << "Введите значение больше чем > " << a << endl;
    cin >> b;
  }

  cout << "Введите промежуток для второго диапазона:" << endl;
  cin >> c;
  cin >> d;

  while ( d < c){
    cout << "Второе значение не может быть меньше первого" << endl << "Введите значение больше чем > " << c << endl;
    cin >> d;
  }

  cout << "какое значение будем искать в промежутках" << "[" << a << "," << b << "]" << " и " << "[" << c << "," << d << "]"  << " ?" << endl;
  cin >> numberThree;

  if ((numberThree >= a && numberThree <= b) || (numberThree >= c && numberThree <= d)){
    cout << "Значение входит в промежутки" << endl;
  } else {
    cout << "Значение не входит в заданные промежутки";

  }


}