/* Ghidra address: 005c4630 */
/* Ghidra symbol: FUN_005c4630 */


void FUN_005c4630(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_005c45e0();
  return;
}

