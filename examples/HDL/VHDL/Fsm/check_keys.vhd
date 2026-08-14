-- Generated   : 07/10/22 22:58:57

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_unsigned.all;

entity SAMPLE is
	port (
		reset: in std_logic;
		CLK: in std_logic;
		a: in std_logic;
		b: in std_logic;
		c: in std_logic;
		d: in std_logic;
		NG: in std_logic;
		M: out std_logic;
		L: out std_logic);
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
	L<='0';
	M<='0';
	SMachine0 <= S1;

elsif CLK'event and CLK = '1' then 
	-- Set default values for registered outputs/signals and for variables
	--..
	case SMachine0 is
		when S1 =>
			if NG='1' then
				L<='1';
				SMachine0 <= S2;
			end if;
		when S2 =>
			if a='1' and b='0' and c='0' and d='0' then
				L<='0';
				SMachine0 <= S3;
			elsif a='0' or b='1' or c='1' or d='1'then
				L<='0';
				SMachine0 <= S4;
			end if;
		when S3 =>
			if a='0' or b='0' or c='0' or d='1' then
				L<='1';
				SMachine0 <= S6;
			elsif a='1' and b='1' and c='1' and d='0'then
				L<='1';
				SMachine0 <= S5;
			end if;
		when S4 =>
				L<='1';
				SMachine0 <= S6;
		when S5 =>
			if a='1' or b='1' or c='0' or d='0' then
				L<='0';
				SMachine0 <= S8;
			elsif a='0' and b='0' and c='1' and d='1'then
				M<='1'; 
				L<='0';
				SMachine0 <= S7;
			end if;
		when S6 =>
				L<='0';
				SMachine0 <= S8;			
		when S7 =>
				M<='0'; 
				SMachine0 <= S1;				
		when S8 =>
				SMachine0 <= S1;			
		when others =>
			null;
	end case;
end if;
end process;

end SAMPLE_arch;
