-- Generated   : 07/10/19 17:51:59

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_unsigned.all;

entity SAMPLE is
	port (
		reset: in std_logic;
		CLK: in std_logic;
		q0: out std_logic;
		q1: out std_logic;
		q2: out std_logic);
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
			q0<='0'; 
			q1<='0'; 
			q2<='0';
			if reset='0' then

				SMachine0 <= S2;

			end if;


		when S2 =>
			q0<='1'; 
			q1<='0'; 
			q2<='0';
			if reset='1' then

				SMachine0 <= S1;

			elsif reset='0'then

				SMachine0 <= S3;

			end if;


		when S3 =>
			q0<='0'; 
			q1<='1'; 
			q2<='0';
			if reset='1' then

				SMachine0 <= S1;

			elsif reset='0'then

				SMachine0 <= S4;

			end if;


		when S4 =>
			q0<='1'; 
			q1<='1'; 
			q2<='0';
			if reset='1' then

				SMachine0 <= S1;

			elsif reset='0'then

				SMachine0 <= S5;

			end if;


		when S5 =>
			q0<='0'; 
			q1<='0'; 
			q2<='1';
			if reset='1' then

				SMachine0 <= S1;

			elsif reset='0'then

				SMachine0 <= S6;

			end if;


		when S6 =>
			q0<='1'; 
			q1<='0'; 
			q2<='1';
			if reset='1' then

				SMachine0 <= S1;

			elsif reset='0'then

				SMachine0 <= S7;

			end if;


		when S7 =>
			q0<='0'; 
			q1<='1'; 
			q2<='1';
			if reset='1' then

				SMachine0 <= S1;

			elsif reset='0'then

				SMachine0 <= S8;

			end if;


		when S8 =>
			q0<='1'; 
			q1<='1'; 
			q2<='1';
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
