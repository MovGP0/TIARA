/* Ghidra address: 00f04370 */
/* Ghidra symbol: FUN_00f04370 */


void FUN_00f04370(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x70) + 0x18);
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_2 + 0x38);
  return;
}

