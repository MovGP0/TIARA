/* Ghidra address: 00409620 */
/* Ghidra symbol: FUN_00409620 */


longlong FUN_00409620(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*param_1 == 0) {
    if (param_2 < 1) {
      lVar2 = 0;
    }
    else {
      lVar2 = (*(code *)PTR_FUN_01db9c80)(param_2);
      if (lVar2 == 0) {
        FUN_004098e0(1);
      }
      *param_1 = lVar2;
    }
  }
  else {
    if (param_2 < 1) {
      iVar1 = (*(code *)PTR_FUN_01db9c88)(*param_1);
      if (iVar1 != 0) {
        FUN_004098e0(2);
      }
      lVar2 = 0;
    }
    else {
      lVar2 = (*(code *)PTR_FUN_01db9c90)(*param_1);
      if (lVar2 == 0) {
        FUN_004098e0(1);
      }
    }
    *param_1 = lVar2;
  }
  return lVar2;
}

