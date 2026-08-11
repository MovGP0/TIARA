/* Ghidra address: 00682ae0 */
/* Ghidra symbol: FUN_00682ae0 */


void FUN_00682ae0(longlong param_1,longlong param_2)

{
  FUN_006815c0(param_1,param_2);
  *(uint *)(param_2 + 8) =
       *(uint *)(param_2 + 8) &
       ~*(uint *)(&DAT_01df9b74 + (ulonglong)*(byte *)(param_1 + 0x4e1) * 4) | 4 |
       *(uint *)(&DAT_01df9b64 + (ulonglong)*(byte *)(param_1 + 0x4e0) * 4);
  return;
}

