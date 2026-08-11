/* Ghidra address: 004be8a0 */
/* Ghidra symbol: FUN_004be8a0 */


void FUN_004be8a0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_004bea20(param_1);
  FUN_004b6dc0(*(undefined8 *)(param_1 + 8),uVar1);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}

