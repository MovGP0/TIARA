library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity test is
	Port ( Clk : in std_logic;
		    Push : in std_logic_vector(3 downto 0);
			 Switch : in std_logic_vector(7 downto 0);
          LED : out std_logic_vector(7 downto 0);
          DAC : out std_logic_vector(3 downto 0);
			 Digit : out std_logic_vector(3 downto 0);
			 DispA : out std_logic;
			 DispB : out std_logic;
			 DispC : out std_logic;
			 DispD : out std_logic;
			 DispE : out std_logic;
			 DispF : out std_logic;
			 DispG : out std_logic;
			 DispDP : out std_logic;
			 HSync : out std_logic;
			 VSync : out std_logic;
			 Red0 : out std_logic;
			 Red1 : out std_logic;
			 Green0 : out std_logic;
			 Green1 : out std_logic;
			 Blue0 : out std_logic;
			 Blue1 : out std_logic;
			 PS2Clk : in std_logic;
			 PS2Data : in std_logic;
			 DIn : in std_logic_vector(15 downto 0);
			 DOut : out std_logic_vector(15 downto 0));
end test;

architecture test_a of test is

signal DPush : std_logic_vector(7 downto 0);
signal counter : integer range 2499 downto 0 := 0;
signal max : std_logic;
signal DACcounter : integer range 15 downto 0 := 0;
signal OneHzen : std_logic;
signal OneHzcounter : integer range 19999 downto 0 := 0;
signal ones_sec, tens_sec, ones_min, tens_min : std_logic_vector(3 downto 0) := "0000";
signal digitcounter : std_logic_vector(3 downto 0) := "0001";	-- ring counter
signal hex : std_logic_vector(3 downto 0);
signal seg : std_logic_vector(6 downto 0);
signal DispDP_s : std_logic;
signal Xcounter : std_logic_vector(10 downto 0);
signal Ycounter : integer range 2047 downto 0 := 0;
signal HSYNC_s : std_logic;
signal blank : std_logic;

begin

DPush <= Push & Push;

inv_Switch : for i in 7 downto 0 generate
 	LED(i) <= DPush(i) xor Switch(i);
end generate inv_Switch;

-- prescaler: generate 20kHz
process(CLK)
begin
  if rising_edge(CLK) then
	if ( counter < 2499) then
		counter <= counter + 1;
		max <= '0';
	else
		counter <= 0;	
		max <= '1';	
	end if;
  end if;
end process;

-- dac counter
process(CLK, max)
begin
	if rising_edge(CLK) then
		if (max = '1') then
			if (DACcounter < 15) then
				DACcounter <= DACcounter + 1;
			else
      		DACcounter <= 0;
    		end if;
		end if;
  end if;
end process;

-- drive ladder
DAC <= conv_std_logic_vector(DACcounter, 4);

-- 1Hz clock enable
process(CLK, max)
begin
	if rising_edge(CLK) then
		OneHzen <= '0';
		if (max = '1') then
			if (OneHzcounter < 19999) then
				OneHzcounter <= OneHzcounter + 1;
			else
      		OneHzcounter <= 0;
				OneHzen <= '1';
    		end if;
		end if;
  end if;
end process;

-- count seconds, minutes
process(CLK, OneHzen)
begin
	if rising_edge(CLK) then
		if (OneHzen = '1') then
			if (ones_sec = 9) then
				ones_sec <= (others => '0');
				if (tens_sec = 5) then
					tens_sec <= (others => '0');
					if (ones_min = 9) then
						ones_min <= (others => '0');
						if (tens_min = 5) then 
							tens_min <= (others => '0');
						else
							tens_min <= tens_min + 1;
						end if;
					else
						ones_min <= ones_min + 1;
					end if;
				else
					tens_sec <= tens_sec + 1;
				end if;
			else
				ones_sec <= ones_sec + 1;
			end if;
		end if;
	end if;
end process;

