/* Ghidra address: 004de750 */
/* Ghidra symbol: FUN_004de750 */


void FUN_004de750(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_004de700();
  return;
}

