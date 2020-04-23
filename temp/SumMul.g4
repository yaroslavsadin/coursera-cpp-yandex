grammar SumMul;

main
  : expr EOF  // EOF - специальный токен, означающий конец входных данных
  ;

expr
  : expr MUL expr #Mul  // первая альтернатива (наивысший приоритет операции)
  | expr ADD expr #Add  // вторая альтернатива
  | NUMBER #Number        // третья альтернатива (наименьший приоритет операции)
  ;

ADD: '+' ;
MUL: '*' ;
NUMBER: [0-9]+ ;

WS: [ \t\n\r]+ -> skip ;  // токен WS пропускается и не попадает в поток токенов