/* Ghidra address: 00f76320 */
/* Ghidra symbol: FUN_00f76320 */


void FUN_00f76320(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x6d8) = param_2;
  uVar1 = FUN_00f62a60(param_2);
  *(undefined8 *)(param_1 + 0x6e0) = uVar1;
  return;
}

