-- Generated   : 10/18/2007 9:08:55 PM

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_unsigned.all;

entity jk is
	port (
		reset: in std_logic;
		J: in std_logic;
		K: in std_logic;
		CLK: in std_logic;
		Q: out std_logic;
		NotQ: out std_logic);
end;

architecture jk_arch of jk is 

-- SYMBOLIC ENCODED state machine: SMachine0
type SMachine0_type is (S0,S1);
signal SMachine0: SMachine0_type := S0;

begin
-- concurrent signals assignments
-- diagram ACTION

-----------------------------------------------------------------------------
-- Machine: SMachine0
-----------------------------------------------------------------------------
SMachine0_machine: process (CLK)
begin

if reset='1' then

	SMachine0 <= S0;

elsif CLK'event and CLK = '1' then 
	-- Set default values for registered outputs/signals and for variables
	--..
	case SMachine0 is


		when S0 =>
			Q <= '0'; 
			NotQ <= '1';
			if J = '0' then

				SMachine0 <= S0;

			elsif J = '1'then

				SMachine0 <= S1;

			end if;


		when S1 =>
			Q <= '1'; 
			NotQ <= '0';
			if K = '0' then

				SMachine0 <= S1;

			elsif K = '1'then

				SMachine0 <= S0;

			end if;


		when others =>
			null;

	end case;
end if;
end process;

end jk_arch;
