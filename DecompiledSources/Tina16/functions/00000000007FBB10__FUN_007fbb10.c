/* Ghidra address: 007fbb10 */
/* Ghidra symbol: FUN_007fbb10 */


void FUN_007fbb10(longlong param_1,longlong param_2)

{
  FUN_007fad50(param_1,param_2);
  *(uint *)(param_2 + 8) =
       *(uint *)(param_2 + 8) | *(uint *)(&DAT_01e140e4 + (ulonglong)*(byte *)(param_1 + 0x4b8) * 4)
  ;
  if (((*PTR_DAT_02003210 != '\0') && (*(char *)(param_1 + 0x390) != '\0')) &&
     (*(char *)(param_1 + 0x4b8) == '\x01')) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xff7fffff;
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x200;
  }
  return;
}

