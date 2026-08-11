/* Ghidra address: 015c0cd0 */
/* Ghidra symbol: FUN_015c0cd0 */


uint FUN_015c0cd0(uint param_1,longlong param_2,int param_3)

{
  int local_10;
  uint local_c;
  
  local_10 = 0;
  local_c = param_1;
  if (-1 < param_3 + -1) {
    do {
      local_c = local_c >> 8 ^
                *(uint *)(&DAT_01f6fdbc +
                         (ulonglong)((local_c ^ *(byte *)(param_2 + local_10)) & 0xff) * 4);
      local_10 = local_10 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return local_c;
}

