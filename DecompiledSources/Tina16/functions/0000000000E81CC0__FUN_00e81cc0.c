/* Ghidra address: 00e81cc0 */
/* Ghidra symbol: FUN_00e81cc0 */


void FUN_00e81cc0(longlong param_1,byte param_2)

{
  FUN_00e81a20(param_1,(param_2 & 1) != 0);
  *(bool *)(param_1 + 0x400b5) = (param_2 & 2) != 0;
  return;
}

