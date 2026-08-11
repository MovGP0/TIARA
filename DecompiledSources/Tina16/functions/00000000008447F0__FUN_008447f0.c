/* Ghidra address: 008447f0 */
/* Ghidra symbol: FUN_008447f0 */


void FUN_008447f0(longlong *param_1,int param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined1 auStack_c8 [44];
  undefined8 local_9c;
  undefined4 local_94;
  undefined1 local_90 [112];
  undefined8 local_20;
  
  pcVar5 = (code *)FUN_00411550(param_1,0xffc5);
  cVar1 = (*pcVar5)(param_1);
  if ((cVar1 == '\0') || (param_5 == '\0')) {
    local_94 = 1;
  }
  else {
    local_94 = 0xffffffff;
  }
  if (*(char *)((longlong)param_1 + 0xa9) != '\0') {
    pcVar5 = (code *)FUN_00411550(param_1,0xffb3);
    cVar1 = (*pcVar5)(param_1);
    if (((cVar1 != '\0') && (*(char *)((longlong)param_1 + 900) != '\0')) &&
       ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0)) {
      (**(code **)(*param_1 + 600))(param_1);
    }
  }
  FUN_00841d10(param_1,local_90);
  if ((param_2 == 0) && (*(int *)((longlong)param_1 + 0x4a4) == 1)) {
    FUN_008445a0(auStack_c8,param_3,param_4);
  }
  else {
    local_20 = CONCAT44((int)param_1[0x9c] + -1,*(int *)((longlong)param_1 + 0x4a4) + -1);
    local_20 = FUN_00842050(param_1,&local_20,local_90);
    local_9c = param_1[0x9d];
    if (param_2 == 0) {
      do {
        iVar4 = (int)local_9c;
        iVar2 = FUN_00844430(auStack_c8,local_9c & 0xffffffff,local_94);
        local_9c = CONCAT44(local_9c._4_4_,iVar2);
        if (((iVar2 <= *(int *)((longlong)param_1 + 0x4bc)) || ((int)local_20 <= iVar2)) ||
           (iVar3 = FUN_00848220(param_1,iVar2), 0 < iVar3)) break;
      } while (iVar4 != iVar2);
    }
    else {
      while( true ) {
        iVar4 = local_9c._4_4_;
        iVar2 = FUN_00844430(auStack_c8,local_9c._4_4_,1);
        local_9c = CONCAT44(iVar2,(int)local_9c);
        if ((iVar2 <= (int)param_1[0x98]) || (local_20._4_4_ <= iVar2)) break;
        iVar3 = FUN_00848250(param_1,iVar2);
        if ((0 < iVar3) || (iVar4 == iVar2)) break;
      }
    }
    iVar4 = (int)local_20;
    if ((int)local_9c <= (int)local_20) {
      iVar4 = (int)local_9c;
    }
    if (iVar4 < *(int *)((longlong)param_1 + 0x4bc)) {
      iVar4 = *(int *)((longlong)param_1 + 0x4bc);
    }
    iVar2 = local_20._4_4_;
    if (local_9c._4_4_ <= local_20._4_4_) {
      iVar2 = local_9c._4_4_;
    }
    if (iVar2 < (int)param_1[0x98]) {
      iVar2 = (int)param_1[0x98];
    }
    local_9c = CONCAT44(iVar2,iVar4);
    if ((iVar4 != (int)param_1[0x9d]) || (iVar2 != *(int *)((longlong)param_1 + 0x4ec))) {
      FUN_00844d40(param_1,iVar4,iVar2);
    }
  }
  return;
}

