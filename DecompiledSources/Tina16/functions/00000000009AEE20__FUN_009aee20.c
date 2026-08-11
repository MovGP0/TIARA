/* Ghidra address: 009aee20 */
/* Ghidra symbol: FUN_009aee20 */


void FUN_009aee20(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_009aedd0();
  return;
}

