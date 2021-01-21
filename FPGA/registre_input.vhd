library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use ieee.std_logic_unsigned.all;

entity registre_input is
  port(clk,entree : in std_logic;
       q : out std_logic_vector(7 downto 0);
       SS  : in std_logic
       );
end registre_input;

architecture ar of registre_input is
  
  signal dataq : std_logic_vector(7 downto 0);
  
begin
  process(clk) begin
     if clk'event and clk='1' then
		if (SS = '0') then						  -- slave used
			dataq <= entree & dataq(7 downto 1);  -- update of the octet stored
		end if;
	 end if;
  end process;
  
  process(dataq)begin
     q<=dataq;					
  end process;
  
end ar;