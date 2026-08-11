/* Ghidra address: 016808d0 */
/* Ghidra symbol: FUN_016808d0 */


void FUN_016808d0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_01680880();
  return;
}

