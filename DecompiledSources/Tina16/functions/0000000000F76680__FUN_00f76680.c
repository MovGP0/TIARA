/* Ghidra address: 00f76680 */
/* Ghidra symbol: FUN_00f76680 */


void FUN_00f76680(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x18) = param_2;
  uVar1 = FUN_00f62a60(param_2);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}

