/* Ghidra address: 00f787a0 */
/* Ghidra symbol: FUN_00f787a0 */


void FUN_00f787a0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x88) = param_2;
  uVar1 = FUN_00f62a60(param_2);
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  return;
}

