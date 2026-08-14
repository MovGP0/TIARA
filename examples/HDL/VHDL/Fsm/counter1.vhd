-- Generated   : 10/18/2007 9:23:02 PM

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_unsigned.all;

entity SAMPLE is
	port (
		reset: in std_logic;
		CLK: in std_logic;
		q: out std_logic_vector ( 2 downto 0 ));
end;

architecture SAMPLE_arch of SAMPLE is 

-- SYMBOLIC ENCODED state machine: SMachine0
type SMachine0_type is (S1,S2,S3,S4,S5,S6,S7,S8);
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
			q<="000";
			if reset='0' then

				SMachine0 <= S2;

			end if;


		when S2 =>
			q<="001";
			if reset='1' then

				SMachine0 <= S1;

			elsif reset='0'then

				SMachine0 <= S3;

			end if;


		when S3 =>
			q<="010";
			if reset='1' then

				SMachine0 <= S1;

			elsif reset='0'then

				SMachine0 <= S4;

			end if;


		when S4 =>
			q<="011";
			if reset='1' then

				SMachine0 <= S1;

			elsif reset='0'then

				SMachine0 <= S5;

			end if;


		when S5 =>
			q<="100";
			if reset='1' then

				SMachine0 <= S1;

			elsif reset='0'then

				SMachine0 <= S6;

			end if;


		when S6 =>
			q<="101";
			if reset='1' then

				SMachine0 <= S1;

			elsif reset='0'then

				SMachine0 <= S7;

			end if;


		when S7 =>
			q<="110";
			if reset='1' then

				SMachine0 <= S1;

			elsif reset='0'then

				SMachine0 <= S8;

			end if;


		when S8 =>
			q<="111";
			if reset='1' then

				SMachine0 <= S1;

			elsif reset='0'then

				SMachine0 <= S1;

			end if;


		when others =>
			null;

	end case;
end if;
end process;

end SAMPLE_arch;
