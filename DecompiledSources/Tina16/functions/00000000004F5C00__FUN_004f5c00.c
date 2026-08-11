/* Ghidra address: 004f5c00 */
/* Ghidra symbol: FUN_004f5c00 */


void FUN_004f5c00(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_004f5bb0();
  return;
}

