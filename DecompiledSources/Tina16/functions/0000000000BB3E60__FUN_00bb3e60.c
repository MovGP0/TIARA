/* Ghidra address: 00bb3e60 */
/* Ghidra symbol: FUN_00bb3e60 */


void FUN_00bb3e60(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_2 + 0x70) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x50));
  FUN_00414480(*(longlong *)(param_2 + 0xa0) + 0x78);
  return;
}

