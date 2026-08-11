/* Ghidra address: 005e2520 */
/* Ghidra symbol: FUN_005e2520 */


void FUN_005e2520(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_005e24d0();
  return;
}

