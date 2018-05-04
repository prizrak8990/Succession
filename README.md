# Succession

# Результаты работы программы:

B::foo  
B::bar   
A::baz   
C::foo   
C::bar   
A::baz   

# Объяснение результатов

В 26 строчке мы динамически выделяем память под указатель типа А со значениями типа В.   
В 27 строчке вызываем функцию foo класса В потому что она переопределена в таблице виртуальных функций (A::foo -> B::foo), поэтому результатом этой фунции будет B::foo.    
В 28 строчке вызываем функцию bar класса В потому что она переопределена в таблице виртуальных функций(A::bar -> B::bar), поэтому результатом этой фунции будет B::bar.    
В 29 строчке вызываем функцию baz класса В, но она не виртуальная в классе А, и поэтому не была переопределена в таблице виртуальных фуцкций(A::baz), поэтому результаом стал вывод A::baz.     

В 31 строчке мы динамически выделяем память под указатель типа А со значениями типа С.   
В 32 строчке вызываем функцию foo класса С потому что она переопределена сначала в В, а потом и в С(A::foo -> B::foo -> C::foo), поэтому результатом этой фунции будет С::foo.     
В 33 строчке вызываем функцию bar класса С потому что она переопределена в таблице виртуальных функций(A::bar -> B::bar -> C::bar), поэтому результатом этой фунции будет С::bar.(Пояснение. Хоть и в классе В функция bar не является virtual,она в таблице виртуальных функций все равно будет переопределена конструктором класса С, потому что изначально в родительном классе А она была virtual).     
В 34 строчке вызываем функцию baz класса c, но она не виртуальная в классе А, и поэтому не была переопределена в таблице виртуальных фуцкций(A::baz), поэтому результаом стал вывод A::baz.
