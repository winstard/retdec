/**
 * @file src/cpdetect/signatures/yara/database/x86/pe/compiler/compiler_09.cpp
 * @brief Database of signatures.
 * @copyright (c) 2017 Avast Software, licensed under the MIT license
 */

const char *x86PeCompiler_09 =
R"x86_pe_compiler(rule rule_350_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		version = "9.0 debug"
		extra = "Visual Studio 2008"
		pattern = "FF25?????000CCCCCCCC0330010007000000000000001680??0000042ACC0330010007000000000000001680??0000042ACC0330010007000000000000001680??0000042ACC0330010007000000000000001680??0000042ACC03300100070000000000"
	strings:
		$1 = { FF 25 ?? ?? ?0 00 CC CC CC CC 03 30 01 00 07 00 00 00 00 00 00 00 16 80 ?? 00 00 04 2A CC 03 30 01 00 07 00 00 00 00 00 00 00 16 80 ?? 00 00 04 2A CC 03 30 01 00 07 00 00 00 00 00 00 00 16 80 ?? 00 00 04 2A CC 03 30 01 00 07 00 00 00 00 00 00 00 16 80 ?? 00 00 04 2A CC 03 30 01 00 07 00 00 00 00 00 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_351_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		version = "9.0 debug"
		extra = "Visual Studio 2008"
		pattern = "FF2500?0400000000?????0?0?0?000000000000?0?00????F????0?000???????????0?0?0?000000000000?0??0????F????0?000???????????0?0?0?000000000000?0?0?0???F????0?000???????????0?0?0?000000000000??????0?000?"
	strings:
		$1 = { FF 25 00 ?0 40 00 00 00 0? ?? ?? 0? 0? 0? 00 00 00 00 00 00 ?0 ?0 0? ?? ?F ?? ?? 0? 00 0? ?? ?? ?? ?? ?? 0? 0? 0? 00 00 00 00 00 00 ?0 ?? 0? ?? ?F ?? ?? 0? 00 0? ?? ?? ?? ?? ?? 0? 0? 0? 00 00 00 00 00 00 ?0 ?0 ?0 ?? ?F ?? ?? 0? 00 0? ?? ?? ?? ?? ?? 0? 0? 0? 00 00 00 00 00 00 ?? ?? ?? 0? 00 0? }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_352_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		version = "9.0"
		extra = "Visual Studio 2008"
		pattern = "FF2500?04000000000033001000B00000000000000200001FF0F80??0000042ACC033001000B00000000000000200100FF0F80??0000042ACC033001000B00000000000000201000FF0F80??0000042ACC0330010007000000000000001680??0000042A"
	strings:
		$1 = { FF 25 00 ?0 40 00 00 00 00 03 30 01 00 0B 00 00 00 00 00 00 00 20 00 01 FF 0F 80 ?? 00 00 04 2A CC 03 30 01 00 0B 00 00 00 00 00 00 00 20 01 00 FF 0F 80 ?? 00 00 04 2A CC 03 30 01 00 0B 00 00 00 00 00 00 00 20 10 00 FF 0F 80 ?? 00 00 04 2A CC 03 30 01 00 07 00 00 00 00 00 00 00 16 80 ?? 00 00 04 2A }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_353_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		version = "10.0 debug"
		extra = "Visual Studio 2010"
		pattern = "8BFF558BECE8?60?0000E8110000005DC3CCCCCCCCCCCCCCCCCCCCCCCCCCCCCC8BFF558BEC6AFE68????400068?0??400064A1000000005083C4E4535657A1?0?040003145F833C5508D45F064A3000000008965E8833D????400000750E6A006A006A01"
	strings:
		$1 = { 8B FF 55 8B EC E8 ?6 0? 00 00 E8 11 00 00 00 5D C3 CC CC CC CC CC CC CC CC CC CC CC CC CC CC CC 8B FF 55 8B EC 6A FE 68 ?? ?? 40 00 68 ?0 ?? 40 00 64 A1 00 00 00 00 50 83 C4 E4 53 56 57 A1 ?0 ?0 40 00 31 45 F8 33 C5 50 8D 45 F0 64 A3 00 00 00 00 89 65 E8 83 3D ?? ?? 40 00 00 75 0E 6A 00 6A 00 6A 01 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_354_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		version = "10.0"
		extra = "Visual Studio 2010"
		pattern = "E8??040000E9B3FDFFFF8BFF558BEC81EC28030000A3????4000890D????40008915????4000891D????40008935????4000893D????4000668C15????4000668C0D????4000668C1D????4000668C05????4000668C25????4000668C2D????40009C8F"
	strings:
		$1 = { E8 ?? 04 00 00 E9 B3 FD FF FF 8B FF 55 8B EC 81 EC 28 03 00 00 A3 ?? ?? 40 00 89 0D ?? ?? 40 00 89 15 ?? ?? 40 00 89 1D ?? ?? 40 00 89 35 ?? ?? 40 00 89 3D ?? ?? 40 00 66 8C 15 ?? ?? 40 00 66 8C 0D ?? ?? 40 00 66 8C 1D ?? ?? 40 00 66 8C 05 ?? ?? 40 00 66 8C 25 ?? ?? 40 00 66 8C 2D ?? ?? 40 00 9C 8F }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_355_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		version = "10.0 debug"
		extra = "Visual Studio 2010"
		pattern = "FF2500?04?000000033001000B00000000000000200001FF0F80??0000042ACC033001000B00000000000000200100FF0F80??0000042ACC033001000B00000000000000201000FF0F80??0000042ACC0330010007000000000000001680??0000042ACC"
	strings:
		$1 = { FF 25 00 ?0 4? 00 00 00 03 30 01 00 0B 00 00 00 00 00 00 00 20 00 01 FF 0F 80 ?? 00 00 04 2A CC 03 30 01 00 0B 00 00 00 00 00 00 00 20 01 00 FF 0F 80 ?? 00 00 04 2A CC 03 30 01 00 0B 00 00 00 00 00 00 00 20 10 00 FF 0F 80 ?? 00 00 04 2A CC 03 30 01 00 07 00 00 00 00 00 00 00 16 80 ?? 00 00 04 2A CC }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_356_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		version = "10.0 debug"
		extra = "Visual Studio 2010"
		pattern = "FF2500?0400000000?????0?0?0?000000000000?0?00????F??????0?0???????????0?0?0?000000000000?0??0????F??????0?0???????????0?0?0?000000000000?0?0?0???F??????0?0???????????0?0?0?000000000000????????0?0?"
	strings:
		$1 = { FF 25 00 ?0 40 00 00 00 0? ?? ?? 0? 0? 0? 00 00 00 00 00 00 ?0 ?0 0? ?? ?F ?? ?? ?? 0? 0? ?? ?? ?? ?? ?? 0? 0? 0? 00 00 00 00 00 00 ?0 ?? 0? ?? ?F ?? ?? ?? 0? 0? ?? ?? ?? ?? ?? 0? 0? 0? 00 00 00 00 00 00 ?0 ?0 ?0 ?? ?F ?? ?? ?? 0? 0? ?? ?? ?? ?? ?? 0? 0? 0? 00 00 00 00 00 00 ?? ?? ?? ?? 0? 0? }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_357_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		version = "10.0"
		extra = "Visual Studio 2010"
		pattern = "FF258??04?00????0??00?000?0000000000???0???00?0?????????0??00?000?0000000000???0???00?0?????????0??00?000?0000000000???0???00?0?????????0??00?000?0000000000???01??0??0?????????0??00?000?0000000000???0"
	strings:
		$1 = { FF 25 8? ?0 4? 00 ?? ?? 0? ?0 0? 00 0? 00 00 00 00 00 ?? ?0 ?? ?0 0? 0? ?? ?? ?? ?? 0? ?0 0? 00 0? 00 00 00 00 00 ?? ?0 ?? ?0 0? 0? ?? ?? ?? ?? 0? ?0 0? 00 0? 00 00 00 00 00 ?? ?0 ?? ?0 0? 0? ?? ?? ?? ?? 0? ?0 0? 00 0? 00 00 00 00 00 ?? ?0 1? ?0 ?? 0? ?? ?? ?? ?? 0? ?0 0? 00 0? 00 00 00 00 00 ?? ?0 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_358_MSVC {
	meta:
		tool = "C"
		name = "MSVC"
		version = "10.0 debug"
		extra = "Visual Studio 2010"
		pattern = "FF258??04?00CCCCCCCCCCCCCCCCCCCC03300100070000000000000016800F0000042ACC0330010007000000000000001680050000042ACC03300100070000000000000016800A0000042ACC0330010007000000000000001680120000042ACC03300100"
	strings:
		$1 = { FF 25 8? ?0 4? 00 CC CC CC CC CC CC CC CC CC CC 03 30 01 00 07 00 00 00 00 00 00 00 16 80 0F 00 00 04 2A CC 03 30 01 00 07 00 00 00 00 00 00 00 16 80 05 00 00 04 2A CC 03 30 01 00 07 00 00 00 00 00 00 00 16 80 0A 00 00 04 2A CC 03 30 01 00 07 00 00 00 00 00 00 00 16 80 12 00 00 04 2A CC 03 30 01 00 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_359_WATCOM_C_C {
	meta:
		tool = "C"
		name = "WATCOM C/C++"
		pattern = "??????????????????????????????????????574154434F4D20432F432B2B33322052756E2D54696D652073797374656D2E2028632920436F70797269676874"
	strings:
		$1 = { ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? 57 41 54 43 4F 4D 20 43 2F 43 2B 2B 33 32 20 52 75 6E 2D 54 69 6D 65 20 73 79 73 74 65 6D 2E 20 28 63 29 20 43 6F 70 79 72 69 67 68 74 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_360_WATCOM_C_C {
	meta:
		tool = "C"
		name = "WATCOM C/C++"
		pattern = "??????????????????4F70656E20576174636F6D20432F432B2B33322052756E2D54696D652073797374656D2E20506F7274696F6E7320436F70797269676874"
	strings:
		$1 = { ?? ?? ?? ?? ?? ?? ?? ?? ?? 4F 70 65 6E 20 57 61 74 63 6F 6D 20 43 2F 43 2B 2B 33 32 20 52 75 6E 2D 54 69 6D 65 20 73 79 73 74 65 6D 2E 20 50 6F 72 74 69 6F 6E 73 20 43 6F 70 79 72 69 67 68 74 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_361_WATCOM_C_C {
	meta:
		tool = "C"
		name = "WATCOM C/C++"
		pattern = "??????????????????574154434F4D20432F432B2B33322052756E2D54696D652073797374656D2E2028632920436F70797269676874"
	strings:
		$1 = { ?? ?? ?? ?? ?? ?? ?? ?? ?? 57 41 54 43 4F 4D 20 43 2F 43 2B 2B 33 32 20 52 75 6E 2D 54 69 6D 65 20 73 79 73 74 65 6D 2E 20 28 63 29 20 43 6F 70 79 72 69 67 68 74 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_362_WATCOM_C_C {
	meta:
		tool = "C"
		name = "WATCOM C/C++"
		extra = "DLL"
		pattern = "535657558B7424148B7C24188B6C241C83FF030F87"
	strings:
		$1 = { 53 56 57 55 8B 74 24 14 8B 7C 24 18 8B 6C 24 1C 83 FF 03 0F 87 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_363_WATCOM_C_C {
	meta:
		tool = "C"
		name = "WATCOM C/C++"
		pattern = "E9????000003104000574154434F4D20432F432B2B33322052756E2D54696D652073797374656D2E2028632920436F7079726967687420627920574154434F4D20496E7465726E6174696F6E616C20436F72702E20313938382D313939352E20416C6C207269676874732072657365727665642E000000000000"
	strings:
		$1 = { E9 ?? ?? 00 00 03 10 40 00 57 41 54 43 4F 4D 20 43 2F 43 2B 2B 33 32 20 52 75 6E 2D 54 69 6D 65 20 73 79 73 74 65 6D 2E 20 28 63 29 20 43 6F 70 79 72 69 67 68 74 20 62 79 20 57 41 54 43 4F 4D 20 49 6E 74 65 72 6E 61 74 69 6F 6E 61 6C 20 43 6F 72 70 2E 20 31 39 38 38 2D 31 39 39 35 2E 20 41 6C 6C 20 72 69 67 68 74 73 20 72 65 73 65 72 76 65 64 2E 00 00 00 00 00 00 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_364_WATCOM_C_C {
	meta:
		tool = "C"
		name = "WATCOM C/C++"
		version = "32 Run-Time System 1988-1994"
		pattern = "FB83????89E389??????????89??????????66??????66??????????BB????????29C0B430CD21"
	strings:
		$1 = { FB 83 ?? ?? 89 E3 89 ?? ?? ?? ?? ?? 89 ?? ?? ?? ?? ?? 66 ?? ?? ?? 66 ?? ?? ?? ?? ?? BB ?? ?? ?? ?? 29 C0 B4 30 CD 21 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_365_WATCOM_C_C {
	meta:
		tool = "C"
		name = "WATCOM C/C++"
		version = "32 Run-Time System 1988-1995"
		pattern = "E9????????????????574154434F4D20432F432B2B33322052756E2D54"
	strings:
		$1 = { E9 ?? ?? ?? ?? ?? ?? ?? ?? 57 41 54 43 4F 4D 20 43 2F 43 2B 2B 33 32 20 52 75 6E 2D 54 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_366_WATCOM_C_C {
	meta:
		tool = "C"
		name = "WATCOM C/C++"
		version = "32 Run-Time System 1989, 1994"
		pattern = "0E1F8CC6B4??50BB????CD2173??58CD2172"
	strings:
		$1 = { 0E 1F 8C C6 B4 ?? 50 BB ?? ?? CD 21 73 ?? 58 CD 21 72 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_367_WATCOM_C_C {
	meta:
		tool = "C"
		name = "WATCOM C/C++"
		version = "Run-Time system + DOS4GW DOS Extender 1988-93"
		pattern = "BF????8ED781C4????BE????2BF78BC6B1??D3"
	strings:
		$1 = { BF ?? ?? 8E D7 81 C4 ?? ?? BE ?? ?? 2B F7 8B C6 B1 ?? D3 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_368_Zortech_C {
	meta:
		tool = "C"
		name = "Zortech C"
		pattern = "E8????2EFF??????FC06"
	strings:
		$1 = { E8 ?? ?? 2E FF ?? ?? ?? FC 06 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_369_Zortech_C {
	meta:
		tool = "C"
		name = "Zortech C"
		version = "2.00 1988, 1989"
		pattern = "FAB8????8ED88C??????268B??????891E????8BD82B1E????891E"
	strings:
		$1 = { FA B8 ?? ?? 8E D8 8C ?? ?? ?? 26 8B ?? ?? ?? 89 1E ?? ?? 8B D8 2B 1E ?? ?? 89 1E }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_370_Zortech_C {
	meta:
		tool = "C"
		name = "Zortech C"
		version = "3.0"
		pattern = "FAFCB8??????8CC88ED8"
	strings:
		$1 = { FA FC B8 ?? ?? ?? 8C C8 8E D8 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_608_Free_Basic {
	meta:
		tool = "C"
		name = "Free Basic"
		version = "0.11"
		pattern = "E8????0000E801000000C35589E5"
	strings:
		$1 = { E8 ?? ?? 00 00 E8 01 00 00 00 C3 55 89 E5 }
	 condition:
		for any of them : ( $ at pe.entry_point )
}rule rule_611_Free_Pascal {
	meta:
		tool = "C"
		name = "Free Pascal"
		version = "0.99.10"
		pattern = "E8006E00005589E58B7D0C8B750889F88B5D1029"
	strings:
		$1 = { E8 00 6E 00 00 55 89 E5 8B 7D 0C 8B 75 08 89 F8 8B 5D 10 29 }
	condition:
		for any of them : ( $ at pe.entry_point )
		}
rule rule_612_Free_Pascal {
	meta:
		tool = "C"
		name = "Free Pascal"
		version = "1.0.10"
		pattern = "C605????????01E8????0000C605????????00E8????000050E800000000FF25????????55"
	strings:
		$1 = { C6 05 ?? ?? ?? ?? 01 E8 ?? ?? 00 00 C6 05 ?? ?? ?? ?? 00 E8 ?? ?? 00 00 50 E8 00 00 00 00 FF 25 ?? ?? ?? ?? 55 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_613_Free_Pascal {
	meta:
		tool = "C"
		name = "Free Pascal"
		version = "1.0.10"
		pattern = "C605????????00E8????000050E800000000FF25????????5589E5"
	strings:
		$1 = { C6 05 ?? ?? ?? ?? 00 E8 ?? ?? 00 00 50 E8 00 00 00 00 FF 25 ?? ?? ?? ?? 55 89 E5 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_614_Free_Pascal {
	meta:
		tool = "C"
		name = "Free Pascal"
		version = "1.0.4"
		pattern = "5589E5C605????????00E8????????5531ED89E0A3????????668CD5892D"
	strings:
		$1 = { 55 89 E5 C6 05 ?? ?? ?? ?? 00 E8 ?? ?? ?? ?? 55 31 ED 89 E0 A3 ?? ?? ?? ?? 66 8C D5 89 2D }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_615_Free_Pascal {
	meta:
		tool = "C"
		name = "Free Pascal"
		version = "1.0.4"
		pattern = "C605????????005589E55356578B7D08893D????????8B7D0C893D????????8B7D10893D"
	strings:
		$1 = { C6 05 ?? ?? ?? ?? 00 55 89 E5 53 56 57 8B 7D 08 89 3D ?? ?? ?? ?? 8B 7D 0C 89 3D ?? ?? ?? ?? 8B 7D 10 89 3D }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_616_Free_Pascal {
	meta:
		tool = "C"
		name = "Free Pascal"
		version = "2.0.0"
		pattern = "5589E5C605????????00E8????????6A0064FF350000000089E0A3"
	strings:
		$1 = { 55 89 E5 C6 05 ?? ?? ?? ?? 00 E8 ?? ?? ?? ?? 6A 00 64 FF 35 00 00 00 00 89 E0 A3 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_617_Free_Pascal {
	meta:
		tool = "C"
		name = "Free Pascal"
		version = "2.0.0"
		pattern = "C605????????01E874000000C605????????00E86800000050E800000000FF25????????90"
	strings:
		$1 = { C6 05 ?? ?? ?? ?? 01 E8 74 00 00 00 C6 05 ?? ?? ?? ?? 00 E8 68 00 00 00 50 E8 00 00 00 00 FF 25 ?? ?? ?? ?? 90 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_618_Free_Pascal {
	meta:
		tool = "C"
		name = "Free Pascal"
		version = "2.6.0"
		pattern = "5589E5C605????????0168????????6AF6E8????????50E8"
	strings:
		$1 = { 55 89 E5 C6 05 ?? ?? ?? ?? 01 68 ?? ?? ?? ?? 6A F6 E8 ?? ?? ?? ?? 50 E8 }
	condition:
		for any of them : ( $ at pe.entry_point )
})x86_pe_compiler";
