/* Ghidra address: 01c46230 */
/* Ghidra symbol: FUN_01c46230 */


void FUN_01c46230(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x5e8) = *(undefined8 *)(param_2 + 0x5e0);
  *(undefined8 *)(param_2 + 0x5e0) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x5e8));
  return;
}

