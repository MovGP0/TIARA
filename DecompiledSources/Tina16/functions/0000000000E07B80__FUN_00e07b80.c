/* Ghidra address: 00e07b80 */
/* Ghidra symbol: FUN_00e07b80 */


void FUN_00e07b80(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x20) + -4);
  }
  iVar1 = 1;
  if (0 < iVar2) {
    do {
      FUN_00e07b70(param_1,*(undefined2 *)(*(longlong *)(param_1 + 0x20) + -2 + (longlong)iVar1 * 2)
                  );
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

