-- Generated   : 07/10/22 11:37:05

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_unsigned.all;

entity SAMPLE is
	port (
		reset: in std_logic;
		CLK: in std_logic;
		x: in std_logic;
		z: out std_logic);
end;

architecture SAMPLE_arch of SAMPLE is 

-- SYMBOLIC ENCODED state machine: SMachine0
type SMachine0_type is (S1,S2,S3,S4);
signal SMachine0: SMachine0_type := S1;

begin
-- concurrent signals assignments
-- diagram ACTION

-----------------------------------------------------------------------------
-- Machine: SMachine0
-----------------------------------------------------------------------------
SMachine0_machine: process (CLK)
begin

if reset='1' then

	z<='0';

	SMachine0 <= S1;

elsif CLK'event and CLK = '1' then 
	-- Set default values for registered outputs/signals and for variables
	--..
	case SMachine0 is


		when S1 =>
			
			if x='1' then

				SMachine0 <= S2;

			elsif x='0'then

				SMachine0 <= S1;

			end if;


		when S2 =>
			
			if x='0' then

				z<='0';

				SMachine0 <= S3;

			elsif x='1'then

				z<='0';

				SMachine0 <= S2;

			end if;


		when S3 =>
			
			if x='1' then

				SMachine0 <= S2;

			elsif x='0'then

				SMachine0 <= S4;

			end if;


		when S4 =>
			
			if x='0' then

				z<='1';

				SMachine0 <= S1;

			elsif x='1'then

				z<='1';

				SMachine0 <= S2;

			end if;


		when others =>
			null;

	end case;
end if;
end process;

end SAMPLE_arch;
