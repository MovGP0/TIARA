/* Ghidra address: 00a7b130 */
/* Ghidra symbol: FUN_00a7b130 */


void FUN_00a7b130(longlong param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0xa8) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  FUN_00410f20(uVar1);
  FUN_00a7af90(param_1);
  return;
}

