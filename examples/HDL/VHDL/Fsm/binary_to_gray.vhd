-- Generated   : 07/10/24 08:03:46

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_unsigned.all;

entity SAMPLE is
	port (
		CLK: in std_logic;
		reset: in std_logic;
		start: in std_logic;
		x: in std_logic;
		z: out std_logic);
end;

architecture SAMPLE_arch of SAMPLE is 

-- SYMBOLIC ENCODED state machine: SMachine0
type SMachine0_type is (S1,S2,S3);
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
			
			if start='0' then

				SMachine0 <= S1;

			elsif start='1'then

				SMachine0 <= S2;

			end if;


		when S2 =>
			
			if x='0' and start='1' then

				z<=x;

				SMachine0 <= S2;

			elsif start='0'then

				z<='0';

				SMachine0 <= S1;

			elsif x='1' and start='1'then

				z<=x;

				SMachine0 <= S3;

			end if;


		when S3 =>
			
			if x='1' and start='1' then

				z<=not x;

				SMachine0 <= S3;

			elsif start='0'then

				z<='0';

				SMachine0 <= S1;

			elsif x='0' and start='1'then

				z<=not x;

				SMachine0 <= S2;

			end if;


		when others =>
			null;

	end case;
end if;
end process;

end SAMPLE_arch;
