/* Ghidra address: 0131c570 */
/* Ghidra symbol: FUN_0131c570 */


void FUN_0131c570(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(lVar1 + 0x90) != 0) {
    FUN_012ccc10(*(longlong *)(lVar1 + 0x90),*(undefined8 *)(param_1 + 0x58),
                 *(int *)(lVar1 + 0x78) + -1,*(undefined4 *)(lVar1 + 0x7c),
                 *(int *)(lVar1 + 0x80) + 1);
    FUN_013189e0(lVar1,0);
  }
  return;
}

