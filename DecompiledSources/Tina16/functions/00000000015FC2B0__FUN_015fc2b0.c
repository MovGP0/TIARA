/* Ghidra address: 015fc2b0 */
/* Ghidra symbol: FUN_015fc2b0 */


void FUN_015fc2b0(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    *(uint *)(param_1 + 0x8ac) = *(uint *)(param_1 + 0x8ac) & 0xfffffff7;
  }
  else {
    *(uint *)(param_1 + 0x8ac) = *(uint *)(param_1 + 0x8ac) | 8;
  }
  return;
}

