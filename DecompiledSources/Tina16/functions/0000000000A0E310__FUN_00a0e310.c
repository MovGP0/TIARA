/* Ghidra address: 00a0e310 */
/* Ghidra symbol: FUN_00a0e310 */


void FUN_00a0e310(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if ((iVar2 != 0xcc) && (iVar2 != 0xcf)) {
    lVar1 = *param_1;
    *(undefined4 *)(lVar1 + 0x28) = 0x14;
    *(int *)(lVar1 + 0x2c) = iVar2;
    (**(code **)*param_1)(param_1);
  }
  iVar2 = 1;
  if (0 < param_2) {
    iVar2 = param_2;
  }
  if ((*(int *)(param_1[0x48] + 0x24) != 0) && (*(int *)((longlong)param_1 + 0xac) < iVar2)) {
    iVar2 = *(int *)((longlong)param_1 + 0xac);
  }
  *(int *)((longlong)param_1 + 0xb4) = iVar2;
  FUN_00a0e0b0(param_1);
  return;
}

