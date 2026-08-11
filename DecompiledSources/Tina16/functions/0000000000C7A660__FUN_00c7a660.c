/* Ghidra address: 00c7a660 */
/* Ghidra symbol: FUN_00c7a660 */


void FUN_00c7a660(longlong param_1,uint *param_2)

{
  if (*(char *)(*(longlong *)(param_1 + 0x220) + 0xb) == '\0') {
    *param_2 = *param_2 & 0xfffffdff;
  }
  return;
}

