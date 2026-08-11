/* Ghidra address: 009b3070 */
/* Ghidra symbol: FUN_009b3070 */


void FUN_009b3070(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_009b3020();
  return;
}

