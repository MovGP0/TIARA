/* Ghidra address: 00a0edb0 */
/* Ghidra symbol: FUN_00a0edb0 */


void FUN_00a0edb0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x220);
  if (*(int *)(param_1 + 0x6c) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x270) + 0x10))();
  }
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  return;
}

