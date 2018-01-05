/**
 * @file src/cpdetect/signatures/yara/database/x86/pe/packer/packer_66.cpp
 * @brief Database of signatures.
 * @copyright (c) 2017 Avast Software, licensed under the MIT license
 */

const char *x86PePacker_66 =
R"x86_pe_packer(
rule rule_Nullsoft_4
{
	meta:
		tool = "I"
		name = "Nullsoft Install System"
		version = "2.13 - 2.23"
		source = "Made by Retdec Team"
		pattern = "81EC7C01000053555633F65789742418BD??9?4000C644241020FF153070400056FF1570724000A3?0??4200568D4424306860010000505668????4?00FF155871400068??92400068?0??4200E8??280000BB00?44?00536800040000FF15B?704000E8"
	strings:
		$1 = { 81 EC 7C 01 00 00 53 55 56 33 F6 57 89 74 24 18 B? ?0 ?? 40 00 C6 44 24 10 20 FF 15 30 ?0 40 00 56 FF 15 7? ?2 40 00 A3 ?0 ?? 4? 00 56 8D 44 24 30 68 60 01 00 00 50 56 68 ?? ?? 4? 00 FF 15 58 ?1 40 00 68 ?? ?? 40 00 68 ?0 ?? 4? 00 E8 ?? 2? 00 00 B? 00 ?? 4? 00 5? 68 00 ?? 00 00 FF 15 B? ?0 40 00 E8 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_Nullsoft_5
{
	meta:
		tool = "I"
		name = "Nullsoft Install System"
		version = "2.24"
		source = "Made by Retdec Team"
		pattern = "81EC8001000053555633DB57895C2418C7442414?09?400033F6C644241020FF153070400053FF1574724000A3?0??4200538D4424346860010000505368????4?00FF155C71400068??92400068?0??4200E8??280000FF15B?704000BF00?04?005057"
	strings:
		$1 = { 81 EC 80 01 00 00 53 55 56 33 DB 57 89 5C 24 18 C7 44 24 14 ?0 9? 40 00 33 F6 C6 44 24 10 20 FF 15 30 70 40 00 53 FF 15 74 72 40 00 A3 ?0 ?? 42 00 53 8D 44 24 34 68 60 01 00 00 50 53 68 ?? ?? 4? 00 FF 15 5C 71 40 00 68 ?? 92 40 00 68 ?0 ?? 42 00 E8 ?? 28 00 00 FF 15 B? 70 40 00 BF 00 ?0 4? 00 50 57 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_Nullsoft_6
{
	meta:
		tool = "I"
		name = "Nullsoft Install System"
		version = "2.25"
		source = "Made by Retdec Team"
		pattern = "558BEC81EC80010000535633DB57895DF4C745F8????4000895DFCC645EC20FF153070400053FF157?724000?3??????00???????0?????????0??????505368??????00FF155?71400068????400068?0????00E8??2?0000FF15B?704000?????0"
	strings:
		$1 = { 55 8B EC 81 EC 80 01 00 00 53 56 33 DB 57 89 5D F4 C7 45 F8 ?? ?? 40 00 89 5D FC C6 45 EC 20 FF 15 30 70 40 00 53 FF 15 7? 72 40 00 ?3 ?? ?? ?? 00 ?? ?? ?? ?0 ?? ?? ?? ?? ?0 ?? ?? ?? 50 53 68 ?? ?? ?? 00 FF 15 5? 71 40 00 68 ?? ?? 40 00 68 ?0 ?? ?? 00 E8 ?? 2? 00 00 FF 15 B? 70 40 00 ?? ?? ?0 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_Nullsoft_7
{
	meta:
		tool = "I"
		name = "Nullsoft Install System"
		version = "2.26 - 2.28"
		source = "Made by Retdec Team"
		pattern = "81EC8001000053555633DB57895C2418C7442410??91400033F6C644241420FF153070400053FF1578724000A3?4??4200538D4424346860010000505368????4?00FF155471400068??9?400068?0??4200E8??270000FF15B?704000BF00?04?005057"
	strings:
		$1 = { 81 EC 80 01 00 00 53 55 56 33 DB 57 89 5C 24 18 C7 44 24 10 ?? 91 40 00 33 F6 C6 44 24 14 20 FF 15 30 70 40 00 53 FF 15 78 72 40 00 A3 ?4 ?? ?? 00 53 8D 44 24 34 68 60 01 00 00 50 53 68 ?? ?? ?? 00 FF 15 54 71 40 00 68 ?? 9? 40 00 68 ?0 ?? ?? 00 E8 ?? 27 00 00 FF 15 B? 70 40 00 BF 00 ?0 ?? 00 50 57 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_Nullsoft_8
{
	meta:
		tool = "I"
		name = "Nullsoft Install System"
		version = "2.29"
		source = "Made by Retdec Team"
		pattern = "81EC8001000053555633DB57895C2418C7442410??91400033F6C644241420FF15307040006801800000FF15B?70400053FF15787240006A08A3?4??4200E8??2A0000A3?4??4200538D4424346860010000505368????4?00FF155471400068??9?4000"
	strings:
		$1 = { 81 EC 80 01 00 00 53 55 56 33 DB 57 89 5C 24 18 C7 44 24 10 ?? 91 40 00 33 F6 C6 44 24 14 20 FF 15 30 70 40 00 68 01 80 00 00 FF 15 B? 70 40 00 53 FF 15 78 72 40 00 6A 08 A3 ?4 ?? 42 00 E8 ?? 2A 00 00 A3 ?4 ?? 42 00 53 8D 44 24 34 68 60 01 00 00 50 53 68 ?? ?? 4? 00 FF 15 54 71 40 00 68 ?? 9? 40 00 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_Nullsoft_9
{
	meta:
		tool = "I"
		name = "Nullsoft Install System"
		version = "2.30"
		source = "Made by Retdec Team"
		pattern = "81EC8001000053555633DB57895C2418C7442410??91400033F6C644241420FF15307040006801800000FF15B?70400053FF157C7240006A08A3?4????00E8??2A0000A3?4????00538D4424346860010000505368??????00FF155871400068??9?4000"
	strings:
		$1 = { 81 EC 80 01 00 00 53 55 56 33 DB 57 89 5C 24 18 C7 44 24 10 ?? 91 40 00 33 F6 C6 44 24 14 20 FF 15 30 70 40 00 68 01 80 00 00 FF 15 B? 70 40 00 53 FF 15 7C 72 40 00 6A 08 A3 ?4 ?? ?? 00 E8 ?? 2A 00 00 A3 ?4 ?? ?? 00 53 8D 44 24 34 68 60 01 00 00 50 53 68 ?? ?? ?? 00 FF 15 58 71 40 00 68 ?? 9? 40 00 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_Nullsoft_10
{
	meta:
		tool = "I"
		name = "Nullsoft Install System"
		version = "2.31 - 2.46"
		source = "Made by Retdec Team"
		pattern = "81EC8001000053555633DB57895C2418C7442410??91400033F6C644241420FF15307040006801800000FF15B?70400053FF157C7240006A08A3?8????00E8??2?0000A3?4????00538D4424346860010000505368??????00FF155871400068??914000"
	strings:
		$1 = { 81 EC 80 01 00 00 53 55 56 33 DB 57 89 5C 24 18 C7 44 24 10 ?? ?? 40 00 33 F6 C6 44 24 14 20 FF 15 30 ?0 40 00 68 01 80 00 00 FF 15 B? ?0 40 00 53 FF 15 ?? ?2 40 00 6A 08 A3 ?8 ?? ?? 00 E8 ?? 2? 00 00 A3 ?4 ?? ?? 00 53 8D 44 24 34 68 60 01 00 00 50 53 68 ?? ?? ?? 00 FF 15 58 ?1 40 00 68 ?? ?? 40 00 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_Nullsoft_11
{
	meta:
		tool = "I"
		name = "Nullsoft Install System"
		version = "2.47 - 2.48"
		source = "Made by Retdec Team"
		pattern = "81EC8001000053555633DB57895C2418C7442410??91400033F6C644241420FF15347040006801800000FF15B?70400053FF157072400053A3?8????00E8??2D00003BC3740768000C0000FFD06A0DE8??2D00006A0BE8??2D0000A3?4????00538D4424"
	strings:
		$1 = { 81 EC 80 01 00 00 53 55 56 33 DB 57 89 5C 24 18 C7 44 24 10 ?? 91 40 00 33 F6 C6 44 24 14 20 FF 15 34 70 40 00 68 01 80 00 00 FF 15 B? 70 40 00 53 FF 15 70 72 40 00 53 A3 ?8 ?? ?? 00 E8 ?? 2D 00 00 3B C3 74 07 68 00 0C 00 00 FF D0 6A 0D E8 ?? 2D 00 00 6A 0B E8 ?? 2D 00 00 A3 ?4 ?? ?? 00 53 8D 44 24 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_Nullsoft_12
{
	meta:
		tool = "I"
		name = "Nullsoft Install System"
		version = "2.49"
		source = "Made by Retdec Team"
		pattern = "81EC8001000053555633DB57895C2418C7442410????400033F6C644241420FF15347040006801800000FF15B?70400053FF1570724000A3?8??4?00FF15B?70400066????0?741153E8??2?00003BC3740768000C0000FFD06A0DE8??2?00006A0BE8"
	strings:
		$1 = { 81 EC 80 01 00 00 53 55 56 33 DB 57 89 5C 24 18 C7 44 24 10 ?? ?? 40 00 33 F6 C6 44 24 14 20 FF 15 34 70 40 00 68 01 80 00 00 FF 15 B? 70 40 00 53 FF 15 70 72 40 00 A3 ?8 ?? 4? 00 FF 15 B? 70 40 00 66 ?? ?? 0? 74 11 53 E8 ?? 2? 00 00 3B C3 74 07 68 00 0C 00 00 FF D0 6A 0D E8 ?? 2? 00 00 6A 0B E8 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_Nullsoft_13
{
	meta:
		tool = "I"
		name = "Nullsoft Install System"
		version = "2.50"
		source = "Made by Retdec Team"
		pattern = "81EC800100005355565733DB6801800000895C241CC7442414??91400033F6C644241820FF15B?704000FF15B?704000663D0600741153E8??2D00003BC3740768000C0000FFD068??914000E8??2D000068??914000E8??2D000068??914000E8??2D00"
	strings:
		$1 = { 81 EC 80 01 00 00 53 55 56 57 33 DB 68 01 80 00 00 89 5C 24 1C C7 44 24 14 ?? 91 40 00 33 F6 C6 44 24 18 20 FF 15 B? 70 40 00 FF 15 B? 70 40 00 66 3D 06 00 74 11 53 E8 ?? 2D 00 00 3B C3 74 07 68 00 0C 00 00 FF D0 68 ?? 91 40 00 E8 ?? 2D 00 00 68 ?? 91 40 00 E8 ?? 2D 00 00 68 ?? 91 40 00 E8 ?? 2D 00 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_Nullsoft_14
{
	meta:
		tool = "I"
		name = "Nullsoft Install System"
		version = "2.51"
		source = "Made by Retdec Team"
		pattern = "81EC840100005355565733DB6801800000895C2420C7442414????4000895C241CC644241820FF15B??04000FF15???04000663D0600741153E8????00003BC3740768000C0000FFD0?????????0?????????000????????????00"
	strings:
		$1 = { 81 EC 84 01 00 00 53 55 56 57 33 DB 68 01 80 00 00 89 5C 24 20 C7 44 24 14 ?? ?? 40 00 89 5C 24 1C C6 44 24 18 20 FF 15 B? ?0 40 00 FF 15 ?? ?0 40 00 66 3D 06 00 74 11 53 E8 ?? ?? 00 00 3B C3 74 07 68 00 0C 00 00 FF D0 ?? ?? ?? ?? ?0 ?? ?? ?? ?? ?0 00 ?? ?? ?? ?? ?? ?? 00 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_Nullsoft_15
{
	meta:
		tool = "I"
		name = "Nullsoft Install System"
		version = "3.00 - 3.01"
		source = "Made by Retdec Team"
		pattern = "81EC8401000053565733DB6801800000895C2418C7442410???14000895C2420C644241420FF15????4000FF15A??04000663D0600741153E8??2F00003BC3740768000C0000FFD0BE98?2400056E8??2?000056FF15A??040008D740601381E75EB556A"
	strings:
		$1 = { 81 EC 84 01 00 00 53 56 57 33 DB 68 01 80 00 00 89 5C 24 18 C7 44 24 10 ?? ?1 40 00 89 5C 24 20 C6 44 24 14 20 FF 15 ?? ?? 40 00 FF 15 A? ?0 40 00 66 3D 06 00 74 11 53 E8 ?? 2F 00 00 3B C3 74 07 68 00 0C 00 00 FF D0 BE 98 ?2 40 00 56 E8 ?? 2? 00 00 56 FF 15 A? ?0 40 00 8D 74 06 01 38 1E 75 EB 55 6A }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_Nullsoft_16
{
	meta:
		tool = "I"
		name = "Nullsoft Install System"
		version = "3.00 - 3.01"
		extra = "unicode version"
		source = "Made by Retdec Team"
		pattern = "81ECD40200005356576A205F33DB6801800000895C2414C7442410?0?24000895C241CFF15B??04000FF15???04000663D0600741153E8??3100003BC3740768000C0000FFD0BEB8?2400056E8??30000056FF155C?140008D740601803E0075EA556A09"
	strings:
		$1 = { 81 EC D4 02 00 00 53 56 57 6A 20 5F 33 DB 68 01 80 00 00 89 5C 24 14 C7 44 24 10 ?0 ?2 40 00 89 5C 24 1C FF 15 B? ?0 40 00 FF 15 ?? ?0 40 00 66 3D 06 00 74 11 53 E8 ?? 31 00 00 3B C3 74 07 68 00 0C 00 00 FF D0 BE B8 ?2 40 00 56 E8 ?? 30 00 00 56 FF 15 5C ?1 40 00 8D 74 06 01 80 3E 00 75 EA 55 6A 09 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_Nullsoft_17
{
	meta:
		tool = "I"
		name = "Nullsoft Install System"
		version = "3.02"
		source = "Made by Retdec Team"
		pattern = "81EC8401000053565733DB6801800000895C2418C7442410???14000895C2420C644241420FF15A??04000FF15???0400025FFFFFFBF663D0600A3?C????00741153E8??3000003BC3740768000C0000FFD0BE98?2400056E8??30000056FF15???04000"
	strings:
		$1 = { 81 EC 84 01 00 00 53 56 57 33 DB 68 01 80 00 00 89 5C 24 18 C7 44 24 10 ?? ?1 40 00 89 5C 24 20 C6 44 24 14 20 FF 15 A? ?0 40 00 FF 15 ?? ?0 40 00 25 FF FF FF BF 66 3D 06 00 A3 ?C ?? ?? 00 74 11 53 E8 ?? 30 00 00 3B C3 74 07 68 00 0C 00 00 FF D0 BE 98 ?2 40 00 56 E8 ?? 30 00 00 56 FF 15 ?? ?0 40 00 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_Nullsoft_18
{
	meta:
		tool = "I"
		name = "Nullsoft Install System"
		version = "3.02"
		extra = "unicode version"
		source = "Made by Retdec Team"
		pattern = "81ECD40200005356576A205F33DB6801800000895C2414C7442410?0A24000895C241CFF15A?804000FF15A?80400025FFFFFFBF663D0600A3?C????00741153E8??3200003BC3740768000C0000FFD0BEB082400056E8??32000056FF15508140008D74"
	strings:
		$1 = { 81 EC D4 02 00 00 53 56 57 6A 20 5F 33 DB 68 01 80 00 00 89 5C 24 14 C7 44 24 10 ?0 A2 40 00 89 5C 24 1C FF 15 A? 80 40 00 FF 15 A? 80 40 00 25 FF FF FF BF 66 3D 06 00 A3 ?C ?? ?? 00 74 11 53 E8 ?? 32 00 00 3B C3 74 07 68 00 0C 00 00 FF D0 BE B0 82 40 00 56 E8 ?? 32 00 00 56 FF 15 50 81 40 00 8D 74 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_Inno_general {
	meta:
		tool = "I"
		name = "Inno Setup"
		source = "Made by Retdec Team"
		pattern = "558BEC83C4??53565733C08945F08945??8945??E8????FFFFE8????FFFFE8????FFFFE8????FFFFE8????FFFF"
	strings:
		$1 = { 55 8B EC 83 C4 ?? 53 56 57 33 C0 89 45 F0 89 45 ?? 89 45 ?? E8 ?? ?? FF FF E8 ?? ?? FF FF E8 ?? ?? FF FF E8 ?? ?? FF FF E8 ?? ?? FF FF }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_Inno_13x_1
{
	meta:
		tool = "I"
		name = "Inno Setup"
		version = "1.3.x"
		source = "Made by Retdec Team"
		pattern = "558BEC83C4C053565733C08945F08945C48945C0E84373FFFFE8F287FFFFE8E1A9FFFFE8A4F6FFFFE823FCFFFFBEF8FE400033C0556865C2400064FF3064892033D2556824C2400064FF326489228D55F033C0E8CCF3FFFF8B55F0B85CFC4000E80374FF"
		strings:
		$1 = { 55 8B EC 83 C4 C0 53 56 57 33 C0 89 45 F0 89 45 C4 89 45 C0 E8 43 73 FF FF E8 F2 87 FF FF E8 E1 A9 FF FF E8 A4 F6 FF FF E8 23 FC FF FF BE F8 FE 40 00 33 C0 55 68 65 C2 40 00 64 FF 30 64 89 20 33 D2 55 68 24 C2 40 00 64 FF 32 64 89 22 8D 55 F0 33 C0 E8 CC F3 FF FF 8B 55 F0 B8 5C FC 40 00 E8 03 74 FF }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_Inno_13x_2
{
	meta:
		tool = "I"
		name = "Inno Setup"
		version = "1.3.x"
		source = "Made by Retdec Team"
		pattern = "558BEC83C4B853565733C08945F08945BC8945B8E8C371FFFFE87286FFFFE889A8FFFFE84CF5FFFFE8CBFAFFFFBE78FE400033C0556851C4400064FF3064892033D2556810C4400064FF326489228D55F033C0E874F2FFFF8B55F0B8DCFB4000E88372FF"
		strings:
		$1 = { 55 8B EC 83 C4 C0 53 56 57 33 C0 89 45 F0 89 45 C4 89 45 C0 E8 43 73 FF FF E8 F2 87 FF FF E8 E1 A9 FF FF E8 A4 F6 FF FF E8 23 FC FF FF BE 74 FE 40 00 33 C0 55 68 65 C2 40 00 64 FF 30 64 89 20 33 D2 55 68 24 C2 40 00 64 FF 32 64 89 22 8D 55 F0 33 C0 E8 CC F3 FF FF 8B 55 F0 B8 D8 FB 40 00 E8 03 74 FF }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_Inno_13x_3
{
	meta:
		tool = "I"
		name = "Inno Setup"
		version = "1.3.x"
		source = "Made by Retdec Team"
		pattern = "558BEC83C4B853565733C08945F08945BC8945B8E8C371FFFFE87286FFFFE889A8FFFFE84CF5FFFFE8CBFAFFFFBE78FE400033C0556851C4400064FF3064892033D2556810C4400064FF326489228D55F033C0E874F2FFFF8B55F0B8DCFB4000E88372FF"
		strings:
		$1 = { 55 8B EC 83 C4 B8 53 56 57 33 C0 89 45 F0 89 45 BC 89 45 B8 E8 C3 71 FF FF E8 72 86 FF FF E8 89 A8 FF FF E8 4C F5 FF FF E8 CB FA FF FF BE 78 FE 40 00 33 C0 55 68 51 C4 40 00 64 FF 30 64 89 20 33 D2 55 68 10 C4 40 00 64 FF 32 64 89 22 8D 55 F0 33 C0 E8 74 F2 FF FF 8B 55 F0 B8 DC FB 40 00 E8 83 72 FF }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_Inno_13x_4
{
	meta:
		tool = "I"
		name = "Inno Setup"
		version = "1.3.x"
		source = "Made by Retdec Team"
		pattern = "558BEC83C4C053565733C08945F08945C48945C0E84373FFFFE8F287FFFFE8E1A9FFFFE8A4F6FFFFE823FCFFFFBE74FE400033C0556865C2400064FF3064892033D2556824C2400064FF326489228D55F033C0E8CCF3FFFF8B55F0B8D8FB4000E80374FF"
		strings:
		$1 = { 55 8B EC 83 C4 C0 53 56 57 33 C0 89 45 F0 89 45 C4 89 45 C0 E8 43 73 FF FF E8 F2 87 FF FF E8 E1 A9 FF FF E8 A4 F6 FF FF E8 23 FC FF FF BE 74 FE 40 00 33 C0 55 68 65 C2 40 00 64 FF 30 64 89 20 33 D2 55 68 24 C2 40 00 64 FF 32 64 89 22 8D 55 F0 33 C0 E8 CC F3 FF FF 8B 55 F0 B8 D8 FB 40 00 E8 03 74 FF }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_Inno_2xx
{
	meta:
		tool = "I"
		name = "Inno Setup"
		version = "2.0.x"
		source = "Made by Retdec Team"
		pattern = "558BEC83C4B853565733C08945F08945BC8945B8E87371FFFFE8DA85FFFFE881A7FFFFE8C8A7FFFFE8B7A8FFFFE836F5FFFFE8F1FAFFFFBE04FF400033C05568E9C4400064FF3064892033D25568A8C4400064FF326489228D55F033C0E87AF2FFFF8B55"
	strings:
		$1 = { 55 8B EC 83 C4 B8 53 56 57 33 C0 89 45 F0 89 45 BC 89 45 B8 E8 73 71 FF FF E8 DA 85 FF FF E8 81 A7 FF FF E8 C8 A7 FF FF E8 B7 A8 FF FF E8 36 F5 FF FF E8 F1 FA FF FF BE 04 FF 40 00 33 C0 55 68 E9 C4 40 00 64 FF 30 64 89 20 33 D2 55 68 A8 C4 40 00 64 FF 32 64 89 22 8D 55 F0 33 C0 E8 7A F2 FF FF 8B 55 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_Inno_300b
{
	meta:
		tool = "I"
		name = "Inno Setup"
		version = "3.0.0b"
		source = "Made by Retdec Team"
		pattern = "558BEC83C4B853565733C08945F08945BC8945B8E89371FFFFE8FA85FFFFE899A7FFFFE8E0A7FFFFE8CFA8FFFFE8F6FAFFFFBE1CFF400033C05568C4C4400064FF3064892033D2556883C4400064FF326489228D55F033C0E897F2FFFF8B55F0B880FC40"
	strings:
		$1 = { 55 8B EC 83 C4 B8 53 56 57 33 C0 89 45 F0 89 45 BC 89 45 B8 E8 93 71 FF FF E8 FA 85 FF FF E8 99 A7 FF FF E8 E0 A7 FF FF E8 CF A8 FF FF E8 F6 FA FF FF BE 1C FF 40 00 33 C0 55 68 C4 C4 40 00 64 FF 30 64 89 20 33 D2 55 68 83 C4 40 00 64 FF 32 64 89 22 8D 55 F0 33 C0 E8 97 F2 FF FF 8B 55 F0 B8 80 FC 40 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_Inno_301b
{
	meta:
		tool = "I"
		name = "Inno Setup"
		version = "3.0.1b"
		source = "Made by Retdec Team"
		pattern = "558BEC83C4B853565733C08945F08945BC8945B8E82F71FFFFE89685FFFFE835A7FFFFE87CA7FFFFE86BA8FFFFE8F6FAFFFFBE20FF400033C0556828C5400064FF3064892033D25568E7C4400064FF326489228D55F033C0E897F2FFFF8B55F0B884FC40"
	strings:
		$1 = { 55 8B EC 83 C4 B8 53 56 57 33 C0 89 45 F0 89 45 BC 89 45 B8 E8 2F 71 FF FF E8 96 85 FF FF E8 35 A7 FF FF E8 7C A7 FF FF E8 6B A8 FF FF E8 F6 FA FF FF BE 20 FF 40 00 33 C0 55 68 28 C5 40 00 64 FF 30 64 89 20 33 D2 55 68 E7 C4 40 00 64 FF 32 64 89 22 8D 55 F0 33 C0 E8 97 F2 FF FF 8B 55 F0 B8 84 FC 40 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
)x86_pe_packer";
