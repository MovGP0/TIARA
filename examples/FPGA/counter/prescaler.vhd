library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
                                                                   
entity PreScaler is                                                                                                                                        
port(
  Clk : in Std_Logic;
  PClk : out Std_Logic 
  );
end PreScaler;                                                                                                                                                  

------------------------------------
-- architecture section
------------------------------------
architecture PreScaler_a of PreScaler is

 signal Presc : integer range 50000000 downto 0 := 0;
 signal PClk_s: Std_Logic := '0';

begin
 process(Clk)                                                                     
 begin
  if rising_edge(clk) then                                                       
    --synthesis presc<50000000 (for 1Hz when clock frequency is 100MHz)
	if ( Presc < 50000000 ) then                                                                                                                                  
	  Presc <= Presc + 1;                   
	else
	  Presc <= 0;	
	  PClk_s <= not PClk_s;
	end if;
  end if;
 end process; 
 
 PClk <= PClk_s;
end PreScaler_a;
