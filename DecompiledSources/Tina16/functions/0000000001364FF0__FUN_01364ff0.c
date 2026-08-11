/* Ghidra address: 01364ff0 */
/* Ghidra symbol: FUN_01364ff0 */


void FUN_01364ff0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  FUN_00410f20();
  if (lVar1 != 0) {
    FUN_01c6d010(lVar1);
  }
  return;
}

