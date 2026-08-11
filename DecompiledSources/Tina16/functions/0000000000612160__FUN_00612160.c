/* Ghidra address: 00612160 */
/* Ghidra symbol: FUN_00612160 */


undefined4 FUN_00612160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  if (DAT_02012060 == (code *)0x0) {
    FUN_00611a70();
    uVar1 = 0x80004001;
    if (DAT_02012050 != 0) {
      DAT_02012060 = (code *)FUN_00427c10(DAT_02012050,L"TaskDialogIndirect");
      if (DAT_02012060 != (code *)0x0) {
        uVar1 = (*DAT_02012060)(param_1,param_2,param_3,param_4);
      }
    }
  }
  else {
    uVar1 = (*DAT_02012060)(param_1,param_2,param_3,param_4);
  }
  return uVar1;
}

