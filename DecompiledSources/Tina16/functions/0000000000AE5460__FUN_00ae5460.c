/* Ghidra address: 00ae5460 */
/* Ghidra symbol: FUN_00ae5460 */


void FUN_00ae5460(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x208) = *(undefined8 *)(param_2 + 0x218);
  *(undefined8 *)(param_2 + 0x218) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x208));
  return;
}

