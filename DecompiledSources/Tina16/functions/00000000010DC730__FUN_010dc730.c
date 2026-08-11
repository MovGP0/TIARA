/* Ghidra address: 010dc730 */
/* Ghidra symbol: FUN_010dc730 */


void FUN_010dc730(longlong param_1,undefined4 param_2)

{
  FUN_00e168d0(*(undefined4 *)(param_1 + 0x18),param_2);
  *(bool *)(param_1 + 0x68) = (char)param_2 == 'l';
  FUN_00e169d0(*(undefined4 *)(param_1 + 0x18),param_1 + 0x58);
  return;
}

