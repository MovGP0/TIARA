/* Ghidra address: 0082dcd0 */
/* Ghidra symbol: FUN_0082dcd0 */


void FUN_0082dcd0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_0082dc80();
  return;
}

