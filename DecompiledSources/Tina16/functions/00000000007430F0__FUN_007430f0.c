/* Ghidra address: 007430f0 */
/* Ghidra symbol: FUN_007430f0 */


void FUN_007430f0(longlong param_1,longlong param_2)

{
  FUN_00654e40(param_1,param_2);
  *(uint *)(param_2 + 8) =
       *(uint *)(param_2 + 8) | *(uint *)(&DAT_01e06e7c + (ulonglong)*(byte *)(param_1 + 0x4a4) * 4)
  ;
  if (((*PTR_DAT_02003210 != '\0') && (*(char *)(param_1 + 0x390) != '\0')) &&
     (*(char *)(param_1 + 0x4a4) == '\x01')) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xff7fffff;
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x200;
  }
  *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffc;
  return;
}

