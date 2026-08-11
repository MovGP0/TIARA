/* Ghidra address: 00cccef0 */
/* Ghidra symbol: FUN_00cccef0 */


void FUN_00cccef0(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_2 + 0x78) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x50));
  return;
}

