/* Ghidra address: 016c5d30 */
/* Ghidra symbol: FUN_016c5d30 */


void FUN_016c5d30(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_2 + 0xa8) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x88));
  return;
}

