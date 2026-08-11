/* Ghidra address: 0055cec0 */
/* Ghidra symbol: FUN_0055cec0 */


void FUN_0055cec0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_0055ce70();
  return;
}

