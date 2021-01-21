library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use ieee.std_logic_unsigned.all;

entity registre_ouput is
  port(clk : in std_logic;
       cmd_send : in std_logic;
       output : out std_logic
       );
end registre_ouput;

architecture ar of registre_ouput is
  
  signal dataq : std_logic_vector(7 downto 0);  
  signal test : std_logic_vector(7 downto 0);   -- octet to send
  
begin
  
  process(clk) begin  
     if clk'event and clk='0' then
	 case cmd_send is 
		when '0' => dataq <= test;					  -- prepare the send
					output <= '0'; 					  -- output is low when not used	 
		when '1' => dataq <= '0' & dataq(7 downto 1); -- update signal send
					output <= dataq(0);				  -- bit send 
	  end case;
	 end if;
  end process;
  
  test <= "00100101";    --octet send when cmd_send active
       
end ar;