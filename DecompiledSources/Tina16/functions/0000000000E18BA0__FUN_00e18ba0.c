/* Ghidra address: 00e18ba0 */
/* Ghidra symbol: FUN_00e18ba0 */


undefined4 FUN_00e18ba0(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (DAT_01edc8a0 != 0) {
    if ((DAT_0202e3d8 == (code *)0x0) && (DAT_0202e418 == (code *)0x0)) {
      DAT_0202e418 = (code *)FUN_00427c10(DAT_01edc8a0,L"CheckFGAmplEx");
      if (DAT_0202e418 == (code *)0x0) {
        DAT_0202e3d8 = (code *)FUN_00427c10(DAT_01edc8a0,L"CheckFGAmpl");
      }
    }
    if (DAT_0202e418 == (code *)0x0) {
      if (DAT_0202e3d8 != (code *)0x0) {
        (*DAT_0202e3d8)(param_1,param_2);
        uVar1 = 0;
      }
    }
    else {
      uVar1 = (*DAT_0202e418)(param_1,param_2);
    }
  }
  return uVar1;
}

