/* Ghidra address: 00708e20 */
/* Ghidra symbol: FUN_00708e20 */


void FUN_00708e20(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  bool bVar15;
  undefined8 in_stack_ffffffffffffff28;
  undefined4 uVar16;
  undefined8 in_stack_ffffffffffffff30;
  uint uVar18;
  undefined8 uVar17;
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64 [12];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  int local_38;
  undefined4 uStack_34;
  int local_30;
  undefined4 uStack_2c;
  
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
  uVar18 = (uint)((ulonglong)in_stack_ffffffffffffff30 >> 0x20);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  plVar10 = *(longlong **)(param_1 + 0x10);
  cVar1 = FUN_004113d0(plVar10,&PTR_FUN_006abd68);
  iVar3 = param_3;
  if (cVar1 != '\0') {
    iVar3 = (**(code **)(*plVar10 + 0x270))(plVar10,param_3);
  }
  lVar9 = FUN_00709be0(param_1);
  if (lVar9 != 0) {
    plVar10 = (longlong *)FUN_00709be0(param_1);
    iVar4 = (**(code **)(*plVar10 + 0x90))(plVar10);
    if (iVar3 < iVar4) {
      lVar9 = FUN_00709be0(param_1);
      local_a8 = *(int *)(lVar9 + 0x94);
      lVar9 = FUN_00709be0(param_1);
      local_a4 = *(int *)(lVar9 + 0x90);
      iVar4 = 3;
      goto LAB_00708f0d;
    }
  }
  local_a8 = 0;
  local_a4 = 0;
  iVar4 = 0;
LAB_00708f0d:
  FUN_00709ce0(param_1,&local_38,param_3);
  if (-1 < local_38) {
    uVar11 = FUN_00709d80(param_1);
    if ((byte)uVar11 < 8) {
      bVar15 = ((int)CONCAT71((int7)((ulonglong)uVar11 >> 8),1) << ((byte)uVar11 & 0x1f) & 3U) != 0;
    }
    else {
      bVar15 = false;
    }
    if (bVar15) {
      iVar5 = FUN_00709db0(param_1);
      if (param_3 == iVar5) {
        FUN_00423b10(&local_38,0,2);
      }
    }
    else {
      iVar5 = FUN_00709db0(param_1);
      if (param_3 == iVar5) {
        local_38 = local_38 + -2;
      }
      else {
        local_30 = local_30 + -2;
      }
    }
    (**(code **)(**(longlong **)(param_2 + 0x70) + 0x10))
              (*(longlong **)(param_2 + 0x70),*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xb8))
    ;
    local_48 = CONCAT44(uStack_34,local_38);
    local_40 = CONCAT44(uStack_2c,local_30);
    uVar14 = 0;
    cVar1 = FUN_00709d80(param_1);
    if (cVar1 == '\0') {
      iVar5 = FUN_00709db0(param_1);
      if (param_3 == iVar5) {
        uVar14 = 4;
      }
      else if ((param_3 == *(int *)(param_1 + 0x40)) && (*(char *)(param_1 + 0x38) != '\0')) {
        uVar14 = 3;
      }
      else {
        uVar14 = 2;
      }
    }
    else if (cVar1 == '\x01') {
      iVar5 = FUN_00709db0(param_1);
      if (param_3 == iVar5) {
        uVar14 = 0x13;
      }
      else if ((param_3 == *(int *)(param_1 + 0x40)) && (*(char *)(param_1 + 0x38) != '\0')) {
        uVar14 = 0x12;
      }
      else {
        uVar14 = 0x11;
      }
    }
    else if (cVar1 == '\x02') {
      iVar5 = FUN_00709db0(param_1);
      if (param_3 == iVar5) {
        uVar14 = 9;
      }
      else if ((param_3 == *(int *)(param_1 + 0x40)) && (*(char *)(param_1 + 0x38) != '\0')) {
        uVar14 = 8;
      }
      else {
        uVar14 = 7;
      }
    }
    else if (cVar1 == '\x03') {
      iVar5 = FUN_00709db0(param_1);
      if (param_3 == iVar5) {
        uVar14 = 0xe;
      }
      else if ((param_3 == *(int *)(param_1 + 0x40)) && (*(char *)(param_1 + 0x38) != '\0')) {
        uVar14 = 0xd;
      }
      else {
        uVar14 = 0xc;
      }
    }
    plVar10 = (longlong *)FUN_00777cd0();
    cVar1 = (**(code **)(*plVar10 + 0x90))(plVar10);
    if (cVar1 != '\0') {
      plVar10 = (longlong *)FUN_00777cd0();
      (**(code **)(*plVar10 + 0x1c0))(plVar10,local_64,uVar14);
      uVar11 = FUN_00777cd0();
      uVar12 = FUN_005ffa40(param_2);
      uVar16 = 0;
      lVar9 = (ulonglong)uVar18 << 0x20;
      FUN_00778dc0(uVar11,uVar12,local_64,&local_38,0,lVar9);
      uVar18 = (uint)((ulonglong)lVar9 >> 0x20);
    }
    lVar9 = FUN_00709be0(param_1);
    if ((lVar9 != 0) && (-1 < iVar3)) {
      plVar10 = (longlong *)FUN_00709be0(param_1);
      iVar5 = (**(code **)(*plVar10 + 0x90))(plVar10);
      if (iVar3 < iVar5) {
        local_58 = local_48;
        local_50 = local_40;
        bVar2 = FUN_00709d80(param_1);
        if (bVar2 < 2) {
          local_a8 = (int)local_58 + iVar4 + local_a8;
          local_50 = CONCAT44(local_50._4_4_,local_a8);
          local_48 = CONCAT44(local_48._4_4_,local_a8);
          local_58 = CONCAT44((local_58._4_4_ + (local_50._4_4_ - local_58._4_4_) / 2) -
                              local_a4 / 2,(int)local_58 + iVar4);
          cVar1 = FUN_00709d80(param_1,(longlong)local_a4 % 2 & 0xffffffff);
          if ((cVar1 == '\0') && (iVar4 = FUN_00709db0(param_1), param_3 == iVar4)) {
            FUN_00423b50(&local_58,0,0xffffffff);
          }
          else {
            cVar1 = FUN_00709d80(param_1);
            if ((cVar1 == '\x01') && (iVar4 = FUN_00709db0(param_1), param_3 == iVar4)) {
              FUN_00423b50(&local_58,0,1);
            }
          }
        }
        else if (bVar2 == 2) {
          local_50._4_4_ = local_50._4_4_ - iVar4;
          local_a4 = local_50._4_4_ - local_a4;
          local_40 = CONCAT44(local_a4,(int)local_40);
          local_58 = CONCAT44(local_a4,((int)local_58 + ((int)local_50 - (int)local_58) / 2) -
                                       local_a8 / 2);
        }
        else if (bVar2 == 3) {
          local_a4 = local_58._4_4_ + iVar4 + local_a4;
          local_50 = CONCAT44(local_a4,(int)local_50);
          local_48 = CONCAT44(local_a4,(int)local_48);
          local_58 = CONCAT44(local_58._4_4_ + iVar4,
                              ((int)local_58 + ((int)local_50 - (int)local_58) / 2) - local_a8 / 2);
        }
        plVar10 = (longlong *)FUN_00777cd0();
        cVar1 = (**(code **)(*plVar10 + 0x90))(plVar10);
        if (cVar1 != '\0') {
          uVar11 = FUN_00777cd0();
          uVar12 = FUN_005ffa40(param_2);
          uVar13 = FUN_00709be0(param_1);
          uVar13 = FUN_007d56e0(uVar13);
          uVar17 = CONCAT44(uVar18,iVar3);
          FUN_00778e10(uVar11,uVar12,local_64,&local_58,uVar13,uVar17);
          uVar16 = (undefined4)((ulonglong)uVar13 >> 0x20);
          uVar18 = (uint)((ulonglong)uVar17 >> 0x20);
        }
      }
    }
    plVar10 = (longlong *)FUN_00777cd0();
    cVar1 = (**(code **)(*plVar10 + 0x90))(plVar10);
    if (cVar1 != '\0') {
      cVar1 = FUN_00709d80(param_1);
      if ((cVar1 == '\0') && (iVar3 = FUN_00709db0(param_1), param_3 == iVar3)) {
        FUN_00423b50(&local_48,0,0xffffffff);
      }
      else {
        cVar1 = FUN_00709d80(param_1);
        if ((cVar1 == '\x01') && (iVar3 = FUN_00709db0(param_1), param_3 == iVar3)) {
          FUN_00423b50(&local_48,0,1);
        }
      }
      cVar1 = FUN_00709d80(param_1);
      if (cVar1 == '\x02') {
        iVar3 = (int)local_48;
        FUN_00709c40(param_1,&local_70,param_3);
        iVar5 = FUN_005fdfd0(param_2,local_70);
        iVar6 = (int)local_40 - iVar3;
        iVar4 = local_48._4_4_;
        FUN_00709c40(param_1,&local_78,param_3);
        iVar7 = FUN_005fdff0(param_2,local_78);
        iVar8 = local_40._4_4_ - iVar4;
        uVar11 = FUN_00777cd0(iVar7,(longlong)iVar7 % 2 & 0xffffffff);
        cVar1 = FUN_007790b0(uVar11,local_64,2,&local_68);
        if (cVar1 != '\0') {
          FUN_005fc860(*(undefined8 *)(param_2 + 0x70),local_68);
        }
        FUN_00709c40(param_1,&local_80,param_3);
        FUN_00708d40(param_1,param_2,900,(iVar3 + iVar6 / 2) - iVar5 / 2,
                     CONCAT44(uVar16,iVar4 + iVar8 / 2 + iVar7 / 2),local_80);
      }
      else {
        cVar1 = FUN_00709d80(param_1);
        if (cVar1 == '\x03') {
          iVar3 = (int)local_48;
          FUN_00709c40(param_1,&local_88,param_3);
          iVar5 = FUN_005fdfd0(param_2,local_88);
          iVar6 = (int)local_40 - iVar3;
          iVar4 = local_48._4_4_;
          FUN_00709c40(param_1,&local_90,param_3);
          iVar7 = FUN_005fdff0(param_2,local_90);
          iVar8 = local_40._4_4_ - iVar4;
          uVar11 = FUN_00777cd0(iVar7,(longlong)iVar7 % 2 & 0xffffffff);
          cVar1 = FUN_007790b0(uVar11,local_64,2,&local_68);
          if (cVar1 != '\0') {
            FUN_005fc860(*(undefined8 *)(param_2 + 0x70),local_68);
          }
          FUN_00709c40(param_1,&local_98,param_3);
          FUN_00708d40(param_1,param_2,0xfffffc7c,iVar3 + iVar6 / 2 + iVar5 / 2,
                       CONCAT44(uVar16,(iVar4 + iVar8 / 2) - iVar7 / 2),local_98);
        }
        else {
          FUN_00709c40(param_1,&local_a0,param_3);
          FUN_00785c70(param_1,param_2,local_64,local_a0,&local_48,CONCAT44(uVar18,0x125));
        }
      }
    }
  }
  FUN_00414560(&local_a0,7);
  return;
}

