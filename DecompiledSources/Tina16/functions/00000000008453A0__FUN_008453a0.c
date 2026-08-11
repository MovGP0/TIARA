/* Ghidra address: 008453a0 */
/* Ghidra symbol: FUN_008453a0 */


void FUN_008453a0(longlong param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined7 uVar4;
  bool bVar5;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined8 local_88;
  undefined1 local_80 [4];
  int local_7c;
  undefined4 local_64;
  int local_10;
  int local_c;
  
  cVar2 = FUN_0065be20(param_1);
  if ((cVar2 != '\0') && (*(char *)(param_1 + 0x4e4) != '\0')) {
    FUN_00841d10(param_1,local_80);
    local_88 = CONCAT44(*(int *)(param_1 + 0x4e0) + -1,*(int *)(param_1 + 0x4a4) + -1);
    local_88 = FUN_00842050(param_1,&local_88,local_80);
    uVar4 = (undefined7)((ulonglong)param_1 >> 8);
    if (*(byte *)(param_1 + 0x4e4) < 8) {
      bVar5 = ((int)CONCAT71(uVar4,1) << (*(byte *)(param_1 + 0x4e4) & 0x1f) & 10U) != 0;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      if (*(int *)(param_1 + 0x4a4) == 1) {
        local_c = FUN_00848220(param_1,local_64);
        local_10 = FUN_0064d0b0(param_1);
        local_10 = local_10 - local_7c;
        iVar1 = *(int *)(param_1 + 0x520);
        if ((iVar1 < 1) || (local_10 <= local_c - iVar1)) {
          FUN_008452f0(auStack_b8,0,iVar1);
        }
        else {
          local_98 = 1;
          FUN_008447f0(param_1,0,4,local_c - local_10);
        }
      }
      else {
        uVar3 = thunk_FUN_03f3ed25(*(int *)(param_1 + 0x4e8) - *(int *)(param_1 + 0x4bc),0x7f,
                                   (int)local_88 - *(int *)(param_1 + 0x4bc));
        FUN_008452f0(auStack_b8,0,uVar3);
      }
    }
    if (*(byte *)(param_1 + 0x4e4) < 8) {
      bVar5 = ((int)CONCAT71(uVar4,1) << (*(byte *)(param_1 + 0x4e4) & 0x1f) & 0xcU) != 0;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      uVar3 = thunk_FUN_03f3ed25(*(int *)(param_1 + 0x4ec) - *(int *)(param_1 + 0x4c0),0x7f,
                                 local_88._4_4_ - *(int *)(param_1 + 0x4c0));
      FUN_008452f0(auStack_b8,1,uVar3);
    }
  }
  return;
}

