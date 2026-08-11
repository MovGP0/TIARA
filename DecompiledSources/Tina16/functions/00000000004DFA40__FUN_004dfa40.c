/* Ghidra address: 004dfa40 */
/* Ghidra symbol: FUN_004dfa40 */


void FUN_004dfa40(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_004df9f0();
  return;
}

