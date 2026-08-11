/* Ghidra address: 01a2f5a0 */
/* Ghidra symbol: FUN_01a2f5a0 */


void FUN_01a2f5a0(longlong param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x708) = 0;
  *(undefined1 *)(param_1 + 0x720) = 0;
  uVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(param_1 + 0x700) = uVar1;
  *(undefined8 *)(param_1 + 0x6f8) = 0;
  return;
}

