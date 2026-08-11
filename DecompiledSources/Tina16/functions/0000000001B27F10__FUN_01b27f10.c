/* Ghidra address: 01b27f10 */
/* Ghidra symbol: FUN_01b27f10 */


void FUN_01b27f10(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_01b27ec0();
  return;
}

