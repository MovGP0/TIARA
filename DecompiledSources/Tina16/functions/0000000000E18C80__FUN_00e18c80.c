/* Ghidra address: 00e18c80 */
/* Ghidra symbol: FUN_00e18c80 */


undefined4 FUN_00e18c80(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (DAT_01edc8a0 != 0) {
    if ((DAT_0202e3e0 == (code *)0x0) && (DAT_0202e420 == (code *)0x0)) {
      DAT_0202e420 = (code *)FUN_00427c10(DAT_01edc8a0,L"CheckFGOffsEx");
      if (DAT_0202e420 == (code *)0x0) {
        DAT_0202e3e0 = (code *)FUN_00427c10(DAT_01edc8a0,L"CheckFGOffs");
      }
    }
    if (DAT_0202e420 == (code *)0x0) {
      if (DAT_0202e3e0 != (code *)0x0) {
        (*DAT_0202e3e0)(param_1);
        uVar1 = 0;
      }
    }
    else {
      uVar1 = (*DAT_0202e420)(param_1);
    }
  }
  return uVar1;
}

