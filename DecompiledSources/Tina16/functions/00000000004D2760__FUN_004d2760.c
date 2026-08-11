/* Ghidra address: 004d2760 */
/* Ghidra symbol: FUN_004d2760 */


void FUN_004d2760(longlong param_1)

{
  code *pcVar1;
  code *local_38;
  longlong local_30;
  char local_19;
  
  if ((*(ushort *)(param_1 + 0x34) & 0x10) == 0) {
    local_19 = '\0';
    local_38 = FUN_004d27e0;
    local_30 = param_1;
    FUN_004d2c90(param_1,&local_38,&local_19);
    if (local_19 == '\0') {
      local_38 = FUN_004d27e0;
      local_30 = param_1;
      pcVar1 = (code *)FUN_00411550(param_1,0xfffa);
      (*pcVar1)(param_1,&local_38);
    }
  }
  return;
}

