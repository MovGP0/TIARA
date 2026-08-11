/* Ghidra address: 019b6120 */
/* Ghidra symbol: FUN_019b6120 */


char FUN_019b6120(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  longlong local_res10 [3];
  char local_19;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar3 = FUN_019b5ce0(param_1,param_3);
  iVar4 = 0;
  if (local_res10[0] != 0) {
    iVar4 = *(int *)(local_res10[0] + -4);
  }
  if (iVar3 == iVar4) {
    cVar1 = '\x01';
    iVar4 = 0;
    if (local_res10[0] != 0) {
      iVar4 = *(int *)(local_res10[0] + -4);
    }
    iVar3 = 1;
    local_19 = '\x01';
    if (0 < iVar4) {
      do {
        if ((cVar1 == '\0') ||
           (sVar2 = FUN_019b60b0(param_1,iVar3 + -1,param_3),
           sVar2 != *(short *)(local_res10[0] + -2 + (longlong)iVar3 * 2))) {
          cVar1 = '\0';
        }
        else {
          cVar1 = '\x01';
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
        local_19 = cVar1;
      } while (iVar4 != 0);
    }
  }
  else {
    local_19 = '\0';
  }
  FUN_00414480(local_res10);
  return local_19;
}

