/* Ghidra address: 009adcb0 */
/* Ghidra symbol: FUN_009adcb0 */


void FUN_009adcb0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_009adc60();
  return;
}

