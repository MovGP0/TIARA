/* Ghidra address: 016d04f0 */
/* Ghidra symbol: FUN_016d04f0 */


void FUN_016d04f0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_016d04a0();
  return;
}

