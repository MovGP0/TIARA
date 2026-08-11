/* Ghidra address: 00a36d00 */
/* Ghidra symbol: FUN_00a36d00 */


void FUN_00a36d00(longlong param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (0 < iVar1) {
    do {
      *param_3 = *param_2 >> 4 & 3 | *param_2 >> 2 & 0x30;
      param_3[1] = *param_2 & 3 | *param_2 * '\x04' & 0x30;
      param_3 = param_3 + 2;
      param_2 = param_2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

