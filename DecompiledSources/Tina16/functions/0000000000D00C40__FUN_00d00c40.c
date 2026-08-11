/* Ghidra address: 00d00c40 */
/* Ghidra symbol: FUN_00d00c40 */


void FUN_00d00c40(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x50) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x58));
  return;
}

