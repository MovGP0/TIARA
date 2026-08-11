/* Ghidra address: 01b12a10 */
/* Ghidra symbol: FUN_01b12a10 */


void FUN_01b12a10(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_01b129c0();
  return;
}

