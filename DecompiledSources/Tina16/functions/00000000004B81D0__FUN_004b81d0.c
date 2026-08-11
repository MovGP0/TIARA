/* Ghidra address: 004b81d0 */
/* Ghidra symbol: FUN_004b81d0 */


longlong FUN_004b81d0(longlong *param_1,undefined4 param_2,ulonglong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  if ((longlong)param_3 < 5) {
    iVar1 = (**(code **)(*param_1 + 0x20))(param_1,local_res10,param_3 & 0xffffffff);
    lVar2 = (longlong)iVar1;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x20))(param_1,local_res10,4);
    lVar2 = FUN_004b9610(param_1,param_3 - 4);
    lVar2 = iVar1 + lVar2;
  }
  return lVar2;
}

