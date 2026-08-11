/* Ghidra address: 01512610 */
/* Ghidra symbol: FUN_01512610 */


void FUN_01512610(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00f04d50(*(undefined8 *)(param_1 + 0xd70));
  *(undefined4 *)(*(longlong *)(param_1 + 0xed8) + 0x38) = uVar1;
  FUN_01512f00(param_1,3);
  FUN_01506c70(param_1);
  FUN_010f6920(param_1,0);
  return;
}

