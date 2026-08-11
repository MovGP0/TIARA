/* Ghidra address: 009a09c0 */
/* Ghidra symbol: FUN_009a09c0 */


void FUN_009a09c0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_009a0970();
  return;
}

