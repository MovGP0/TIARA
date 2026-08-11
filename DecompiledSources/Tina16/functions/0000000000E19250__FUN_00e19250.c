/* Ghidra address: 00e19250 */
/* Ghidra symbol: FUN_00e19250 */


undefined4 FUN_00e19250(undefined4 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (DAT_01edc8a0 != 0) {
    if ((DAT_0202e460 == (code *)0x0) && (DAT_0202e468 == (code *)0x0)) {
      DAT_0202e468 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetFGUserDefSignalTableEx");
      if (DAT_0202e468 == (code *)0x0) {
        DAT_0202e460 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetFGUserDefSignalTable");
      }
    }
    if (DAT_0202e468 == (code *)0x0) {
      if (DAT_0202e460 != (code *)0x0) {
        uVar1 = (*DAT_0202e460)(param_1,param_2);
      }
    }
    else {
      uVar1 = (*DAT_0202e468)(param_1,param_2);
    }
  }
  return uVar1;
}