-- drive digits
process(CLK, max)
begin
	if rising_edge(CLK) then
		if (max = '1') then
			DIGIT <= (others => '0');
			case digitcounter is
				when "0001" => 
					hex <= ones_sec;
					DIGIT(3) <= '1';
				when "0010" => 
					hex <= tens_sec;
					DIGIT(2) <= '1';
				when "0100" => 
					hex <= ones_min;
					DIGIT(1) <= '1';
				when "1000" => 
					hex <= tens_min;
					DIGIT(0) <= '1';
				when others => null;
			end case;
			-- update digit counter
			digitcounter <= digitcounter(2 downto 0) & digitcounter(3);
		end if;
	end if;
end process;

-- drive 7seg display
with hex select
seg <=	"1111001" when "0001",	--1
			"0100100" when "0010",	--2
			"0110000" when "0011",	--3
			"0011001" when "0100",	--4
			"0010010" when "0101",	--5
			"0000010" when "0110",	--6
			"1111000" when "0111",	--7
			"0000000" when "1000",	--8
			"0010000" when "1001",	--9
			"0001000" when "1010",	--A
			"0000011" when "1011",	--b
			"1000110" when "1100",	--C
			"0100001" when "1101",	--d
			"0000110" when "1110",	--E
			"0001110" when "1111",	--F
			"1000000" when others;	--0

-- drive display LEDs
DispA <= seg(0);
DispB <= seg(1);
DispC <= seg(2);
DispD <= seg(3);
DispE <= seg(4);
DispF <= seg(5);
DispG <= seg(6);

-- drive DP
process(CLK, OneHzen)
begin
	if rising_edge(CLK) then
		if (OneHzen = '1') then
			DispDP_s <= not DispDP_s;
		end if; 
	end if;
end process;

DispDP <= DispDP_s;

----------------------------
-- VESA frequency generator
-- dor freq: 50MHz
--	hor. sync: 48kHz
--	ver. sync: 72Hz
-- res.: 800*600
----------------------------
process(CLK)
begin
	if rising_edge(CLK) then
		if (Xcounter < 1040) then
			Xcounter <= Xcounter + 1;			
		else
			Xcounter <= (others => '0');
		end if;
	end if;
end process;

-- HSYNC generator
process(CLK)
begin
	if rising_edge(CLK) then
		if ((Xcounter > 856) and (Xcounter < 976)) then
			HSYNC_s <= '0';
		else
			HSYNC_s <= '1';
		end if;
	end if;
end process;

HSYNC <= HSYNC_s;

process(HSYNC_s)
begin
	if rising_edge(HSYNC_s) then
		if (Ycounter < 666) then
			Ycounter <= Ycounter + 1;
		else
			Ycounter <= 0;				
		end if;
	end if;
end process;

-- VSYNC generator
process(HSYNC_s)
begin
	if rising_edge(HSYNC_s) then
		if ((Ycounter > 637) and (Ycounter < 643)) then
			VSYNC <= '0';
		else
			VSYNC <= '1';
		end if;
	end if;
end process;

-- blank to draw frame
process(CLK)
begin
	if rising_edge(CLK) then
		if ((Xcounter >= 800) or (Ycounter >= 600)) then
			blank <= '1';
		else
			blank <= '0';
		end if;
	end if;
end process;

-- drive color lines
RED0 <= '1' when (blank = '0' and Xcounter(4) = '1') else '0';
RED1 <= '1' when (blank = '0' and Xcounter(5) = '1') else '0';
GREEN0 <= '1' when (blank = '0' and Xcounter(6) = '1') else '0';
GREEN1 <= '1' when (blank = '0' and Xcounter(7) = '1') else '0';
BLUE0 <= '1' when (blank = '0' and Xcounter(8) = '1') else '0';
BLUE1 <= '1' when (blank = '0' and Xcounter(9) = '1') else '0';

DOut <= DIn;

end test_a;