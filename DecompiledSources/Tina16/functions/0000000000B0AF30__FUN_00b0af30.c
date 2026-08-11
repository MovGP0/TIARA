/* Ghidra address: 00b0af30 */
/* Ghidra symbol: FUN_00b0af30 */


void FUN_00b0af30(longlong param_1,int param_2,int param_3,int param_4,longlong param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  iVar2 = 0;
  if (-1 < param_4 + -1) {
    do {
      plVar1 = *(longlong **)(param_5 + (longlong)iVar2 * 8);
      (**(code **)(*plVar1 + 0x18))(plVar1,local_40);
      FUN_00b0b2a0(param_1,param_2 + iVar2,*(int *)(param_1 + 0x4c0) + param_3,local_40[0]);
      FUN_0084e470(param_1,param_2 + iVar2,*(int *)(param_1 + 0x4c0) + param_3,
                   *(undefined8 *)(param_5 + (longlong)iVar2 * 8));
      iVar2 = iVar2 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  FUN_00414480(local_40);
  return;
}

