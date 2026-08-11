/* Ghidra address: 00cb8750 */
/* Ghidra symbol: FUN_00cb8750 */


void FUN_00cb8750(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_2 + 0x80) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x88));
  return;
}

