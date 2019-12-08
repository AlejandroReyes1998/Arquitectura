LIBRARY IEEE;
USE IEEE.STD_LOGIC_1164.ALL;
ENTITY topx IS
	PORT( 
		  CLK     :   IN      STD_LOGIC;
		  CLR     :   IN      STD_LOGIC;
		  --microInstruccion : out  STD_LOGIC_VECTOR (19 downto 0);
           PC_salida : out  STD_LOGIC_VECTOR (7 downto 0);
			 -- readdata_1 : out  STD_LOGIC_VECTOR (15 downto 0);
			  --readdata_2 : out  STD_LOGIC_VECTOR (15 downto 0);
           resultado : out  STD_LOGIC_VECTOR (7 downto 0));
			  --sx : out  STD_LOGIC_VECTOR (15 downto 0));	 
END topx;

ARCHITECTURE Arquitectura OF topx IS
   SIGNAL CLK_MOD             :  STD_LOGIC;
	
	COMPONENT Procesador
		Port ( clk, clr : in  STD_LOGIC;
           --microInstruccion : out  STD_LOGIC_VECTOR (19 downto 0);
           PC_salida : out  STD_LOGIC_VECTOR (7 downto 0);
			  --readdata_1 : out  STD_LOGIC_VECTOR (15 downto 0);
			  --readdata_2 : out  STD_LOGIC_VECTOR (15 downto 0);
           resultado : out  STD_LOGIC_VECTOR (7 downto 0));
			  --sx : out  STD_LOGIC_VECTOR (15 downto 0));
	END COMPONENT;
	
	COMPONENT DivisorDeFrecuencia
	    PORT (
			CLK100MHZ : IN STD_LOGIC;
			CLK : OUT STD_LOGIC		
		);
	END COMPONENT;
BEGIN
		Ins_DivisorDeFrecuencia: DivisorDeFrecuencia PORT MAP(
		  CLK100MHZ => CLK,
		  CLK => CLK_MOD
		);
		
		Procesadorx: Procesador PORT MAP(
		  CLK  => CLK_MOD,
		  CLR  => CLR,
		  --microInstruccion => microInstruccion,
		  PC_salida => PC_salida,
	     resultado => resultado
	     --readdata_1 => readdata_1,
	     --readdata_2 => readdata_2,
	     --sx => sx
		);	
END Arquitectura;
