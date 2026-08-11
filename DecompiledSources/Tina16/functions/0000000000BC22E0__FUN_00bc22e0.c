/* Ghidra address: 00bc22e0 */
/* Ghidra symbol: FUN_00bc22e0 */


void FUN_00bc22e0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x8d) = *param_2;
  *(undefined8 *)(param_1 + 0x95) = param_2[1];
  *(undefined8 *)(param_1 + 0x9d) = param_2[2];
  *(undefined8 *)(param_1 + 0xa5) = param_2[3];
  return;
}

