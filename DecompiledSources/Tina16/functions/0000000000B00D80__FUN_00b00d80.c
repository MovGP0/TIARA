/* Ghidra address: 00b00d80 */
/* Ghidra symbol: FUN_00b00d80 */


void FUN_00b00d80(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x738);
  *(undefined8 *)(param_1 + 0x738) = 0;
  FUN_00410f20(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x740);
  *(undefined8 *)(param_1 + 0x740) = 0;
  FUN_00410f20(uVar1);
  return;
}

