library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

entity MemProg is
	generic(
		n : integer := 10 --bits de CP / log2(#palabras)
	);
	port(
		pc : in std_logic_vector (n - 1 downto 0);
		inst : out std_logic_vector (24 downto 0)
		);
end MemProg;

architecture Funcion of MemProg is

	--CONSTANTES DE INSTRUCCIONES
	--Instrucciones tipo R
	constant tipo_r : std_logic_vector (4 downto 0) := "00000";
	--Carga y Almacenamiento
	constant li : std_logic_vector (4 downto 0) := "00001";
	constant lwi : std_logic_vector (4 downto 0) := "00010";
	constant lw : std_logic_vector (4 downto 0) := "10111";
	constant swi : std_logic_vector (4 downto 0) := "00011";
	constant sw : std_logic_vector (4 downto 0) := "00100";
	--Aritmticas
	constant addi : std_logic_vector (4 downto 0) := "00101";
	constant subi : std_logic_vector (4 downto 0) := "00110";
	--Identificador Aritmticas R
	constant add : std_logic_vector (3 downto 0) := "0000";
	constant sub : std_logic_vector (3 downto 0) := "0001";
	--Logicas
	constant andi : std_logic_vector (4 downto 0) := "00111";
	constant ori : std_logic_vector (4 downto 0) := "01000";
	constant xori : std_logic_vector (4 downto 0) := "01001";
	constant nandi : std_logic_vector (4 downto 0) := "01010";
	constant nori : std_logic_vector (4 downto 0) := "01011";
	constant xnori : std_logic_vector (4 downto 0) := "01100";
	--Identificador Logicas R
	constant andr : std_logic_vector (3 downto 0) := "0010";
	constant orr : std_logic_vector (3 downto 0) := "0011";
	constant xorr : std_logic_vector (3 downto 0) := "0100";
	constant nandr : std_logic_vector (3 downto 0) := "0101";
	constant norr : std_logic_vector (3 downto 0) := "0110";
	constant xnorr : std_logic_vector (3 downto 0) := "0111";
	constant notr : std_logic_vector (3 downto 0) := "1000";
	--Identificador Corrimiento R
	constant sllr : std_logic_vector (3 downto 0) := "1001";
	constant srlr : std_logic_vector (3 downto 0) := "1010";
	--Saltos Condicionales e Incondicionales
	constant beqi : std_logic_vector (4 downto 0) := "01101";
	constant bnei : std_logic_vector (4 downto 0) := "01110";
	constant blti : std_logic_vector (4 downto 0) := "01111";
	constant bleti : std_logic_vector (4 downto 0) := "10000";
	constant bgti : std_logic_vector (4 downto 0) := "10001";
	constant bgeti : std_logic_vector (4 downto 0) := "10010";
	constant b : std_logic_vector (4 downto 0) := "10011";
	--Manejo de Subrutinas
	constant call : std_logic_vector (4 downto 0) := "10100";
	constant ret : std_logic_vector (4 downto 0) := "10101";
	--Otros
	constant nop : std_logic_vector (4 downto 0) := "10110";
	constant su : std_logic_vector (3 downto 0) := "0000"; -- sin usar
	--Registros
	constant R0 : std_logic_vector (3 downto 0) := "0000";
	constant R1 : std_logic_vector (3 downto 0) := "0001";
	constant R2 : std_logic_vector (3 downto 0) := "0010";
	constant R3 : std_logic_vector (3 downto 0) := "0011";
	constant R4 : std_logic_vector (3 downto 0) := "0100";
	constant R5 : std_logic_vector (3 downto 0) := "0101";
	constant R6 : std_logic_vector (3 downto 0) := "0110";
	constant R7 : std_logic_vector (3 downto 0) := "0111";
	constant R8 : std_logic_vector (3 downto 0) := "1000";
	constant R9 : std_logic_vector (3 downto 0) := "1001";
	constant R10 : std_logic_vector (3 downto 0) := "1010";
	constant R11 : std_logic_vector (3 downto 0) := "1011";
	constant R12 : std_logic_vector (3 downto 0) := "1100";
	constant R13 : std_logic_vector (3 downto 0) := "1101";
	constant R14 : std_logic_vector (3 downto 0) := "1110";
	constant R15 : std_logic_vector (3 downto 0) := "1111";
	
	--PROGRAMA
	type aux is array(0 to 2**n - 1) of std_logic_vector(24 downto 0);
	constant programa : aux := (
		
--		NORMAL
--
		LI & R0 & X"0001", 
	
		LI & R1 & X"0007",
		
		TIPO_R & R1 & R0 & R1 & SU & ADD, 
		
		SWI & R1 & X"0005",
		
		B & SU & X"0002",   --tengo mis dudas


----		BUBBLE
--		call & SU & x"0006", 						--	(0) B ARREGLO
--		call & SU & x"0016", 						--	(1) B BURBUJA
--		call & SU & x"002a",						--	(2) B MOSTRAR
--		B & SU & x"0002",
--		--FIN
--		NOP & SU & SU & SU & SU & SU,			--	(3) 
--		B & SU & x"0004",						--	(4) B FIN
--		--ARREGLO
--		LI & R1 & x"0000",						--	(5) 
--		LI & R0 & x"0005", 						--	(6)	
--		SW & R0 & R1 & "000000000000",			--	(7)
--		LI & R1 & x"0001",						--	(8)
--		LI & R0 & x"0004", 						--	(9)	
--		SW & R0 & R1 & "000000000000",			--	(10)
--		LI & R1 & x"0002",						--	(11)
--		LI & R0 & x"0003", 						--	(12)
--		SW & R0 & R1 & "000000000000",			--	(13)
--		LI & R1 & x"0003",						--	(14)
--		LI & R0 & x"0002", 						--	(15)
--		SW & R0 & R1 & "000000000000",			--	(16)
--		LI & R1 & x"0004",						--	(17)
--		LI & R0 & x"0001", 						--	(18)
--		SW & R0 & R1 & "000000000000",			--	(19)
--		ret & SU & SU & SU & SU & SU,					--	(20) FIN ARREGLO
--		--BURBUJA
--		LI & R2 & x"0000",						--	(21) CONTADOR I
--		LI & R10 & x"0004",						--	(22) LIMITE I
--		LI & R11 & x"0005",						--	(23) LIMITE J
--			--CICLO I
--		ADDI & R3 & R2 & "000000000001",		--	(24) CONTADOR J
--		ADDI & R9 & R2 & "000000000000",		--	(25) R9 = I
--			--CICLO J
--		SUBI & R6 & R3 & "000000000001",		--	(26)
--		ADDI & R8 & R3 & "000000000000",		--	(27) R8 = J
--		LW & R4 & R6 & "000000000000",			--	(28)
--		LW & R5 & R3 & "000000000000",			--	(29)
--		BLTI & R5 & R4 & "000000000110",		--	(30) BLTI INCREMENTO J
--			--INTERCAMBIO
--		ADDI & R7 & R4 & "000000000000",		--	(31)
--		ADDI & R4 & R5 & "000000000000",		--	(32)
--		ADDI & R5 & R7 & "000000000000",		--	(33)
--		SW & R4 & R6 & "000000000000",			--	(34)
--		SW & R5 & R3 & "000000000000",			--	(35)
--			--INCREMENTO J
--		ADDI & R3 & R8 & "000000000001",		--	(36)
--		BNEI & R3 & R11 & "111111110101",		--	(37) BNEI CICLO J
--			--INCREMENTO I
--		ADDI & R2 & R9 & "000000000001",		--	(38)
--		BNEI & R2 & R10 & "111111110001",		--	(39) BNEI CICLO I
--		ret & SU & SU & SU & SU & SU,						--	(40)
--		--MOSTRAR
--		LI & R12 & x"0000",						--	(41)
--		LI & R13 & x"0005",						--	(42)
--			--CICLO
--		ADDI & R15 & R12 & "000000000000",		--	(43)
--		LW & R14 & R12 & "000000000000",		--	(44)
--		ADDI & R12 & R15 & "000000000001",		--	(45)
--		BNEI & R12 & R13 & "111111111101",		--	(46)
--		ret & SU & SU & SU & SU & SU,						--	(47)
		
		others => (others => '0')
	);
	
	begin
		inst <= programa( conv_integer(PC) );
end Funcion;

