/* Ghidra address: 00abf9b0 */
/* Ghidra symbol: FUN_00abf9b0 */


void FUN_00abf9b0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  FUN_00410f20(uVar1);
  return;
}

