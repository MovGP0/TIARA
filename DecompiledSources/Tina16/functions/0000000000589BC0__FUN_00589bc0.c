/* Ghidra address: 00589bc0 */
/* Ghidra symbol: FUN_00589bc0 */


undefined8 FUN_00589bc0(char *param_1,undefined *param_2)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  
  if (*param_1 == '\x01') {
    uVar2 = FUN_0043fc00(param_2);
  }
  else if (*(int *)(param_1 + (ulonglong)(byte)param_1[1] + 3) < 0) {
    if (param_2 == PTR_u_False_01de0ec0) {
      bVar3 = true;
    }
    else if ((param_2 == (undefined *)0x0) || (PTR_u_False_01de0ec0 == (undefined *)0x0)) {
      bVar3 = false;
    }
    else {
      iVar1 = FUN_0043e420(param_2,PTR_u_False_01de0ec0);
      bVar3 = iVar1 == 0;
    }
    if (bVar3) {
      uVar2 = 0;
    }
    else {
      if (param_2 == PTR_u_True_01de0ec8) {
        bVar3 = true;
      }
      else if ((param_2 == (undefined *)0x0) || (PTR_u_True_01de0ec8 == (undefined *)0x0)) {
        bVar3 = false;
      }
      else {
        iVar1 = FUN_0043e420(param_2,PTR_u_True_01de0ec8);
        bVar3 = iVar1 == 0;
      }
      if (bVar3) {
        uVar2 = 0xffffffff;
      }
      else {
        uVar2 = FUN_0043fc00(param_2);
      }
    }
  }
  else {
    uVar2 = FUN_00589a20(param_1,param_2);
  }
  return uVar2;
}

