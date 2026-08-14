library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;

entity SPI is 
 port(
  clk: OUT std_logic;
  rs, sdi, cs, lda, shdn: OUT std_logic
 );
end SPI; 

architecture arch of SPI is
 constant CLOCK_PERIOD: time := 500 ns;
 signal	cpu_state, reset_state, data_state: integer := 0;
 signal clk_signal, clock_control: std_logic; 
 signal clock_controlled: integer;
begin

 shdn <= '1';
 
 clk_process: process
 begin
  clk_signal <= '1';
  wait for CLOCK_PERIOD;
  clk_signal <= '0';
  wait for CLOCK_PERIOD;
 end process;
 
 process(clk_signal, clock_controlled) 
 begin			   
  if clock_controlled = 2 then
   clk <= clk_signal;		  
  else
   clk <= '1';
  end if;
 end process;
 
 clk_control: process(clk_signal, clock_control)
 begin
  if clock_control'event and clock_control = '0' then
   clock_controlled <= 0;
  end if;		   
  if clock_control'event and clock_control = '1' then
   clock_controlled <= 1;
  end if;		   
  if clock_controlled = 1 and clk_signal = '1' then
   clock_controlled <= 2;
  end if;
 end process; 
 
 fsm: process(clk_signal)
  variable idx: integer; 
  variable data: std_logic_vector(11 downto 0);
 begin
  if clk_signal'event and clk_signal = '0' then
   case cpu_state is
    when 0 =>
     case reset_state is
      when 0 =>
       rs <= '1';
       sdi <= '0';
       cs <= '1';
       lda <= '0';
       reset_state <= reset_state+1;
      when 1 =>
       rs <= '0';
       data := "000000000000";
       data_state <= 0;
       reset_state <= reset_state+1;
      when 2 =>
       rs <= '1';
       reset_state <= reset_state+1;
      when 3 =>
       rs <= '1';
       reset_state <= 0;
       cpu_state <= cpu_state+1;
      when others => null; 
     end case;
    when 1 =>
     if data_state = 0 then
       cs <= '0';
       lda <= '1';
       idx := 11;  
       clock_control <= '1';
       if data = 4096 then
        cpu_state <= 0;
       end if;
       data_state <= data_state+1;
     elsif data_state <= 12 then
      sdi <= data(idx);
      idx := idx-1;
      data_state <= data_state+1;
     elsif data_state = 13 then
      clock_control <= '0';
      data := data+1;
      cs <= '1';
      lda <= '0';  
      sdi <= '0';
      data_state <= data_state+1;
     elsif data_state = 14 then
      data_state <= data_state+1;
     elsif data_state = 15 then
      data_state <= 0;
     end if;      
    when others => null; 
   end case;
  end if;
 end process;
 
end arch;
