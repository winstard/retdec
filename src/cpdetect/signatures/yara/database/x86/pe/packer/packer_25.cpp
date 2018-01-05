/**
 * @file src/cpdetect/signatures/yara/database/x86/pe/packer/packer_25.cpp
 * @brief Database of signatures.
 * @copyright (c) 2017 Avast Software, licensed under the MIT license
 */

const char *x86PePacker_25 =
R"x86_pe_packer(
rule rule_699_IcebergLock_Protector {
	meta:
		tool = "P"
		name = "IcebergLock Protector"
		version = "3.10.1.36 / 3.10.1.41"
		pattern = "E8D7FFFFFF??????????????????????????????????????????????????????????????????????558BEC33C055??????????64FF3064892033C05A5959648910??????????C3E9????????EBF85DC3??????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????8BEC83????B8????????E8????FDFFE8????FFFFB8????????E871FEFFFFE8????FDFF"
	strings:
		$1 = { E8 D7 FF FF FF ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? 55 8B EC 33 C0 55 ?? ?? ?? ?? ?? 64 FF 30 64 89 20 33 C0 5A 59 59 64 89 10 ?? ?? ?? ?? ?? C3 E9 ?? ?? ?? ?? EB F8 5D C3 ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? 8B EC 83 ?? ?? B8 ?? ?? ?? ?? E8 ?? ?? FD FF E8 ?? ?? FF FF B8 ?? ?? ?? ?? E8 71 FE FF FF E8 ?? ?? FD FF }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_700_ICrypt {
	meta:
		tool = "P"
		name = "ICrypt"
		version = "1.0"
		pattern = "558BEC83C4EC53565733C08945ECB8703B0010E83CFAFFFF33C055686C3C001064FF306489206A0A687C3C0010A15056001050E8D8FAFFFF8BD853A15056001050E80AFBFFFF8BF853A15056001050E8D4FAFFFF8BD853E8D4FAFFFF8BF085F674268BD74AB864560010E825F6FFFFB864560010E813F6FFFF8BCF8BD6E8E6FAFFFF53E890FAFFFF8D4DECBA8C3C0010A164560010E816FBFFFF8B55ECB864560010E8C5F4FFFFB864560010E8DBF5FFFFE856FCFFFF33C05A595964891068733C00108D45ECE84DF4FFFFC3E9E3EEFFFFEBF05F5E5BE84DF3FFFF00534554????????00FFFFFFFF08000000766F747265636C65"
	strings:
		$1 = { 55 8B EC 83 C4 EC 53 56 57 33 C0 89 45 EC B8 70 3B 00 10 E8 3C FA FF FF 33 C0 55 68 6C 3C 00 10 64 FF 30 64 89 20 6A 0A 68 7C 3C 00 10 A1 50 56 00 10 50 E8 D8 FA FF FF 8B D8 53 A1 50 56 00 10 50 E8 0A FB FF FF 8B F8 53 A1 50 56 00 10 50 E8 D4 FA FF FF 8B D8 53 E8 D4 FA FF FF 8B F0 85 F6 74 26 8B D7 4A B8 64 56 00 10 E8 25 F6 FF FF B8 64 56 00 10 E8 13 F6 FF FF 8B CF 8B D6 E8 E6 FA FF FF 53 E8 90 FA FF FF 8D 4D EC BA 8C 3C 00 10 A1 64 56 00 10 E8 16 FB FF FF 8B 55 EC B8 64 56 00 10 E8 C5 F4 FF FF B8 64 56 00 10 E8 DB F5 FF FF E8 56 FC FF FF 33 C0 5A 59 59 64 89 10 68 73 3C 00 10 8D 45 EC E8 4D F4 FF FF C3 E9 E3 EE FF FF EB F0 5F 5E 5B E8 4D F3 FF FF 00 53 45 54 ?? ?? ?? ?? 00 FF FF FF FF 08 00 00 00 76 6F 74 72 65 63 6C 65 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_701_ID_Application_Protector {
	meta:
		tool = "P"
		name = "ID Application Protector"
		version = "1.2"
		pattern = "60E8000000005D81EDF20B4700B91922470081E9EA0E470089EA81C2EA0E47008D3A89FE31C0E9D3020000CCCCCCCCE9CA020000433A5C57696E646F77735C536F66745761726550726F746563746F725C"
	strings:
		$1 = { 60 E8 00 00 00 00 5D 81 ED F2 0B 47 00 B9 19 22 47 00 81 E9 EA 0E 47 00 89 EA 81 C2 EA 0E 47 00 8D 3A 89 FE 31 C0 E9 D3 02 00 00 CC CC CC CC E9 CA 02 00 00 43 3A 5C 57 69 6E 64 6F 77 73 5C 53 6F 66 74 57 61 72 65 50 72 6F 74 65 63 74 6F 72 5C }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_702_iLUCRYPT {
	meta:
		tool = "P"
		name = "iLUCRYPT"
		version = "4.015 EXE"
		pattern = "8BECFAC746F7????4281FA????75F9FF66F7"
	strings:
		$1 = { 8B EC FA C7 46 F7 ?? ?? 42 81 FA ?? ?? 75 F9 FF 66 F7 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_703_iLUCRYPT {
	meta:
		tool = "P"
		name = "iLUCRYPT"
		version = "4.018 EXE"
		pattern = "8BECFAC7????????4C4CC3FBBF????B8????2E????D1C84F81"
	strings:
		$1 = { 8B EC FA C7 ?? ?? ?? ?? 4C 4C C3 FB BF ?? ?? B8 ?? ?? 2E ?? ?? D1 C8 4F 81 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_704_IMP_Packer {
	meta:
		tool = "P"
		name = "IMP-Packer"
		version = "1.0"
		pattern = "28??????000000000000000040??????34??????00000000000000000000000000000000000000004C??????5C??????00000000????????????????000000004B45524E454C33322E646C6C000047657450726F634164647265737300004C6F61644C69627261727941"
	strings:
		$1 = { 28 ?? ?? ?? 00 00 00 00 00 00 00 00 40 ?? ?? ?? 34 ?? ?? ?? 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 4C ?? ?? ?? 5C ?? ?? ?? 00 00 00 00 ?? ?? ?? ?? ?? ?? ?? ?? 00 00 00 00 4B 45 52 4E 45 4C 33 32 2E 64 6C 6C 00 00 47 65 74 50 72 6F 63 41 64 64 72 65 73 73 00 00 4C 6F 61 64 4C 69 62 72 61 72 79 41 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_705_Imploder {
	meta:
		tool = "P"
		name = "Imploder"
		version = "1.04"
		pattern = "60E8A000000000000000000000000000000036??????2E??????000000000000000000000000000000000000000001000080000000004B65726E656C33322E44"
	strings:
		$1 = { 60 E8 A0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 36 ?? ?? ?? 2E ?? ?? ?? 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01 00 00 80 00 00 00 00 4B 65 72 6E 65 6C 33 32 2E 44 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_706_IMPostor_Pack {
	meta:
		tool = "P"
		name = "IMPostor Pack"
		version = "1.0"
		pattern = "BE??????0083C601FFE600000000????000000000000000000??????00??02????00100000000200"
	strings:
		$1 = { BE ?? ?? ?? 00 83 C6 01 FF E6 00 00 00 00 ?? ?? 00 00 00 00 00 00 00 00 00 ?? ?? ?? 00 ?? 02 ?? ?? 00 10 00 00 00 02 00 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_707_Inbuild {
	meta:
		tool = "P"
		name = "Inbuild"
		version = "1.0 hard"
		pattern = "B9????BB????2E????2E????43E2"
	strings:
		$1 = { B9 ?? ?? BB ?? ?? 2E ?? ?? 2E ?? ?? 43 E2 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_708_INCrypter {
	meta:
		tool = "P"
		name = "INCrypter"
		version = "0.3 INinY"
		pattern = "6064A1300000008B400C8B400C8D5820C70300000000E8000000005D81ED4D1640008B9D0E17400064A1180000008B40300FB6400283F801750503DBC1CB108B8D121740008BB50617400051813E2E72737274658B8516174000E8230000008B851A174000E8180000008B851E174000E80D0000008B8522174000E802000000EB188BD63B460C720A83F901740B3B46347206BA00000000C35883FA00751A8B4E108B7E0C03BD0217400083F9007409F617310F311F47E2F75983C6284983F90075888B850A1740008944241C6150C3"
	strings:
		$1 = { 60 64 A1 30 00 00 00 8B 40 0C 8B 40 0C 8D 58 20 C7 03 00 00 00 00 E8 00 00 00 00 5D 81 ED 4D 16 40 00 8B 9D 0E 17 40 00 64 A1 18 00 00 00 8B 40 30 0F B6 40 02 83 F8 01 75 05 03 DB C1 CB 10 8B 8D 12 17 40 00 8B B5 06 17 40 00 51 81 3E 2E 72 73 72 74 65 8B 85 16 17 40 00 E8 23 00 00 00 8B 85 1A 17 40 00 E8 18 00 00 00 8B 85 1E 17 40 00 E8 0D 00 00 00 8B 85 22 17 40 00 E8 02 00 00 00 EB 18 8B D6 3B 46 0C 72 0A 83 F9 01 74 0B 3B 46 34 72 06 BA 00 00 00 00 C3 58 83 FA 00 75 1A 8B 4E 10 8B 7E 0C 03 BD 02 17 40 00 83 F9 00 74 09 F6 17 31 0F 31 1F 47 E2 F7 59 83 C6 28 49 83 F9 00 75 88 8B 85 0A 17 40 00 89 44 24 1C 61 50 C3 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_712_Inno_Setup_Module {
	meta:
		tool = "I"
		name = "Inno Setup"
		version = "1.0.x"
		pattern = "558BEC83C4C053565733C08945F08945C48945C0E8A77FFFFFE8FA92FFFFE8F1B3FFFF33C0"
	strings:
		$1 = { 55 8B EC 83 C4 C0 53 56 57 33 C0 89 45 F0 89 45 C4 89 45 C0 E8 A7 7F FF FF E8 FA 92 FF FF E8 F1 B3 FF FF 33 C0 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_713_Inno_Setup_Module {
	meta:
		tool = "I"
		name = "Inno Setup"
		version = "1.2.x"
		pattern = "558BEC83C4C053565733C08945F08945EC8945C0E85B73FFFFE8D687FFFFE8C5A9FFFFE8E0"
	strings:
		$1 = { 55 8B EC 83 C4 C0 53 56 57 33 C0 89 45 F0 89 45 EC 89 45 C0 E8 5B 73 FF FF E8 D6 87 FF FF E8 C5 A9 FF FF E8 E0 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_718_InstallAnywhere {
	meta:
		tool = "I"
		name = "InstallAnywhere"
		version = "6.1"
		pattern = "60BE00A042008DBE0070FDFF5783CDFFEB109090909090908A064688074701DB75078B1E83EEFC11DB72EDB80100000001DB7507"
	strings:
		$1 = { 60 BE 00 A0 42 00 8D BE 00 70 FD FF 57 83 CD FF EB 10 90 90 90 90 90 90 8A 06 46 88 07 47 01 DB 75 07 8B 1E 83 EE FC 11 DB 72 ED B8 01 00 00 00 01 DB 75 07 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_719_InstallShield {
	meta:
		tool = "I"
		name = "InstallShield"
		pattern = "????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????45BC50FF15????4100F645E8015F74060FB745ECEB036A0A5850566A006A00FF"
	strings:
		$1 = { ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? 45 BC 50 FF 15 ?? ?? 41 00 F6 45 E8 01 5F 74 06 0F B7 45 EC EB 03 6A 0A 58 50 56 6A 00 6A 00 FF }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_720_InstallShield {
	meta:
		tool = "I"
		name = "InstallShield"
		version = "2000"
		pattern = "558BEC6AFF68????????68????????64A1????????50648925????????83C4??535657"
	strings:
		$1 = { 55 8B EC 6A FF 68 ?? ?? ?? ?? 68 ?? ?? ?? ?? 64 A1 ?? ?? ?? ?? 50 64 89 25 ?? ?? ?? ?? 83 C4 ?? 53 56 57 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_721_InstallShield {
	meta:
		tool = "I"
		name = "InstallShield"
		version = "32-bit"
		pattern = "558BEC81EC14??00005356576A00FF15????????68????????FF15????????85C07429"
	strings:
		$1 = { 55 8B EC 81 EC 14 ?? 00 00 53 56 57 6A 00 FF 15 ?? ?? ?? ?? 68 ?? ?? ?? ?? FF 15 ?? ?? ?? ?? 85 C0 74 29 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_722_InstallShield {
	meta:
		tool = "I"
		name = "InstallShield"
		version = "Custom"
		pattern = "558BEC83EC4456FF15????41008BF085F675086AFFFF15????41008A06578B3D????41003C22751B56FFD78BF08A063C22740484C075F1803E22751556FFD78B"
	strings:
		$1 = { 55 8B EC 83 EC 44 56 FF 15 ?? ?? 41 00 8B F0 85 F6 75 08 6A FF FF 15 ?? ?? 41 00 8A 06 57 8B 3D ?? ?? 41 00 3C 22 75 1B 56 FF D7 8B F0 8A 06 3C 22 74 04 84 C0 75 F1 80 3E 22 75 15 56 FF D7 8B }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_723_INSTYLER {
	meta:
		tool = "I"
		name = "Instyler"
		pattern = "4953011A00"
	strings:
		$1 = { 49 53 01 1A 00 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_724_INSTYLER {
	meta:
		tool = "I"
		name = "Instyler"
		pattern = "6979457869744944"
	strings:
		$1 = { 69 79 45 78 69 74 49 44 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_725_InterLok {
	meta:
		tool = "P"
		name = "InterLok"
		version = "5.51"
		pattern = "EB03??????55EB03??????EB04??EB06??8BECEBF9??EB02????81ECA8000000EB02????EB01??53EB03??????EB05????EB15??EB03??????56EB04??EBF2??EB01??EBF8??????EB0F??33F6EB10??????EBF7????EBFA??EB01??EBF8??EB01??57EB03??????EB11??????EB03??????????????????EB08??EBF0??EB07????EBFA??????EB02????BB????????EB03??????0F85????????EB07"
	strings:
		$1 = { EB 03 ?? ?? ?? 55 EB 03 ?? ?? ?? EB 04 ?? EB 06 ?? 8B EC EB F9 ?? EB 02 ?? ?? 81 EC A8 00 00 00 EB 02 ?? ?? EB 01 ?? 53 EB 03 ?? ?? ?? EB 05 ?? ?? EB 15 ?? EB 03 ?? ?? ?? 56 EB 04 ?? EB F2 ?? EB 01 ?? EB F8 ?? ?? ?? EB 0F ?? 33 F6 EB 10 ?? ?? ?? EB F7 ?? ?? EB FA ?? EB 01 ?? EB F8 ?? EB 01 ?? 57 EB 03 ?? ?? ?? EB 11 ?? ?? ?? EB 03 ?? ?? ?? ?? ?? ?? ?? ?? ?? EB 08 ?? EB F0 ?? EB 07 ?? ?? EB FA ?? ?? ?? EB 02 ?? ?? BB ?? ?? ?? ?? EB 03 ?? ?? ?? 0F 85 ?? ?? ?? ?? EB 07 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
)x86_pe_packer";
