/* Ghidra address: 00f766d0 */
/* Ghidra symbol: FUN_00f766d0 */


void FUN_00f766d0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_00f6de60(param_2);
  *(undefined4 *)(lVar1 + 0x10) = param_3;
  FUN_004ae7e0(*(undefined8 *)(param_1 + 8),lVar1);
  return;
}

