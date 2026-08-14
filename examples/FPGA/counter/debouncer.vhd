library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;
                                                                   

entity Debouncer is                                                                                                                                        
port(
  Clk : in Std_Logic; -- 100MHz clock
  PB : in Std_Logic;
  PBDown: out Std_Logic;
  PBUp: out Std_Logic
  );
end Debouncer;                                                                                                                                                  

------------------------------------
-- architecture section
------------------------------------
architecture Debouncer_a of Debouncer is

 signal PBSync : Std_Logic_Vector (2 downto 0);
 signal Cnt : Std_Logic_Vector(20 downto 0);
 signal PBSample : Std_Logic_Vector (1 downto 0);

begin
 process(Clk)
 begin
  if rising_edge(Clk) then	
   PBSync <= PBSync(1 downto 0) & PB;
  end if;
 end process;
                                                                      
 process(Clk)
 begin
  if rising_edge(Clk) then
   if (Cnt(20) = '1') then
    Cnt <= (others => '0');
    PBSample <= PBSample(1) & PBSync(2);
   else
    Cnt <= Cnt + 1;
   end if;
  end if;
 end process;
 
 process(Clk)
 begin
  if rising_edge(Clk) then
   PBDown <= '0';
   PBUp <= '0';
   if PBSample = "01" then
    PBDown <= '1';
   end if;
   if PBSample = "10" then
    PBUp <= '1';
   end if;
  end if;
 end process;
end Debouncer_a;
