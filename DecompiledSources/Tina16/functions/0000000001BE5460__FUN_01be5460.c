/* Ghidra address: 01be5460 */
/* Ghidra symbol: FUN_01be5460 */


void FUN_01be5460(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x620);
  *(undefined8 *)(param_1 + 0x620) = 0;
  FUN_00410f20(uVar1);
  FUN_01c02f10(param_1);
  return;
}

