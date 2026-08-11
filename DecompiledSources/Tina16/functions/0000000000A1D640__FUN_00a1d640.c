/* Ghidra address: 00a1d640 */
/* Ghidra symbol: FUN_00a1d640 */


void FUN_00a1d640(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)((longlong)param_1 + 0x24);
  if (iVar1 != 100) {
    lVar2 = *param_1;
    *(undefined4 *)(lVar2 + 0x28) = 0x14;
    *(int *)(lVar2 + 0x2c) = iVar1;
    (**(code **)*param_1)(param_1);
  }
  if (param_2 != 0) {
    FUN_00a1d960(param_1,0);
  }
  (**(code **)(*param_1 + 0x20))(param_1);
  (**(code **)(param_1[5] + 0x10))(param_1);
  FUN_00a1dc70(param_1);
  (**(code **)param_1[0x36])(param_1);
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(uint *)((longlong)param_1 + 0x24) = 0x66 - (uint)((int)param_1[0x20] == 0);
  return;
}

