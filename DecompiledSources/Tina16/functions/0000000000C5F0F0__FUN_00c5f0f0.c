/* Ghidra address: 00c5f0f0 */
/* Ghidra symbol: FUN_00c5f0f0 */


void FUN_00c5f0f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  FUN_00410f20();
  if (lVar1 != 0) {
    FUN_01794cb0(lVar1);
  }
  return;
}

