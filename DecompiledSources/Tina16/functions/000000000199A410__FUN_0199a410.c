/* Ghidra address: 0199a410 */
/* Ghidra symbol: FUN_0199a410 */


undefined4
FUN_0199a410(longlong param_1,byte param_2,byte param_3,longlong *param_4,int param_5,ushort param_6
            )

{
  uint uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined **ppuVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_c8 [44];
  undefined4 local_9c;
  undefined **local_98;
  undefined **local_90;
  undefined8 *local_88;
  int local_7c;
  uint local_78;
  char local_55;
  int local_54;
  undefined1 local_50 [40];
  
  local_98 = (undefined **)0x0;
  local_90 = (undefined **)0x0;
  *(undefined4 *)(param_1 + 0x378) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x388) = 0;
  *(undefined4 *)(param_1 + 0x38c) = 0xffffffff;
  local_55 = '\0';
  if ((param_6 & 1) != 0) {
    (**(code **)(*DAT_02110758 + 0xb0))
              (DAT_02110758,L"SymbolicSpiceOpAmps",*(undefined8 *)(param_1 + 0x458));
  }
  ppuVar9 = &PTR_FUN_01984b68;
  FUN_01996b00(local_50,&PTR_FUN_01984b68);
  if (param_4 == (longlong *)0x0) {
    FUN_017ff200(*(undefined8 *)(param_1 + 1000));
    (**(code **)(*DAT_02110768 + 0x90))(DAT_02110768);
    (**(code **)(*DAT_02110770 + 0x90))(DAT_02110770);
    (**(code **)(**(longlong **)(param_1 + 0x3e0) + 0x10))(*(longlong **)(param_1 + 0x3e0));
    (**(code **)(**(longlong **)(param_1 + 0x3f0) + 0x10))(*(longlong **)(param_1 + 0x3f0));
    local_88 = (undefined8 *)(param_1 + 0x460);
    uVar7 = *local_88;
    *local_88 = 0;
    FUN_00410f20(uVar7);
    FUN_00598010(*(longlong *)(param_1 + 0x408) + 8);
    FUN_00597fe0(*(longlong *)(param_1 + 0xdf0) + 8);
    FUN_019b3ad0(*(undefined8 *)(param_1 + 0xde8));
  }
  FUN_01997220(auStack_c8);
  if (param_4 != (longlong *)0x0) {
    iVar4 = (**(code **)(*param_4 + 0x1c8))(param_4);
    iVar5 = 0;
    iVar10 = iVar4;
    if (-1 < iVar4 + -1) {
      do {
        (**(code **)(*param_4 + 0x298))(param_4,&local_90,iVar5);
        uVar6 = (**(code **)(*param_4 + 0x210))(param_4,iVar5);
        ppuVar9 = local_90;
        FUN_0199a020(auStack_c8,local_90,uVar6);
        iVar5 = iVar5 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    iVar10 = (**(code **)(*param_4 + 0x1d0))();
    iVar5 = 0;
    if (-1 < iVar10 + -1) {
      do {
        (**(code **)(*param_4 + 0x298))(param_4,&local_98,iVar4 + iVar5);
        uVar7 = (**(code **)(*param_4 + 0x250))(param_4,iVar5);
        ppuVar9 = local_98;
        FUN_0199a1a0(auStack_c8,local_98,uVar7);
        iVar5 = iVar5 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
  }
  if (local_55 == '\0') {
    local_54 = param_5;
    if (*(int *)(param_1 + 0x378) < param_5 + -1) {
      *(int *)(param_1 + 0x378) = param_5 + -1;
    }
    local_78 = 0;
    do {
      local_7c = 0;
      cVar2 = FUN_0199a400(auStack_c8);
      while (cVar2 == '\0') {
        ppuVar9 = (undefined **)(ulonglong)local_78;
        cVar2 = FUN_01996fd0(auStack_c8,ppuVar9,local_7c);
        iVar10 = local_54;
        uVar1 = local_78;
        if (cVar2 == '\0') {
          FUN_01998340(auStack_c8);
          if (uVar1 == local_78) {
            ppuVar9 = (undefined **)(ulonglong)local_78;
            FUN_01997020(auStack_c8,ppuVar9,local_7c);
            FUN_01998310(auStack_c8);
            uVar1 = local_78;
          }
          local_78 = uVar1;
          if (local_54 == iVar10) {
            iVar10 = local_54 + 1;
          }
        }
        local_54 = iVar10;
        local_7c = local_7c + 1;
        if (local_55 != '\0') break;
        cVar2 = FUN_01999110(auStack_c8);
      }
      local_78 = local_78 + 1;
    } while ((local_55 == '\0') && (cVar2 = FUN_01999150(auStack_c8), cVar2 == '\0'));
    if (param_4 == (longlong *)0x0) {
      if (param_3 < 0x10) {
        bVar11 = ((int)CONCAT62((int6)((ulonglong)ppuVar9 >> 0x10),1) << (param_3 & 0x1f) & 0x5142U)
                 != 0;
      }
      else {
        bVar11 = false;
      }
      if ((bVar11) && (iVar10 = FUN_019954d0(param_1), 0 < iVar10)) {
        FUN_01998ad0(auStack_c8);
        sVar3 = FUN_019954d0(param_1);
        uVar7 = FUN_016aee50(&DAT_016aebf8,1,sVar3 + 1);
        *(undefined8 *)(param_1 + 0x460) = uVar7;
        FUN_01999bd0(auStack_c8);
        FUN_016af0f0(*(undefined8 *)(param_1 + 0x460),param_3,*(undefined8 *)(param_1 + 0xdf0));
        iVar10 = *(int *)(*(longlong *)(param_1 + 1000) + 0x10);
        iVar4 = 0;
        if (-1 < iVar10 + -1) {
          do {
            piVar8 = (int *)FUN_004aeac0(*(undefined8 *)(param_1 + 1000),iVar4);
            *piVar8 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x460) + 0x28) +
                              (longlong)*piVar8 * 8);
            piVar8[1] = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x460) + 0x28) +
                                (longlong)piVar8[1] * 8);
            iVar4 = iVar4 + 1;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
        FUN_01999f90(auStack_c8);
      }
    }
    FUN_01998ad0(auStack_c8);
    uVar6 = FUN_019954d0(param_1);
    FUN_019954c0(param_1,uVar6);
    if (param_4 == (longlong *)0x0) {
      FUN_01995290(param_1);
    }
    if (local_55 == '\0') {
      FUN_01999570(auStack_c8);
    }
    if (local_55 == '\0') {
      FUN_019991a0(auStack_c8);
    }
    if (local_55 == '\0') {
      FUN_01999350(auStack_c8);
    }
    if (local_55 == '\0') {
      FUN_019994b0(auStack_c8);
    }
    if (local_55 == '\0') {
      FUN_01999270(auStack_c8);
    }
  }
  if (((*PTR_DAT_02002b78 == '\0') && (*PTR_DAT_020052b8 == '\0')) && (param_2 != 0)) {
    uVar7 = FUN_019a45d0();
    FUN_01994230(uVar7);
  }
  FUN_00b94e30(local_50);
  if ((((param_2 & *(int *)(param_1 + 0x388) != 0) != 0) &&
      (iVar10 = *(int *)(param_1 + 0x38c), iVar10 != -1)) && (iVar10 < *(int *)(param_1 + 0x10))) {
    uVar7 = FUN_0198d420(param_1,iVar10);
    FUN_01993f30(param_1,uVar7,1,0);
  }
  *(bool *)(param_1 + 0x380) = local_55 == '\0';
  local_9c = *(undefined4 *)(param_1 + 0x388);
  FUN_00414560(&local_98,2);
  return local_9c;
}

