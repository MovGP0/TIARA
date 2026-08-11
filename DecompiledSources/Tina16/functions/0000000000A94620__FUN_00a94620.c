/* Ghidra address: 00a94620 */
/* Ghidra symbol: FUN_00a94620 */


void FUN_00a94620(longlong param_1,char param_2)

{
  ulonglong uVar1;
  
  if (param_2 != *(char *)(param_1 + 0x19)) {
    *(char *)(param_1 + 0x19) = param_2;
    uVar1 = FUN_00a94830(param_1);
    FUN_00a943c0(param_1,*(longlong *)(param_1 + 0x40) + 8 + (uVar1 & 0xff) * 0x40);
    FUN_00a947a0(param_1);
  }
  return;
}

