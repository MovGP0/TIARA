/* Ghidra address: 01366b30 */
/* Ghidra symbol: FUN_01366b30 */


void FUN_01366b30(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  char local_69;
  int local_5c;
  undefined4 local_58;
  char local_52;
  char local_51;
  undefined8 *local_50;
  char local_41;
  longlong local_40;
  
  local_78 = param_1[2];
  if ((*(char *)((longlong)param_1 + 0x22) == '\0') ||
     (*(char *)(*(longlong *)(param_1[2] + 0xc90) + 0x80) == '\0')) {
    local_41 = '\0';
  }
  else {
    local_41 = '\x01';
  }
  local_69 = '\0';
  local_80 = param_2;
  local_7c = param_3;
  if ((*(char *)((longlong)param_1 + 0x24) != '\0') || ((char)param_1[4] == '\0')) {
    lVar1 = *(longlong *)(param_1[2] + 0x27a8);
    local_40 = lVar1;
    if (*PTR_DAT_020052b8 == '\0') {
      iVar9 = *(int *)(lVar1 + 0x10);
      iVar8 = 0;
      if (-1 < iVar9 + -1) {
        do {
          plVar7 = (longlong *)FUN_00b94e60(local_40,iVar8);
          if ((plVar7 != (longlong *)0x0) &&
             (cVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7), cVar3 != '\0')) {
            uVar6 = FUN_0198a580(plVar7);
            if ((byte)uVar6 < 8) {
              bVar10 = ((int)CONCAT71((int7)((ulonglong)uVar6 >> 8),1) << ((byte)uVar6 & 0x1f) &
                       0x1eU) != 0;
            }
            else {
              bVar10 = false;
            }
            if ((bVar10) && (cVar3 = FUN_019af8f0(local_40,plVar7), cVar3 == '\0')) {
              uVar6 = FUN_0198d430(local_40);
              (**(code **)(*plVar7 + 0xa8))(plVar7,uVar6);
              FUN_0198b6d0(local_40,plVar7);
            }
          }
          iVar8 = iVar8 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
    else {
      local_52 = '\0';
      iVar9 = *(int *)(lVar1 + 0x10);
      iVar8 = 0;
      if (-1 < iVar9 + -1) {
        do {
          uVar6 = FUN_00b94e60(lVar1,iVar8);
          FUN_01366a90(auStack_a8,uVar6);
          iVar8 = iVar8 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      if (local_52 != '\0') {
        (**(code **)(*param_1 + 0x10))(param_1);
        return;
      }
    }
    sVar4 = thunk_FUN_03cbc5c8(0x11);
    sVar5 = thunk_FUN_03cbc5c8(0x12);
    if ((((char)param_1[4] == '\0') || (*(char *)(*(longlong *)(param_1[2] + 0xcd8) + 0x80) == '\0')
        ) || ((((longlong)sVar4 & 0x8000U) != 0 && (((longlong)sVar5 & 0x8000U) != 0)))) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    *(undefined1 *)(param_1 + 6) = uVar2;
    FUN_01365360(param_1);
    local_50 = (undefined8 *)FUN_01996b00(0,&PTR_FUN_01984b68);
    FUN_0199e850(local_40,local_50,1);
    lVar1 = local_40;
    iVar9 = *(int *)(local_40 + 0x10);
    iVar8 = 0;
    if (-1 < iVar9 + -1) {
      do {
        uVar6 = FUN_00b94e60(lVar1,iVar8);
        FUN_01366530(auStack_a8,uVar6);
        iVar8 = iVar8 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    FUN_00b95360(local_40);
    if (((char)param_1[6] != '\0') &&
       (cVar3 = FUN_01365890(param_1,local_40,local_50), cVar3 != '\0')) {
      local_69 = '\x01';
    }
    uVar6 = (**(code **)*local_50)(local_50);
    FUN_004095f0(uVar6);
    lVar1 = local_40;
    local_51 = '\0';
    iVar9 = *(int *)(local_40 + 0x10);
    iVar8 = 0;
    if (-1 < iVar9 + -1) {
      do {
        uVar6 = FUN_00b94e60(lVar1,iVar8);
        FUN_01366a20(auStack_a8,uVar6);
        iVar8 = iVar8 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    FUN_00b95360(local_40);
    if (local_51 != '\0') {
      uVar6 = FUN_004b6930(&PTR_FUN_00478280,1);
      FUN_019ad9f0(local_40,uVar6,1);
      FUN_017fe590(*(undefined8 *)PTR_DAT_02001d08,uVar6,0,1);
      FUN_00410f20(uVar6);
    }
    *(undefined1 *)(local_40 + 0xd1) = 0;
    cVar3 = FUN_01993e20(local_40);
    if (cVar3 != '\0') {
      FUN_0199e310(local_40,0,1,0);
      if (local_69 != '\0') {
        FUN_0064e770(*(undefined8 *)(local_78 + 0xa10));
      }
      FUN_017baf00();
    }
    FUN_019a53e0(local_40,0);
    FUN_019a5460(local_40);
  }
  FUN_01364ff0(param_1,local_80,local_7c);
  if (local_41 != '\0') {
    thunk_FUN_03cc0d62(&local_5c);
    local_5c = local_5c + 0x10;
    thunk_FUN_04117c3c(local_5c,local_58);
    FUN_01c6d6a0(local_78,0);
  }
  FUN_017baf30();
  return;
}

