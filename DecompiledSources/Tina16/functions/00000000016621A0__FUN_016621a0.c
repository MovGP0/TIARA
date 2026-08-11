/* Ghidra address: 016621a0 */
/* Ghidra symbol: FUN_016621a0 */


void FUN_016621a0(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = *(int *)(param_1 + 0xd0);
  iVar1 = 0;
  if (iVar3 - 1U < 0x80000000) {
    do {
      if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 200) + (longlong)iVar1 * 8) + 0x60) <
          *(int *)(param_2 + 0x60)) {
        iVar2 = iVar2 + 1;
      }
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (iVar2 == 0) {
    *(int *)(param_2 + 0x58) = *(int *)(param_2 + 0x58) + 1;
  }
  if (iVar2 == *(int *)(param_1 + 0xd0) + -1) {
    *(int *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + 1;
  }
  return;
}

