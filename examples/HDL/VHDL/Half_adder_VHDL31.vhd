------------------------------------
-- TINA VHDL Macro Description Begin
--
-- entity_name:e_Half_add_entity;
-- arch_name:a_Half_add_arch;
-- ports:A,B;S,C;
--
-- TINA VHDL Macro Description End
------------------------------------

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

BEGIN

S <= (A xor B); 
C<= (A and B); 

END a_Half_add_arch;
