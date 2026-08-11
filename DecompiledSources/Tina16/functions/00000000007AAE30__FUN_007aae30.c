/* Ghidra address: 007aae30 */
/* Ghidra symbol: FUN_007aae30 */


void FUN_007aae30(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_007aade0();
  return;
}

