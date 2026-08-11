/* Ghidra address: 00a7c580 */
/* Ghidra symbol: FUN_00a7c580 */


void FUN_00a7c580(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_00410f20(uVar1);
  return;
}

