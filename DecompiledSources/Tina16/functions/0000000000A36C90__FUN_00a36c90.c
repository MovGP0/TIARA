/* Ghidra address: 00a36c90 */
/* Ghidra symbol: FUN_00a36c90 */


void FUN_00a36c90(longlong param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (0 < iVar1) {
    do {
      *param_3 = *param_2 >> 2 & 0xf | *param_2 & 0xf0;
      param_3[1] = *param_2 * '\x04' & 0xf | *param_2 << 4;
      param_3 = param_3 + 2;
      param_2 = param_2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

