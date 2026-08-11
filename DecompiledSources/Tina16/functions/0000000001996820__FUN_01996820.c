/* Ghidra address: 01996820 */
/* Ghidra symbol: FUN_01996820 */


void FUN_01996820(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  
  lVar3 = param_2;
  if (param_2 == 0) {
    iVar4 = *(int *)(param_1 + 0x10) + -1;
    local_30 = 0;
    lVar3 = 0;
    if (-1 < iVar4) {
      do {
        uVar2 = FUN_00b94e60(param_1,iVar4);
        cVar1 = FUN_019967f0(auStack_58,uVar2);
        if (cVar1 != '\0') {
          lVar3 = FUN_00b94e60(param_1,iVar4);
          break;
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != -1);
    }
  }
  local_30 = lVar3;
  local_30 = FUN_01996370(param_1,local_30,1);
  if (param_2 == 0) {
    iVar4 = *(int *)(param_1 + 0x10) + -1;
    if (-1 < iVar4) {
      do {
        uVar2 = FUN_00b94e60(param_1,iVar4);
        cVar1 = FUN_019967a0(auStack_58,uVar2);
        if (cVar1 != '\0') {
          FUN_00b94e60(param_1,iVar4);
          return;
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != -1);
    }
  }
  else {
    FUN_01996740(auStack_58,param_2);
  }
  return;
}

