/* Ghidra address: 00f6eb20 */
/* Ghidra symbol: FUN_00f6eb20 */


undefined8 FUN_00f6eb20(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x34));
  return *(undefined8 *)(*(longlong *)(lVar1 + 0x20) + (longlong)*(int *)(param_1 + 0x38) * 8);
}

