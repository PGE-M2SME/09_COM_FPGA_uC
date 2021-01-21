library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
use ieee.std_logic_unsigned.all;
           
entity Spi_slave is
    Port ( SCLK : in  std_logic;    				-- SPI input clock
           MOSI : in  std_logic;    				-- SPI serial data input bit to bit
           MISO : out std_logic;    				-- SPI serial data output bit to bit
           SS   : in  std_logic;     				-- chip select input (active low)
           send : in  std_logic;					-- send data output by MISO
           Data : out std_logic_vector (7 downto 0) -- store data input   
           );
end Spi_slave;

architecture ar of Spi_slave  is 

component registre_input is     			 -- This component take MOSI in input and an octet in output
  port(
       clk,entree : in std_logic;
       q : out std_logic_vector(7 downto 0); -- octet receive
       SS  : in std_logic					 
       );
end component;

component registre_ouput is
  port(
       clk : in std_logic;
       cmd_send : in std_logic;   --send octet when active (active high), must be active when sending
       output : out std_logic     --bit send
       );
end component;

signal mosi_sig : std_logic;


begin

C1 : registre_input port map(SCLK, mosi_sig,Data,SS); -- store data input coming from master and put it in Data

C2 : registre_ouput port map(SCLK,send,MISO);  -- send an octet when send is active(high), the octet is send bit by bit by MISO
											   -- you can change the octet send in registre output
											   -- LSB first
process (SCLK)
    begin
        if (SCLK'event and SCLK = '1') then  -- rising edge of SCK
            if (SS = '0') then   			 -- slave used
				mosi_sig <= MOSI;            -- save input in signal 
											 -- SPI CS must be selected
											 -- MSB first                
            end if;
        end if;
    end process;
    
    end ar;