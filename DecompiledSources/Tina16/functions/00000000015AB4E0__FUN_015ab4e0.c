/* Ghidra address: 015ab4e0 */
/* Ghidra symbol: FUN_015ab4e0 */


int FUN_015ab4e0(longlong param_1,longlong param_2,int param_3)

{
  int local_10;
  
  local_10 = 0;
  if (-1 < param_3 + -1) {
    do {
      if (*(char *)(param_1 + local_10) != *(char *)(param_2 + local_10)) {
        return (uint)*(byte *)(param_1 + local_10) - (uint)*(byte *)(param_2 + local_10);
      }
      local_10 = local_10 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 0;
}

