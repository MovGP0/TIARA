/* Ghidra address: 005a5d30 */
/* Ghidra symbol: FUN_005a5d30 */


void FUN_005a5d30(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_005a5ce0();
  return;
}

