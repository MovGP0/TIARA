/* Ghidra address: 00c39530 */
/* Ghidra symbol: FUN_00c39530 */


void FUN_00c39530(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00c38790(param_1);
  iVar2 = *(int *)(param_1 + 0x318);
  if ((iVar2 <= param_2) && (iVar2 = param_2, *(int *)(param_1 + 0x31c) < param_2)) {
    iVar2 = *(int *)(param_1 + 0x31c);
  }
  if (*(int *)(param_1 + 800) != iVar2) {
    *(int *)(param_1 + 800) = iVar2;
    iVar2 = FUN_00c38790(param_1);
    if (iVar1 != iVar2) {
      FUN_0064e770(param_1);
    }
  }
  return;
}

