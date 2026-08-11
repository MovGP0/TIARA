/* Ghidra address: 00892920 */
/* Ghidra symbol: FUN_00892920 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00892920(void)

{
  if (DAT_01e234c0 == 0) {
    DAT_01e234c0 = FUN_00452dc0(L"IdnDL.dll",0x8000);
    if (DAT_01e234c0 != 0) {
      _DAT_01e23480 = FUN_00427c10(DAT_01e234c0,L"DownlevelGetLocaleScripts");
      _DAT_01e23488 = FUN_00427c10(DAT_01e234c0,L"DownlevelGetStringScripts");
      _DAT_01e23490 = FUN_00427c10(DAT_01e234c0,L"DownlevelVerifyScripts");
    }
  }
  if (DAT_01e234c8 == 0) {
    DAT_01e234c8 = FUN_00452dc0(L"Normaliz.dll",0x8000);
    if (DAT_01e234c8 != 0) {
      DAT_01e234a8 = FUN_00427c10(DAT_01e234c8,L"IdnToUnicode");
      _DAT_01e234b0 = FUN_00427c10(DAT_01e234c8,L"IdnToNameprepUnicode");
      DAT_01e234b8 = FUN_00427c10(DAT_01e234c8,L"IdnToAscii");
      _DAT_01e23498 = FUN_00427c10(DAT_01e234c8,L"IsNormalizedString");
      _DAT_01e234a0 = FUN_00427c10(DAT_01e234c8,L"NormalizeString");
    }
  }
  return;
}

