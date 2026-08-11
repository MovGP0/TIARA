/* Ghidra address: 00ccc3e0 */
/* Ghidra symbol: FUN_00ccc3e0 */


void FUN_00ccc3e0(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_2 + 0x88) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x58));
  return;
}

