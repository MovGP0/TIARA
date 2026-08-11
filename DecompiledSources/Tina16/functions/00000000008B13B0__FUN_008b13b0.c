/* Ghidra address: 008b13b0 */
/* Ghidra symbol: FUN_008b13b0 */


void FUN_008b13b0(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x38));
  return;
}

