/* Ghidra address: 01bf7520 */
/* Ghidra symbol: FUN_01bf7520 */


void FUN_01bf7520(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_2 + 0x80) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x70));
  return;
}

