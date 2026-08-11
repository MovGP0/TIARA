/* Ghidra address: 004b73a0 */
/* Ghidra symbol: FUN_004b73a0 */


longlong FUN_004b73a0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  longlong lVar2;
  
  if ((longlong)param_3 < 2) {
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3 & 0xffffffff);
    lVar2 = (longlong)iVar1;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2,1);
    lVar2 = FUN_004b9610(param_1,param_3 - 1);
    lVar2 = iVar1 + lVar2;
  }
  return lVar2;
}

