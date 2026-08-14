------------------------------------
-- TINA VHDL Macro Description Begin
-- 
-- entity_name:sample;
-- arch_name:ignored;
-- ports:clk,a,b,c,d,~cten~(cten_neg),d/~u~(dpun),~load~(load_neg);qa,qb,qc,qd,rco_neg,maxmin;
-- 
-- TINA VHDL Macro Description End  
------------------------------------

-- Generated   : 07/11/04 00:27:01

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_unsigned.all;

entity SAMPLE is
	port (
		CLK: in std_logic;
		A: in std_logic;
		B: in std_logic;
		C: in std_logic;
		D: in std_logic;
		CTEN_neg: in std_logic;
		DpUn: in std_logic;
		Load_neg: in std_logic;
		Qa: out std_logic;
		Qb: out std_logic;
		Qc: out std_logic;
		Qd: out std_logic;
		RCO_neg: out std_logic;
		MaxMin: out std_logic
		);
end;

architecture SAMPLE_arch of SAMPLE is 

-- SYMBOLIC ENCODED state machine: SMachine0
type SMachine0_type is (S1,S2,S3,S4,S5,S6,S7,S8,S9,S10);
signal SMachine0: SMachine0_type := S1;
signal QQ: std_logic_vector(3 downto 0);

begin
-- concurrent signals assignments
-- diagram ACTION

-----------------------------------------------------------------------------
-- Machine: SMachine0
-----------------------------------------------------------------------------
SMachine0_machine: process (CLK,Load_neg)
begin

if Load_neg='0' and D='0' and C='0' and B='0' and A='0' then

	Qa<=A; 
	Qb<=B; 
	Qc<=C; 
	Qd<=D; 
--	MaxMin<='0'; 
--	RCO_neg<='1';
	SMachine0 <= S1;

elsif Load_neg='0' and D='1' and C='0' and B='0' and A='1' then 

	Qa<=A; 
	Qb<=B; 
	Qc<=C; 
	Qd<=D; 
--	MaxMin<='0'; 
--	RCO_neg<='1';

	SMachine0 <= S10;

elsif Load_neg='0' and D='1' and C='0' and B='0' and A='0' then 

	Qa<=A; 
	Qb<=B; 
	Qc<=C; 
	Qd<=D; 
--	MaxMin<='0'; 
--	RCO_neg<='1';

	SMachine0 <= S9;

elsif Load_neg='0' and D='0' and C='1' and B='1' and A='1' then 

	Qa<=A; 
	Qb<=B; 
	Qc<=C; 
	Qd<=D; 
--	MaxMin<='0'; 
--	RCO_neg<='1';

	SMachine0 <= S8;

elsif Load_neg='0' and D='0' and C='1' and B='1' and A='0' then 

	Qa<=A; 
	Qb<=B; 
	Qc<=C; 
	Qd<=D; 
--	MaxMin<='0'; 
--	RCO_neg<='1';

	SMachine0 <= S7;

elsif Load_neg='0' and D='0' and C='1' and B='0' and A='1' then 

	Qa<=A; 
	Qb<=B; 
	Qc<=C; 
	Qd<=D; 
--	MaxMin<='0'; 
--	RCO_neg<='1';

	SMachine0 <= S6;

elsif Load_neg='0' and D='0' and C='0' and B='0' and A='1' then 

	Qa<=A; 
	Qb<=B; 
	Qc<=C; 
	Qd<=D; 
--	MaxMin<='0'; 
--	RCO_neg<='1';

	SMachine0 <= S2;

elsif Load_neg='0' and D='0' and C='0' and B='1' and A='0' then 

	Qa<=A; 
	Qb<=B; 
	Qc<=C; 
	Qd<=D; 
--	MaxMin<='0'; 
--	RCO_neg<='1';

	SMachine0 <= S3;

elsif Load_neg='0' and D='0' and C='0' and B='1' and A='1' then 

	Qa<=A; 
	Qb<=B; 
	Qc<=C; 
	Qd<=D; 
--	MaxMin<='0'; 
--	RCO_neg<='1';

	SMachine0 <= S4;

elsif Load_neg='0' and D='0' and C='1' and B='0' and A='0' then 

	Qa<=A; 
	Qb<=B; 
	Qc<=C; 
	Qd<=D; 
--	MaxMin<='0'; 
--	RCO_neg<='1';

	SMachine0 <= S5;

elsif CLK'event and CLK = '1' then 
	-- Set default values for registered outputs/signals and for variables
	--..
	case SMachine0 is


		when S1 =>
		QQ<="0000";
			Qa<='0'; 
			Qb<='0'; 
			Qc<='0'; 
			Qd<='0'; 
--			MaxMin<= DpUn; 
--			RCO_neg<=not (CLK and CTEN_neg and DpUn);
			if Load_neg='1' and CTEN_neg='0' and DpUn='1' then

--				MaxMin<='0'; 
--				RCO_neg<='1';

				SMachine0 <= S10;

			elsif Load_neg='1' and CTEN_neg='1'then

				SMachine0 <= S1;

			elsif Load_neg='1' and CTEN_neg='0' and DpUn='0'then

