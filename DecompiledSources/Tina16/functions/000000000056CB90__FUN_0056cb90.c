/* Ghidra address: 0056cb90 */
/* Ghidra symbol: FUN_0056cb90 */


void FUN_0056cb90(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_0056cb40();
  return;
}

