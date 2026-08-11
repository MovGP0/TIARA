/* Ghidra address: 006edf90 */
/* Ghidra symbol: FUN_006edf90 */


void FUN_006edf90(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x18) = *param_2;
  *(undefined8 *)(param_1 + 0x20) = param_2[1];
  FUN_004b1830(param_1,1);
  return;
}