--				MaxMin<='0'; 
--				RCO_neg<='1';

				SMachine0 <= S2;

			end if;


		when S2 =>
		QQ<="0001";
			Qa<='1'; 
			Qb<='0'; 
			Qc<='0'; 
			Qd<='0';
			if Load_neg='1' and CTEN_neg='0' and DpUn='1' then

				SMachine0 <= S1;

			elsif Load_neg='1' and CTEN_neg='1'then

				SMachine0 <= S2;

			elsif Load_neg='1' and CTEN_neg='0' and DpUn='0'then

				SMachine0 <= S3;

			end if;


		when S3 =>
		QQ<="0010";
			Qa<='0'; 
			Qb<='1'; 
			Qc<='0'; 
			Qd<='0';
			if Load_neg='1' and CTEN_neg='0' and DpUn='1' then

				SMachine0 <= S2;

			elsif Load_neg='1' and CTEN_neg='1'then

				SMachine0 <= S3;

			elsif Load_neg='1' and CTEN_neg='0' and DpUn='0'then

				SMachine0 <= S4;

			end if;


		when S4 =>
		QQ<="0011";
			Qa<='1'; 
			Qb<='1'; 
			Qc<='0'; 
			Qd<='0';
			if Load_neg='1' and CTEN_neg='0' and DpUn='1' then

				SMachine0 <= S3;

			elsif Load_neg='1' and CTEN_neg='1'then

				SMachine0 <= S4;

			elsif Load_neg='1' and CTEN_neg='0' and DpUn='0'then

				SMachine0 <= S5;

			end if;


		when S5 =>
		QQ<="0100";
			Qa<='0'; 
			Qb<='0'; 
			Qc<='1'; 
			Qd<='0';
			if Load_neg='1' and CTEN_neg='0' and DpUn='1' then

				SMachine0 <= S4;

			elsif Load_neg='1' and CTEN_neg='1'then

				SMachine0 <= S5;

			elsif Load_neg='1' and CTEN_neg='0' and DpUn='0'then

				SMachine0 <= S6;

			end if;


		when S6 =>
		QQ<="0101";
			Qa<='1'; 
			Qb<='0'; 
			Qc<='1'; 
			Qd<='0';
			if Load_neg='1' and CTEN_neg='0' and DpUn='1' then

				SMachine0 <= S5;

			elsif Load_neg='1' and CTEN_neg='1'then

				SMachine0 <= S6;

			elsif Load_neg='1' and CTEN_neg='0' and DpUn='0'then

				SMachine0 <= S7;

			end if;


		when S7 =>
		QQ<="0110";
			Qa<='0'; 
			Qb<='1'; 
			Qc<='1'; 
			Qd<='0';
			if Load_neg='1' and CTEN_neg='0' and DpUn='1' then

				SMachine0 <= S6;

			elsif Load_neg='1' and CTEN_neg='1'then

				SMachine0 <= S7;

			elsif Load_neg='1' and CTEN_neg='0' and DpUn='0'then

				SMachine0 <= S8;

			end if;


		when S8 =>
		QQ<="0111";
			Qa<='1'; 
			Qb<='1'; 
			Qc<='1'; 
			Qd<='0';
			if Load_neg='1' and CTEN_neg='0' and DpUn='1' then

				SMachine0 <= S7;

			elsif Load_neg='1' and CTEN_neg='1'then

				SMachine0 <= S8;

			elsif Load_neg='1' and CTEN_neg='0' and DpUn='0'then

				SMachine0 <= S9;

			end if;


		when S9 =>
		QQ<="1000";
			Qa<='0'; 
			Qb<='0'; 
			Qc<='0'; 
			Qd<='1';
			if Load_neg='1' and CTEN_neg='0' and DpUn='1' then

				SMachine0 <= S8;

			elsif Load_neg='1' and CTEN_neg='1'then

				SMachine0 <= S9;

			elsif Load_neg='1' and CTEN_neg='0' and DpUn='0'then

				SMachine0 <= S10;

			end if;


		when S10 =>
		QQ<="1001";
			Qa<='1'; 
			Qb<='0'; 
			Qc<='0'; 
			Qd<='1'; 
--			MaxMin<=  not DpUn; 
--			RCO_neg<=not (CLK and CTEN_neg and  not DpUn);
			if Load_neg='1' and CTEN_neg='0' and DpUn='1' then

--				MaxMin<='0'; 
--				RCO_neg<='1';

				SMachine0 <= S9;

			elsif Load_neg='1' and CTEN_neg='1'then

				SMachine0 <= S10;

			elsif Load_neg='1' and CTEN_neg='0' and DpUn='0'then

--				MaxMin<='0'; 
--				RCO_neg<='1';

				SMachine0 <= S1;

			end if;


		when others =>
			null;

	end case;
end if;
end process;
RCO_neg_assignment:

	RCO_neg <= '0' when (DpUn='0' and SMachine0=S10 and CLK='1') else 
		        '0' when (DpUn='1' and SMachine0=S1 and CLK='1') else
		        '1';
	MaxMin <= '1' when (DpUn='0' and SMachine0=S10 ) else 
		       '1' when (DpUn='1' and SMachine0=S1 ) else
		       '0';

end SAMPLE_arch;
