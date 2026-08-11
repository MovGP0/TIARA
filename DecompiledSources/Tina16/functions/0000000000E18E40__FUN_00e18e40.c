/* Ghidra address: 00e18e40 */
/* Ghidra symbol: FUN_00e18e40 */


undefined4 FUN_00e18e40(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (DAT_01edc8a0 != 0) {
    if ((DAT_0202e3f0 == (code *)0x0) && (DAT_0202e430 == (code *)0x0)) {
      DAT_0202e430 = (code *)FUN_00427c10(DAT_01edc8a0,L"CheckFGSweepTimeEx");
      if (DAT_0202e430 == (code *)0x0) {
        DAT_0202e3f0 = (code *)FUN_00427c10(DAT_01edc8a0,L"CheckFGSweepTime");
      }
    }
    if (DAT_0202e430 == (code *)0x0) {
      if (DAT_0202e3f0 != (code *)0x0) {
        (*DAT_0202e3f0)(param_1);
        uVar1 = 0;
      }
    }
    else {
      uVar1 = (*DAT_0202e430)(param_1);
    }
  }
  return uVar1;
}

