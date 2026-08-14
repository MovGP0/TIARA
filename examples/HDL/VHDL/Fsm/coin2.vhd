-- Generated   : 07/10/25 21:50:48

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_unsigned.all;

entity belyeg2 is
	port (
		reset: in std_logic;
		CLK: in std_logic;
		x1: in std_logic;
		x2: in std_logic;
		z1: out std_logic;
		z2: out std_logic);
end;

architecture belyeg2_arch of belyeg2 is 

-- SYMBOLIC ENCODED state machine: SMachine0
type SMachine0_type is (S1,S2,S3,S4,S5);
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

	SMachine0 <= S1;

elsif CLK'event and CLK = '1' then 
	-- Set default values for registered outputs/signals and for variables
	--..
	case SMachine0 is


		when S1 =>
			z1<='0'; 
			z2<='0';
			if x1='0' and x2='0' then

				SMachine0 <= S1;

			elsif x2='1'then

				SMachine0 <= S3;

			elsif x1='1'then

				SMachine0 <= S2;

			end if;


		when S2 =>
			z1<='0'; 
			z2<='0';
			if x1='0' and x2='0' then

				SMachine0 <= S2;

			elsif x2='1'then

				SMachine0 <= S4;

			elsif x1='1'then

				SMachine0 <= S3;

			end if;


		when S3 =>
			z1<='0'; 
			z2<='0';
			if x1='0' and x2='0' then

				SMachine0 <= S3;

			elsif x1='1'then

				SMachine0 <= S4;

			elsif x2='1'then

				SMachine0 <= S5;

			end if;


		when S4 =>
			z1<='1'; 
			z2<='0';
			if x2='1' then

				SMachine0 <= S3;

			elsif x1='1'then

				SMachine0 <= S2;

			elsif x1='0' or x2='0'then

				SMachine0 <= S1;

			end if;


		when S5 =>
			z1<='1'; 
			z2<='1';
			if x2='1' then

				SMachine0 <= S3;

			elsif x1='1'then

				SMachine0 <= S2;

			elsif x1='0' or x2='0'then

				SMachine0 <= S1;

			end if;


		when others =>
			null;

	end case;
end if;
end process;

end belyeg2_arch;
