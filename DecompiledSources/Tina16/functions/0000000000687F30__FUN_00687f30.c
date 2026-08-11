/* Ghidra address: 00687f30 */
/* Ghidra symbol: FUN_00687f30 */


void FUN_00687f30(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_007f9b70(param_1,1);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x508) = *(undefined4 *)(param_1 + 0x4f0);
  }
  FUN_00650840(param_1);
  return;
}

