/* Ghidra address: 00cfcc40 */
/* Ghidra symbol: FUN_00cfcc40 */


void FUN_00cfcc40(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x108) = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(param_2 + 0x100) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x108));
  return;
}

