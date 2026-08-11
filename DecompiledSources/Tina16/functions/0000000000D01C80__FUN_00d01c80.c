/* Ghidra address: 00d01c80 */
/* Ghidra symbol: FUN_00d01c80 */


void FUN_00d01c80(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x48));
  return;
}

