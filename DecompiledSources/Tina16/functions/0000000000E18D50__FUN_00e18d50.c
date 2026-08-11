/* Ghidra address: 00e18d50 */
/* Ghidra symbol: FUN_00e18d50 */


undefined4 FUN_00e18d50(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (DAT_01edc8a0 != 0) {
    if ((DAT_0202e3e8 == (code *)0x0) && (DAT_0202e428 == (code *)0x0)) {
      DAT_0202e428 = (code *)FUN_00427c10(DAT_01edc8a0,L"CheckFGMaxMinFreqEx");
      if (DAT_0202e428 == (code *)0x0) {
        DAT_0202e3e8 = (code *)FUN_00427c10(DAT_01edc8a0,L"CheckFGMaxMinFreq");
      }
    }
    if (DAT_0202e428 == (code *)0x0) {
      if (DAT_0202e3e8 != (code *)0x0) {
        (*DAT_0202e3e8)(param_1);
        uVar1 = 0;
      }
    }
    else {
      uVar1 = (*DAT_0202e428)(param_1);
    }
  }
  return uVar1;
}

