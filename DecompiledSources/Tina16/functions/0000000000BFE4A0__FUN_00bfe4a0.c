/* Ghidra address: 00bfe4a0 */
/* Ghidra symbol: FUN_00bfe4a0 */


void FUN_00bfe4a0(longlong *param_1)

{
  code *pcVar1;
  char cVar2;
  
  FUN_00658970(param_1);
  (**(code **)(*param_1 + 0x328))(param_1,0x1e1,0,0);
  pcVar1 = (code *)FUN_00411550(param_1,0xffb0);
  cVar2 = (*pcVar1)(param_1);
  if ((cVar2 == '\0') && ((char)param_1[0x96] == '\0')) {
    FUN_00bf3710(param_1);
    thunk_FUN_04169939();
    if (*(char *)((longlong)param_1 + 0x5c1) != '\0') {
      cVar2 = FUN_00bf2c80(param_1);
      if (cVar2 != '\0') {
        FUN_00bf3bb0(param_1);
      }
    }
  }
  return;
}

