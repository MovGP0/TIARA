/* Ghidra address: 019abdf0 */
/* Ghidra symbol: FUN_019abdf0 */


void FUN_019abdf0(longlong param_1,int *param_2)

{
  char cVar1;
  short sVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_48 [42];
  undefined1 local_1e;
  undefined1 local_1d;
  uint local_1c;
  
  local_1d = 1;
  local_1c = 0;
  iVar5 = *param_2;
  if (iVar5 == 0x100) {
    cVar1 = FUN_01d3f9f0(param_2,param_1);
    if (cVar1 == '\0') {
      local_1e = (*(ulonglong *)(param_2 + 4) & 0x40000000) != 0;
      if (((*(ulonglong *)(param_2 + 2) < 0x30) || (0x39 < *(ulonglong *)(param_2 + 2))) &&
         ((*(ulonglong *)(param_2 + 2) < 0x41 || (0x5a < *(ulonglong *)(param_2 + 2))))) {
        local_1c = param_2[2] | 0x10000;
        sVar2 = thunk_FUN_040bd713(0x10);
        if (((longlong)sVar2 & 0x8000U) != 0) {
          local_1c = local_1c | 0x20000;
        }
        sVar2 = thunk_FUN_040bd713(0x11);
        if (((longlong)sVar2 & 0x8000U) != 0) {
          local_1c = local_1c | 0x40000;
        }
      }
      else {
        local_1c = param_2[2];
      }
      iVar5 = *(int *)(param_1 + 0x10);
      iVar4 = 0;
      if (-1 < iVar5 + -1) {
        do {
          uVar3 = FUN_00b94e60(param_1,iVar4);
          FUN_019abc20(auStack_48,uVar3);
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
  }
  else if (iVar5 == 0x101) {
    if (((*(ulonglong *)(param_2 + 2) < 0x30) || (0x39 < *(ulonglong *)(param_2 + 2))) &&
       ((*(ulonglong *)(param_2 + 2) < 0x41 || (0x5a < *(ulonglong *)(param_2 + 2))))) {
      local_1c = param_2[2] | 0x10000;
      sVar2 = thunk_FUN_040bd713(0x10);
      if (((longlong)sVar2 & 0x8000U) != 0) {
        local_1c = local_1c | 0x20000;
      }
      thunk_FUN_040bd713(0x11);
    }
    else {
      local_1c = param_2[2];
      iVar4 = 0;
      iVar5 = *(int *)(param_1 + 0x10);
      if (-1 < iVar5 + -1) {
        do {
          uVar3 = FUN_00b94e60(param_1,iVar4);
          FUN_019abd70(auStack_48,uVar3);
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
  }
  else if (iVar5 == 0x102) {
    FUN_019abc00(auStack_48,param_2[2]);
  }
  return;
}

