/* Ghidra address: 00c5f0b0 */
/* Ghidra symbol: FUN_00c5f0b0 */


void FUN_00c5f0b0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  FUN_00410f20(param_1);
  if (lVar1 != 0) {
    FUN_01795670(*(undefined8 *)(param_1 + 0x10),1);
    FUN_01794c00(lVar1);
  }
  return;
}

