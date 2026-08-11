/* Ghidra address: 00eb0ea0 */
/* Ghidra symbol: FUN_00eb0ea0 */


void FUN_00eb0ea0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_00eb0e50();
  return;
}

