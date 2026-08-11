/* Ghidra address: 004179d0 */
/* Ghidra symbol: FUN_004179d0 */


void FUN_004179d0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  
  param_2 = param_2 + (ulonglong)*(byte *)(param_2 + 1);
  iVar3 = *(int *)(param_2 + 6);
  if (iVar3 != 0) {
    uVar2 = 0;
    do {
      uVar1 = (ulonglong)uVar2;
      if (*(longlong *)(param_2 + 10 + uVar1 * 0x10) == 0) {
        return;
      }
      FUN_00417a80(param_1 + (ulonglong)*(uint *)(param_2 + 0x12 + uVar1 * 0x10),
                   **(undefined8 **)(param_2 + 10 + uVar1 * 0x10),1);
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

