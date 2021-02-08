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

signal data 	  : std_logic_vector (7 downto 0);
signal test 	  : std_logic_vector (7 downto 0);
signal byte_send  : std_logic;
signal output_sig : std_logic;
signal cpt_max    : std_logic;
signal SS_sig     : std_logic;
signal cpt        : std_logic_vector (7 downto 0);
signal reg        : std_logic_vector (7 downto 0);

begin
  
  test <= "01010101";
  
  byte_send_p : process(clk) 
  begin
	if clk'event and clk='1' then
		if data_valid = '0' and cpt_max = '1' then 
			byte_send <= '1';
		else 
			byte_send <= '0';
		end if;
	end if;
  end process;
  
  reg_p : process(clk) 
  begin
	if clk'event and clk='1' then
		if data_valid = '0' and byte_send = '0' then 
			if(cpt = "000") then 
				reg <= test;
			else 
				reg <= reg(6 downto 0) & '0';
			end if;
		end if;
	end if;
  end process;
   
  output_sig_p : process(clk) 
  begin
	if clk'event and clk='1' then
		if data_valid = '0' and byte_send = '0' then
			if(cpt = "000") then 
				output_sig <= test(7);
			else 
				output_sig <= reg(6);
			end if;
		else
			output_sig <= '0';
		end if;
	end if;
  end process;
  
  cpt_p : process(clk) 
  begin
	if clk'event and clk='1' then
		if data_valid = '0' and byte_send = '0' then
			if(cpt_max = '1') then
				cpt <= (others => '0');
			else
				cpt <= cpt + 1;
			end if;
		end if;
	end if;
  end process;
  
  cpt_max <= '1' when cpt = "111" else '0';
  
  output <= output_sig;
  
  SS <= data_valid;
  
end ar;