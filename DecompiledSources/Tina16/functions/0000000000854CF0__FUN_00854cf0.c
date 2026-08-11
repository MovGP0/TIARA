/* Ghidra address: 00854cf0 */
/* Ghidra symbol: FUN_00854cf0 */


void FUN_00854cf0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_00854ca0();
  return;
}

