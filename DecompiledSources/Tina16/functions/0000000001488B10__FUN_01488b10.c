/* Ghidra address: 01488b10 */
/* Ghidra symbol: FUN_01488b10 */


void FUN_01488b10(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_01488ac0();
  return;
}

