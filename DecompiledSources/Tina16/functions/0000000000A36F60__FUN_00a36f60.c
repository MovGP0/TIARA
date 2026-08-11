/* Ghidra address: 00a36f60 */
/* Ghidra symbol: FUN_00a36f60 */


void FUN_00a36f60(longlong param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
                 undefined1 *param_5)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (0 < iVar1) {
    do {
      *param_5 = param_2[1];
      param_5 = param_5 + 1;
      *param_3 = *param_2;
      *param_4 = param_2[2];
      param_2 = param_2 + 4;
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

