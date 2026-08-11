/* Ghidra address: 00a0c290 */
/* Ghidra symbol: FUN_00a0c290 */


undefined4 FUN_00a0c290(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)((longlong)param_1 + 0x24);
  if (10 < iVar1 - 200U) {
    lVar2 = *param_1;
    *(undefined4 *)(lVar2 + 0x28) = 0x14;
    *(int *)(lVar2 + 0x2c) = iVar1;
    (**(code **)*param_1)(param_1);
  }
  return *(undefined4 *)(param_1[0x48] + 0x24);
}

