/* Ghidra address: 00ccc020 */
/* Ghidra symbol: FUN_00ccc020 */


void FUN_00ccc020(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_2 + 0x88) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x58));
  return;
}

