/* Ghidra address: 00a32ea0 */
/* Ghidra symbol: FUN_00a32ea0 */


uint FUN_00a32ea0(uint param_1,longlong param_2,int param_3)

{
  int iVar1;
  
  if (DAT_020137d0 == '\0') {
    FUN_00a32e50();
  }
  iVar1 = 0;
  if (-1 < param_3 + -1) {
    do {
      param_1 = (&DAT_020133d0)[(param_1 ^ *(byte *)(param_2 + iVar1)) & 0xff] ^ param_1 >> 8;
      iVar1 = iVar1 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return param_1;
}

