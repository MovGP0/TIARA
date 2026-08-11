/* Ghidra address: 010dc250 */
/* Ghidra symbol: FUN_010dc250 */


void FUN_010dc250(longlong param_1,undefined8 param_2)

{
  FUN_00e16640(*(undefined4 *)(param_1 + 0x18),param_2,param_1 + 0x23);
  FUN_00e169d0(*(undefined4 *)(param_1 + 0x18),param_1 + 0x58);
  *(bool *)(param_1 + 0x68) = *(char *)(param_1 + 0x58) == 'l';
  return;
}

