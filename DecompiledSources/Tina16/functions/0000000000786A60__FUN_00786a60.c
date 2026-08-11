/* Ghidra address: 00786a60 */
/* Ghidra symbol: FUN_00786a60 */


void FUN_00786a60(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_20;
  
  thunk_FUN_03cc0d62(&local_20);
  lVar1 = thunk_FUN_04129e10(local_20);
  lVar2 = FUN_00786090(param_1);
  *(bool *)(param_1 + 0x38) = lVar1 == lVar2;
  return;
}

