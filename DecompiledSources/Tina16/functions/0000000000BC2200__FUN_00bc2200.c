/* Ghidra address: 00bc2200 */
/* Ghidra symbol: FUN_00bc2200 */


void FUN_00bc2200(longlong param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x158) != *(int *)(param_1 + 0x150)) &&
     (*(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0x154),
     *(longlong *)(param_1 + 0x100) != 0)) {
    for (iVar1 = *(int *)(param_1 + 0x150) - *(int *)(param_1 + 0x158); 0 < iVar1;
        iVar1 = iVar1 + -1) {
      while (*(short *)(*(longlong *)(param_1 + 0x100) + (longlong)*(int *)(param_1 + 0x154) * 2) ==
             -0x2000) {
        *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + 1;
      }
      *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + 1;
    }
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0x150);
  }
  return;
}

