/* Ghidra address: 00a9db60 */
/* Ghidra symbol: FUN_00a9db60 */


undefined4
FUN_00a9db60(longlong *param_1,undefined8 param_2,int param_3,undefined4 param_4,int param_5)

{
  longlong lVar1;
  int iVar2;
  undefined7 uVar3;
  bool bVar4;
  undefined1 auStack_58 [32];
  int local_38;
  undefined4 local_30;
  undefined1 local_20 [4];
  undefined1 local_1c [12];
  
  local_38 = param_3;
  local_30 = param_4;
  (**(code **)(*param_1 + 200))(param_1,param_2,local_20,local_1c);
  uVar3 = (undefined7)((ulonglong)param_1 >> 8);
  if (param_5 == 0) {
    if (*(byte *)((longlong)param_1 + 0x50f) < 8) {
      bVar4 = ((int)CONCAT71(uVar3,1) << (*(byte *)((longlong)param_1 + 0x50f) & 0x1f) & 0xcU) != 0;
    }
    else {
      bVar4 = false;
    }
    if ((bVar4) && (*(char *)((longlong)param_1 + 0x4c) == '\0')) {
      if (*(byte *)(param_1 + 0xc) < 8) {
        bVar4 = ((int)CONCAT71(uVar3,1) << (*(byte *)(param_1 + 0xc) & 0x1f) & 0x60U) != 0;
      }
      else {
        bVar4 = false;
      }
      if (((!bVar4) && (*(int *)((longlong)param_1 + 0x484) == 0)) &&
         (*(int *)((longlong)param_1 + 0x47c) == 0)) {
        FUN_00a55db0(param_1 + 0x8a,local_20,local_1c,*(undefined1 *)(param_1[3] + 0x60));
        iVar2 = FUN_00a9d940(auStack_58);
        iVar2 = (param_3 - (int)param_1[0x99]) - iVar2;
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        if (*(char *)((longlong)param_1 + 0x50f) == '\x02') {
          *(int *)((longlong)param_1 + 0x484) = iVar2 / 2;
          *(int *)((longlong)param_1 + 0x47c) = iVar2 / 2;
        }
        else if (*(char *)((longlong)param_1 + 0x50f) == '\x03') {
          *(int *)((longlong)param_1 + 0x484) = iVar2;
        }
      }
    }
  }
  else if (param_5 == 1) {
    if ((int)param_1[0x99] == -0xbc6d5d) {
      FUN_00a55db0(param_1 + 0x8a,local_20,local_1c,*(undefined1 *)(param_1[3] + 0x60));
      FUN_00a9d9d0(auStack_58);
    }
    else if (*(int *)((longlong)param_1 + 0x47c) == -0xbc6d5d) {
      if (*(byte *)(param_1 + 0xc) < 8) {
        bVar4 = ((int)CONCAT71(uVar3,1) << (*(byte *)(param_1 + 0xc) & 0x1f) & 0x60U) != 0;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        *(undefined4 *)((longlong)param_1 + 0x47c) = 0;
      }
      else {
        FUN_00a9dac0(auStack_58);
      }
    }
    else {
      FUN_00a9db10(auStack_58);
    }
  }
  else if (param_5 == 2) {
    lVar1 = param_1[0x99];
    if ((int)lVar1 == -0xbc6d5d) {
      if (*(int *)((longlong)param_1 + 0x484) == -0xbc6d5d) {
        *(undefined4 *)((longlong)param_1 + 0x484) = 0;
      }
      else {
        *(undefined4 *)((longlong)param_1 + 0x47c) = 0;
      }
      FUN_00a55db0(param_1 + 0x8a,local_20,local_1c,*(undefined1 *)(param_1[3] + 0x60));
      FUN_00a9d9d0(auStack_58);
    }
    else {
      iVar2 = FUN_00a9d940(auStack_58);
      iVar2 = (param_3 - (int)lVar1) - iVar2;
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      *(int *)((longlong)param_1 + 0x484) = iVar2 / 2;
      *(int *)((longlong)param_1 + 0x47c) = iVar2 - iVar2 / 2;
    }
  }
  else if (param_5 == 3) {
    *(undefined4 *)((longlong)param_1 + 0x484) = 0;
    *(undefined4 *)((longlong)param_1 + 0x47c) = 0;
    FUN_00a55db0(param_1 + 0x8a,local_20,local_1c,*(undefined1 *)(param_1[3] + 0x60));
    FUN_00a9d9d0(auStack_58);
  }
  return (int)param_1[0x99];
}

