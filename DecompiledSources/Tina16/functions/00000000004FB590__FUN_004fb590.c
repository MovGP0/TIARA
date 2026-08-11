/* Ghidra address: 004fb590 */
/* Ghidra symbol: FUN_004fb590 */


void FUN_004fb590(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_004fb540();
  return;
}

