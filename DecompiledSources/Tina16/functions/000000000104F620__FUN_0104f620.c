/* Ghidra address: 0104f620 */
/* Ghidra symbol: FUN_0104f620 */


void FUN_0104f620(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_006d5120(*(undefined8 *)(param_1 + 0x6d8));
  if (iVar1 == DAT_0202f414) {
    FUN_006809e0(*(undefined8 *)(param_1 + 0x958));
  }
  else {
    FUN_0104f660(param_1,1);
  }
  return;
}

