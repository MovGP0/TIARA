/* Ghidra address: 01b5da30 */
/* Ghidra symbol: FUN_01b5da30 */


void FUN_01b5da30(longlong param_1,uint param_2)

{
  FUN_00e1d120(param_2);
  *(uint *)(param_1 + 0x70) = param_2 & 0xff;
  return;
}

