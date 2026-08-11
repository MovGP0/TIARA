/* Ghidra address: 01c461f0 */
/* Ghidra symbol: FUN_01c461f0 */


void FUN_01c461f0(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x5f8) = *(undefined8 *)(param_2 + 0x5f0);
  *(undefined8 *)(param_2 + 0x5f0) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x5f8));
  return;
}

