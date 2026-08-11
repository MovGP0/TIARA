/* Ghidra address: 00820700 */
/* Ghidra symbol: FUN_00820700 */


void FUN_00820700(undefined8 param_1,longlong param_2)

{
  FUN_0068c370(param_1,param_2);
  if ((*(uint *)(param_2 + 8) & 0x30) == 0) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x10;
  }
  return;
}

