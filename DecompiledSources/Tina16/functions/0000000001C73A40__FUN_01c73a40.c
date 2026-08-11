/* Ghidra address: 01c73a40 */
/* Ghidra symbol: FUN_01c73a40 */


void FUN_01c73a40(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x700) + 0x4e8);
  lVar2 = FUN_00b89270();
  if (*(char *)(lVar2 + 0x2e) == '\0') {
    if (0 < iVar1) {
      FUN_00848960(*(undefined8 *)(param_1 + 0x700),iVar1 + -1);
    }
  }
  else if (*(int *)(*(longlong *)(param_1 + 0x700) + 0x4e8) + *(int *)(param_1 + 0x1b50) <
           *(int *)(param_1 + 0x1b4c)) {
    FUN_00848960(*(longlong *)(param_1 + 0x700),iVar1 + 1);
  }
  return;
}

