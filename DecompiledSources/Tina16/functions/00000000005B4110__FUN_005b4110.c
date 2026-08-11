/* Ghidra address: 005b4110 */
/* Ghidra symbol: FUN_005b4110 */


void FUN_005b4110(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_2 + 0x80) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x88));
  return;
}

