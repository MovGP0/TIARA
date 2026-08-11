/* Ghidra address: 00c034b0 */
/* Ghidra symbol: FUN_00c034b0 */


void FUN_00c034b0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x4e2) != param_2) {
    *(char *)(param_1 + 0x4e2) = param_2;
    if ((*(ushort *)(param_1 + 0x34) & 0x10) == 0) {
      FUN_00c03500(param_1);
    }
    FUN_00c0a950(param_1,0x20);
  }
  return;
}

