library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use ieee.std_logic_unsigned.all;
       
 entity SPI_out is				                 	 -- This component take a byte in input and send it to the master bit to bit in output
  port(
       clk : in std_logic;							 -- clock 
       SS : out std_logic;							 -- active when we send a byte by MISO
       data_valid : in std_logic;				     -- the byte in input is complete we are ready to send
       data_in : in std_logic_vector (7 downto 0);   -- send octet when active (active high), must be active when sending
       output : out std_logic     					 -- send the byte bit to bit
       );
end SPI_out;

architecture ar of SPI_out is

signal data : std_logic_vector (7 downto 0);

begin

  process(clk) 
  
  variable cpt : integer := 0;
  
  begin
     if clk'event and clk='1' then
		if data_valid = '1' and cpt /= 9 then
			SS <= '0';						  
			output <= data_in(cpt);	
			cpt := cpt + 1;
			if cpt = 9 then
				SS <= '1';
				output <= '0';				
			end if;
		end if;
		if data_valid = '0' then 
			cpt := 0;
			SS <= '1';
			output <= '0';
		end if;
	 end if;
  end process; 
end ar;