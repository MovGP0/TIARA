/* Ghidra address: 012a3980 */
/* Ghidra symbol: FUN_012a3980 */


void FUN_012a3980(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x74) = param_2 & 0xff;
  FUN_00e17a30(param_2);
  return;
}

