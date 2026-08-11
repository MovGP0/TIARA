/* Ghidra address: 01b13d00 */
/* Ghidra symbol: FUN_01b13d00 */


void FUN_01b13d00(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_01b13cb0();
  return;
}

