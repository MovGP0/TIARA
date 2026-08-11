/* Ghidra address: 01b0f800 */
/* Ghidra symbol: FUN_01b0f800 */


void FUN_01b0f800(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x128) = param_2 & 0xff;
  return;
}

