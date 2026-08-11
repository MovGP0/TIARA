/* Ghidra address: 00bc22c0 */
/* Ghidra symbol: FUN_00bc22c0 */


void FUN_00bc22c0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0xad) = *param_2;
  *(undefined8 *)(param_1 + 0xb5) = param_2[1];
  *(undefined8 *)(param_1 + 0xbd) = param_2[2];
  *(undefined8 *)(param_1 + 0xc5) = param_2[3];
  return;
}

