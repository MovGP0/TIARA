/* Ghidra address: 015fc210 */
/* Ghidra symbol: FUN_015fc210 */


void FUN_015fc210(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    *(uint *)(param_1 + 0x8ac) = *(uint *)(param_1 + 0x8ac) | 2;
  }
  else {
    *(uint *)(param_1 + 0x8ac) = *(uint *)(param_1 + 0x8ac) & 0xfffffffd;
  }
  return;
}

