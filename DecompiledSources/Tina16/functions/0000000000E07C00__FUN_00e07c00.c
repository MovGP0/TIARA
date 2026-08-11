/* Ghidra address: 00e07c00 */
/* Ghidra symbol: FUN_00e07c00 */


void FUN_00e07c00(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x20) + -4);
  }
  if (param_2 + 1 <= iVar1) {
    iVar2 = ((param_2 + 1) - iVar1) + -1;
    do {
      FUN_00e07af0(param_1,*(undefined2 *)(*(longlong *)(param_1 + 0x20) + -2 + (longlong)iVar1 * 2)
                  );
      iVar1 = iVar1 + -1;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0);
  }
  FUN_004169f0(param_1 + 0x20,param_2);
  return;
}

