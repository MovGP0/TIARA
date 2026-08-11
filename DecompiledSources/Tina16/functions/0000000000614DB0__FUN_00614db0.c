/* Ghidra address: 00614db0 */
/* Ghidra symbol: FUN_00614db0 */


void FUN_00614db0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_00614d60();
  return;
}

