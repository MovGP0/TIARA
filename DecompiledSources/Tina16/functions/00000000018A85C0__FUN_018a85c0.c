/* Ghidra address: 018a85c0 */
/* Ghidra symbol: FUN_018a85c0 */


void FUN_018a85c0(longlong param_1,longlong param_2)

{
  FUN_00654e40(param_1,param_2);
  *(uint *)(param_2 + 8) =
       *(uint *)(param_2 + 8) | *(uint *)(&DAT_01fb35ac + (ulonglong)*(byte *)(param_1 + 0x4ba) * 4)
  ;
  if (((*(char *)(param_1 + 0x390) != '\0') && (*PTR_DAT_02003210 != '\0')) &&
     (*(char *)(param_1 + 0x4ba) == '\x01')) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xff7fffff;
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x200;
  }
  return;
}

