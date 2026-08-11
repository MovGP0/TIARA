/* Ghidra address: 00c088f0 */
/* Ghidra symbol: FUN_00c088f0 */


void FUN_00c088f0(longlong param_1,char param_2)

{
  char cVar1;
  code *pcVar2;
  
  if ((*(char *)(param_1 + 0x4b0) != param_2) &&
     (*(char *)(param_1 + 0x4b0) = param_2, (*(ushort *)(param_1 + 0x34) & 8) == 0)) {
    pcVar2 = (code *)FUN_00411550(param_1,0xffb0);
    cVar1 = (*pcVar2)(param_1);
    if (cVar1 == '\0') {
      if (param_2 == '\0') {
        FUN_00bf3710(param_1);
        thunk_FUN_04169939();
      }
      else {
        FUN_00c03500(param_1);
      }
    }
  }
  return;
}

