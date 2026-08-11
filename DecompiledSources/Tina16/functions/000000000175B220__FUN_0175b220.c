/* Ghidra address: 0175b220 */
/* Ghidra symbol: FUN_0175b220 */


void FUN_0175b220(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_0175b1d0();
  return;
}

