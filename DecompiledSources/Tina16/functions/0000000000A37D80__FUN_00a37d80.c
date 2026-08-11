/* Ghidra address: 00a37d80 */
/* Ghidra symbol: FUN_00a37d80 */


void FUN_00a37d80(longlong param_1,byte *param_2,ushort *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (0 < iVar1) {
    do {
      *param_3 = (ushort)*param_2;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

