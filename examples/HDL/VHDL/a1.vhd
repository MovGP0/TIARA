library IEEE;
use IEEE.std_logic_1164.all;

package my_package is
    function test_function1(a, b: integer) return integer;
end my_package;

library IEEE;
use IEEE.std_logic_1164.all;

package body my_package is

    function test_function1(a, b: integer) return integer is
      variable c: integer;
    begin       
      c := 0; 
      for i in 0 to 3 loop
       c := c+i;          
       c := c+i;          
      end loop; 
      return c;
    end;   

end my_package; 
