/* Ghidra address: 00ce8390 */
/* Ghidra symbol: FUN_00ce8390 */


void FUN_00ce8390(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_2 + 0x70) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x78));
  return;
}

