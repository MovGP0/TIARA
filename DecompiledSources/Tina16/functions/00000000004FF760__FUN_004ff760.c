/* Ghidra address: 004ff760 */
/* Ghidra symbol: FUN_004ff760 */


void FUN_004ff760(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_004ff710();
  return;
}

