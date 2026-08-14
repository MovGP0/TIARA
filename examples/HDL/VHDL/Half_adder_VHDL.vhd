LIBRARY ieee, tina;
use ieee.std_logic_1164.all;
use std.textio.all;
USE tina.primitives.all;

------------------------------------
-- entity section                   
------------------------------------
ENTITY e_Half_add_entity IS PORT(
  A : IN std_logic; 
  S : OUT std_logic; 
  C : OUT std_logic; 
  B : IN std_logic );
END e_Half_add_entity;

------------------------------------
-- architecture section
------------------------------------
ARCHITECTURE a_Half_add_arch of e_Half_add_entity IS

 constant delay : time := 20 ns;

BEGIN

 S <= (A xor B) after delay; 
 C <= (A and B) after delay; 

END a_Half_add_arch;
