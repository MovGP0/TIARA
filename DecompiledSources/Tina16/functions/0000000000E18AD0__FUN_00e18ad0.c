/* Ghidra address: 00e18ad0 */
/* Ghidra symbol: FUN_00e18ad0 */


undefined4 FUN_00e18ad0(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (DAT_01edc8a0 != 0) {
    if ((DAT_0202e3d0 == (code *)0x0) && (DAT_0202e410 == (code *)0x0)) {
      DAT_0202e410 = (code *)FUN_00427c10(DAT_01edc8a0,L"CheckFGFreqEx");
      if (DAT_0202e410 == (code *)0x0) {
        DAT_0202e3d0 = (code *)FUN_00427c10(DAT_01edc8a0,L"CheckFGFreq");
      }
    }
    if (DAT_0202e410 == (code *)0x0) {
      if (DAT_0202e3d0 != (code *)0x0) {
        (*DAT_0202e3d0)(param_1);
        uVar1 = 0;
      }
    }
    else {
      uVar1 = (*DAT_0202e410)(param_1);
    }
  }
  return uVar1;
}

