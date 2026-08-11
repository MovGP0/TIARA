/* Ghidra address: 00be71a0 */
/* Ghidra symbol: FUN_00be71a0 */


void FUN_00be71a0(longlong param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2c) < param_2) {
    iVar1 = (param_2 - param_2 % 0x200) + 0x200;
    FUN_00409620(param_1 + 0x20,(longlong)(iVar1 * 2));
    *(int *)(param_1 + 0x2c) = iVar1;
  }
  return;
}

