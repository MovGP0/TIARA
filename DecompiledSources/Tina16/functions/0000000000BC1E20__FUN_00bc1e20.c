/* Ghidra address: 00bc1e20 */
/* Ghidra symbol: FUN_00bc1e20 */


undefined8 FUN_00bc1e20(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  if (param_1[0x20] == 0) {
    (**(code **)(*param_1 + 0x120))(param_1,param_2);
  }
  else {
    iVar2 = *(int *)((longlong)param_1 + 0x154) - (int)param_1[0x23];
    FUN_004169f0(param_2,iVar2);
    if (0 < iVar2) {
      uVar1 = FUN_00414de0(param_2);
      FUN_00711330(uVar1,param_1[0x20] + (longlong)(int)param_1[0x23] * 2,iVar2);
    }
  }
  return param_2;
}

