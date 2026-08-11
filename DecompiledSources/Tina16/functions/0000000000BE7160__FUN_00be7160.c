/* Ghidra address: 00be7160 */
/* Ghidra symbol: FUN_00be7160 */


void FUN_00be7160(longlong param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x28) < param_2) {
    iVar1 = (param_2 - param_2 % 0x100) + 0x100;
    FUN_00409620(param_1 + 0x18,(longlong)(iVar1 * 4));
    *(int *)(param_1 + 0x28) = iVar1;
  }
  return;
}

