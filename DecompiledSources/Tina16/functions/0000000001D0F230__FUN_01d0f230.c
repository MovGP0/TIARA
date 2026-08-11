/* Ghidra address: 01d0f230 */
/* Ghidra symbol: FUN_01d0f230 */


void FUN_01d0f230(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  
  (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x10,4);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar1 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*param_2 + 0x20))(param_2,*(longlong *)(param_1 + 8) + (longlong)iVar1 * 8,8);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

