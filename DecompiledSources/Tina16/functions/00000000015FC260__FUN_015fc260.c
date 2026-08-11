/* Ghidra address: 015fc260 */
/* Ghidra symbol: FUN_015fc260 */


void FUN_015fc260(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    *(uint *)(param_1 + 0x8ac) = *(uint *)(param_1 + 0x8ac) & 0xfffffffb;
  }
  else {
    *(uint *)(param_1 + 0x8ac) = *(uint *)(param_1 + 0x8ac) | 4;
  }
  return;
}

