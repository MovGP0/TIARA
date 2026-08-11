/* Ghidra address: 005c6d70 */
/* Ghidra symbol: FUN_005c6d70 */


void FUN_005c6d70(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_005c6d20();
  return;
}

