/* Ghidra address: 01132a80 */
/* Ghidra symbol: FUN_01132a80 */


void FUN_01132a80(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_01132a30();
  return;
}

