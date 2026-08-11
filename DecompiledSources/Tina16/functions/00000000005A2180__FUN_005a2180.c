/* Ghidra address: 005a2180 */
/* Ghidra symbol: FUN_005a2180 */


void FUN_005a2180(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_005a2130();
  return;
}

