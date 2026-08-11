/* Ghidra address: 004b16a0 */
/* Ghidra symbol: FUN_004b16a0 */


void FUN_004b16a0(longlong param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_00410f20(uVar1);
  return;
}

