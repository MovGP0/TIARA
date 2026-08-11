/* Ghidra address: 01606020 */
/* Ghidra symbol: FUN_01606020 */


void FUN_01606020(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x50) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x58));
  return;
}

