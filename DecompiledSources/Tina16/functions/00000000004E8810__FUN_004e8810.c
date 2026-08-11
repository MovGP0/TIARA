/* Ghidra address: 004e8810 */
/* Ghidra symbol: FUN_004e8810 */


void FUN_004e8810(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_004e87c0();
  return;
}

