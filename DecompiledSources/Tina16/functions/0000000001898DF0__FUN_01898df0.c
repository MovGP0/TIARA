/* Ghidra address: 01898df0 */
/* Ghidra symbol: FUN_01898df0 */


void FUN_01898df0(longlong param_1,undefined2 param_2,int param_3,int param_4)

{
  char cVar1;
  
  FUN_00650d70(param_1,param_2,param_3,param_4);
  if ((((param_3 < *(int *)(param_1 + 0x738)) || (*(int *)(param_1 + 0x740) < param_3)) ||
      (param_4 < *(int *)(param_1 + 0x73c))) || (*(int *)(param_1 + 0x744) < param_4)) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  if (*(char *)(param_1 + 0x72e) != cVar1) {
    FUN_01898ca0(param_1,0);
  }
  *(char *)(param_1 + 0x72e) = cVar1;
  return;
}

