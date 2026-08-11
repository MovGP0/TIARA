/* Ghidra address: 013f2270 */
/* Ghidra symbol: FUN_013f2270 */


void FUN_013f2270(longlong param_1)

{
  undefined1 uVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  ulonglong in_stack_fffffffffffffe00;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_160 [256];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30 [2];
  
  local_1d8 = 0;
  local_1e0 = 0;
  local_1c0 = 0;
  local_1c8 = 0;
  local_1d0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  uVar4 = FUN_0064d0b0(param_1);
  *(undefined4 *)(param_1 + 0x768) = uVar4;
  *(undefined4 *)(param_1 + 0x76c) = *(undefined4 *)(*(longlong *)(param_1 + 0x728) + 0x90);
  *(undefined4 *)(param_1 + 0x770) = *(undefined4 *)(*(longlong *)(param_1 + 0x728) + 0x98);
  *(undefined4 *)(param_1 + 0x774) = *(undefined4 *)(*(longlong *)(param_1 + 0x708) + 0x90);
  *(undefined4 *)(param_1 + 0x778) = *(undefined4 *)(*(longlong *)(param_1 + 0x708) + 0x98);
  uVar7 = FUN_017105e0(0);
  *(undefined8 *)(param_1 + 0x940) = uVar7;
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x758) + 0xf8))(*(longlong **)(param_1 + 0x758));
  uVar3 = FUN_01d423d0(uVar4);
  FUN_00c857b0(*(undefined8 *)PTR_DAT_02002c40,&local_50,uVar3,0);
  FUN_00414ad0(param_1 + 2000,local_50);
  iVar5 = FUN_004170c0(&DAT_013f31a0,*(undefined8 *)(param_1 + 2000),1);
  if (iVar5 < 1) {
    plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x6c8) + 0x4f0);
    (**(code **)(*plVar10 + 0x98))(plVar10,1);
  }
  else {
    FUN_01716b50(*(undefined8 *)(param_1 + 0x940),*(undefined8 *)(param_1 + 0x7b0),
                 *(undefined8 *)(param_1 + 2000),1);
    iVar5 = (**(code **)(**(longlong **)(param_1 + 0x7b0) + 0x28))(*(longlong **)(param_1 + 0x7b0));
    if (iVar5 < 1) {
      plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x6c8) + 0x4f0);
      (**(code **)(*plVar10 + 0x98))(plVar10,1);
    }
    else {
      FUN_004b67b0(*(undefined8 *)(param_1 + 0x7b0),1);
      plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x6c8) + 0x4f0);
      (**(code **)(*plVar10 + 0x88))(plVar10,*(undefined8 *)(param_1 + 0x7b0));
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x268))(*(longlong **)(param_1 + 0x6c8),0);
  (**(code **)(**(longlong **)(param_1 + 0x758) + 0x2d0))
            (*(longlong **)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x760),local_30);
  *(longlong *)(param_1 + 0x788) = local_30[0];
  *(longlong *)(param_1 + 0x790) = local_30[0] + 0x140;
  *(undefined1 *)(param_1 + 0x8e2) = *(undefined1 *)(*(longlong *)(param_1 + 0x788) + 0x2f);
  lVar9 = *(longlong *)(param_1 + 0x728);
  *(bool *)(lVar9 + 0x66a) = *(char *)(*(longlong *)(param_1 + 0x788) + 0x2e) == '\x01';
  *(bool *)(lVar9 + 0x66b) = *(char *)(*(longlong *)(param_1 + 0x790) + 8) == '\x01';
  FUN_00b0b020(lVar9,0);
  if (*(char *)(param_1 + 0x8e2) == '\0') {
    if (*(longlong *)(*(longlong *)(param_1 + 0x788) + 0x26) == 0) {
      FUN_0172c260(*(longlong *)(param_1 + 0x788),*(undefined8 *)(param_1 + 0x758),
                   *(undefined1 *)(param_1 + 0x760));
      lVar9 = *(longlong *)(param_1 + 0x788);
      lVar8 = FUN_004095c0(0x25);
      *(longlong *)(lVar9 + 0x26) = lVar8;
      FUN_0172c410(*(undefined8 *)(param_1 + 0x758),*(undefined1 *)(param_1 + 0x760),lVar8 + 1,
                   lVar8 + 9,lVar8 + 0x19,lVar8 + 0x21,lVar8 + 0x23,lVar8);
    }
    lVar9 = FUN_0172bd70(&PTR_FUN_01729478,1,*(undefined8 *)(param_1 + 0x758),
                         *(undefined1 *)(param_1 + 0x760),*(undefined8 *)PTR_DAT_02001f18,1);
    *(longlong *)(param_1 + 0x7c8) = lVar9;
    *(undefined1 *)(param_1 + 0x77c) = *(undefined1 *)(lVar9 + 0x169);
    *(undefined2 *)(param_1 + 0x77e) = *(undefined2 *)(*(longlong *)(param_1 + 0x7c8) + 0x16a);
    FUN_0172c500(*(undefined8 *)(param_1 + 0x7c8),*(undefined8 *)(param_1 + 0x7a0));
    iVar5 = (**(code **)(**(longlong **)(param_1 + 0x7a0) + 0x28))();
    iVar11 = 0;
    if (-1 < iVar5 + -1) {
      do {
        (**(code **)(**(longlong **)(param_1 + 0x7a0) + 0x18))
                  (*(longlong **)(param_1 + 0x7a0),&local_58,iVar11);
        iVar6 = FUN_00416db0(local_58,L"Hibrid-P");
        if (iVar6 == 0) {
          plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x6d0) + 0x4f0);
          (**(code **)(*plVar10 + 0x78))(plVar10,L"Hybrid-P");
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 0x7a0) + 0x18))
                    (*(longlong **)(param_1 + 0x7a0),&local_60,iVar11);
          plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x6d0) + 0x4f0);
          (**(code **)(*plVar10 + 0x78))(plVar10,local_60);
        }
        iVar11 = iVar11 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x268))
              (*(longlong **)(param_1 + 0x6d0),*(undefined1 *)(param_1 + 0x77c));
    FUN_0172c930(*(undefined8 *)(param_1 + 0x7c8),*(undefined1 *)(param_1 + 0x77c),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x6d8) + 0x4a0),param_1 + 0x780);
    *(short *)(param_1 + 0x77e) = *(short *)(param_1 + 0x77e) - *(short *)(param_1 + 0x780);
    FUN_0172ca20(*(undefined8 *)(param_1 + 0x7c8),*(undefined1 *)(param_1 + 0x77c),
                 *(undefined2 *)(*(longlong *)(*(longlong *)(param_1 + 0x788) + 0x26) + 0x21),
                 *(undefined8 *)(param_1 + 0x798));
    FUN_0172ce80(*(undefined8 *)(param_1 + 0x7c8),local_160,*(undefined2 *)(param_1 + 0x77e));
    FUN_00414ff0(param_1 + 0x7e0,local_160);
    bVar2 = FUN_0172c9d0(*(undefined8 *)(param_1 + 0x7c8),*(undefined1 *)(param_1 + 0x77c));
    *(byte *)(param_1 + 0x8e1) = bVar2;
    FUN_0074b490(*(undefined8 *)(param_1 + 0x718),bVar2 & **(longlong **)(param_1 + 0x790) != 0);
    plVar10 = (longlong *)FUN_004d3de0(*(undefined8 *)(param_1 + 0x718),1);
    (**(code **)(*plVar10 + 0x128))(plVar10,*(undefined1 *)(param_1 + 0x8e1));
  }
  else {
    uVar7 = FUN_0172bd70(&PTR_FUN_01729478,1,*(undefined8 *)(param_1 + 0x758),
                         *(undefined1 *)(param_1 + 0x760),*(undefined8 *)PTR_DAT_02001f18,
                         in_stack_fffffffffffffe00 & 0xffffffffffffff00);
    *(undefined8 *)(param_1 + 0x7c8) = uVar7;
    FUN_0172c500(uVar7,*(undefined8 *)(param_1 + 0x7a0));
    iVar5 = (**(code **)(**(longlong **)(param_1 + 0x7a0) + 0x28))();
    iVar11 = 0;
    if (-1 < iVar5 + -1) {
      do {
        (**(code **)(**(longlong **)(param_1 + 0x7a0) + 0x18))
                  (*(longlong **)(param_1 + 0x7a0),&local_168,iVar11);
        iVar6 = FUN_00416db0(local_168,L"Hibrid-P");
        if (iVar6 == 0) {
          plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x6d0) + 0x4f0);
          (**(code **)(*plVar10 + 0x78))(plVar10,L"Hybrid-P");
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 0x7a0) + 0x18))
                    (*(longlong **)(param_1 + 0x7a0),&local_170,iVar11);
          plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x6d0) + 0x4f0);
          (**(code **)(*plVar10 + 0x78))(plVar10,local_170);
        }
        iVar11 = iVar11 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    lVar9 = *(longlong *)(param_1 + 0x788);
    FUN_00414ff0(param_1 + 0x7e0,lVar9 + 0x38);
    iVar5 = FUN_00414f50(param_1 + 0x7e0,&DAT_013f31e2,(ulonglong)*(byte *)(param_1 + 0x7e0) + 1);
    if (iVar5 == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x268))(*(longlong **)(param_1 + 0x6c8),1);
      FUN_004169a0(&local_48,param_1 + 0x7e0);
    }
    else {
      FUN_004169a0(&local_178,param_1 + 0x7e0);
      plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x6c8) + 0x4f0);
      iVar5 = (**(code **)(*plVar10 + 0xb0))(plVar10,local_178);
      if (iVar5 == -1) {
        *(undefined4 *)(param_1 + 0x7e0) = 0x6c415b05;
        *(undefined2 *)(param_1 + 0x7e4) = 0x5d6c;
        (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x268))(*(longlong **)(param_1 + 0x6c8),1);
        FUN_004169a0(&local_48,param_1 + 0x7e0);
      }
      else {
        plVar10 = *(longlong **)(param_1 + 0x6c8);
        FUN_004169a0(&local_180,param_1 + 0x7e0);
        uVar4 = (**(code **)(*(longlong *)plVar10[0x9e] + 0xb0))
                          ((longlong *)plVar10[0x9e],local_180);
        (**(code **)(*plVar10 + 0x268))(plVar10,uVar4);
        plVar10 = *(longlong **)(param_1 + 0x6c8);
        uVar4 = (**(code **)(*plVar10 + 0x260))(plVar10);
        (**(code **)(*(longlong *)plVar10[0x9e] + 0x18))((longlong *)plVar10[0x9e],&local_48,uVar4);
      }
    }
    iVar5 = (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x260))(*(longlong **)(param_1 + 0x6c8))
    ;
    if (iVar5 != -1) {
      FUN_01717260(*(undefined8 *)(param_1 + 0x940),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x6d8) + 0x4a0),
                   *(undefined8 *)(param_1 + 2000),local_48,1,0);
    }
    FUN_004169a0(&local_188,lVar9);
    plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4a0);
    iVar5 = (**(code **)(*plVar10 + 0xb0))(plVar10,local_188);
    if (iVar5 == -1) {
      FUN_00415dd0(param_1 + 0x908,*(undefined8 *)(param_1 + 2000),0);
      FUN_00414480(param_1 + 0x8e8);
      FUN_00414ad0(param_1 + 0x928,local_48);
      FUN_004169a0(&local_190,lVar9);
      plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4a0);
      (**(code **)(*plVar10 + 0x80))(plVar10,local_190,param_1 + 0x8e8);
    }
    FUN_004169a0(&local_198,lVar9);
    plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4a0);
    uVar3 = (**(code **)(*plVar10 + 0xb0))(plVar10,local_198);
    *(undefined2 *)(param_1 + 0x77e) = uVar3;
    uVar1 = **(undefined1 **)(*(longlong *)(param_1 + 0x788) + 0x26);
    *(undefined1 *)(param_1 + 0x77c) = uVar1;
    FUN_0172ca20(*(undefined8 *)(param_1 + 0x7c8),uVar1,
                 *(undefined2 *)(*(longlong *)(*(longlong *)(param_1 + 0x788) + 0x26) + 0x21),
                 *(undefined8 *)(param_1 + 0x798));
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x788) + 0x30);
    if (lVar9 == 0) {
      FUN_00415dd0(param_1 + 0x908,*(undefined8 *)(param_1 + 2000),0);
      FUN_00414480(param_1 + 0x8e8);
      FUN_00414ad0(param_1 + 0x928,local_48);
      plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4a0);
      (**(code **)(*plVar10 + 0x18))(plVar10,&local_1a0,*(undefined2 *)(param_1 + 0x77e));
      FUN_00416910(local_160,local_1a0,0xff);
      FUN_00415020(*(undefined8 *)(param_1 + 0x788),local_160,0x14);
      FUN_004169a0(&local_1a8,*(undefined8 *)(param_1 + 0x788));
      lVar9 = FUN_016fedd0(*(undefined8 *)(param_1 + 0x940),local_1a8,param_1 + 0x8e8,&local_38,
                           &local_40,param_1 + 2000,&local_48);
      if (lVar9 == 0) {
        (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x268))
                  (*(longlong **)(param_1 + 0x6d8),*(undefined2 *)(param_1 + 0x77e));
        FUN_013f4330(param_1);
      }
      else {
        plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x738) + 0x4d8);
        (**(code **)(*plVar10 + 0x10))(plVar10,lVar9);
        FUN_00410f20(lVar9);
      }
    }
    else {
      plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x738) + 0x4d8);
      (**(code **)(*plVar10 + 0x10))(plVar10,lVar9);
    }
  }
  FUN_013f3750(param_1);
  FUN_013f3480(param_1);
  if (*(char *)(param_1 + 0x8e2) != '\0') {
    FUN_004169a0(&local_1b0,*(undefined8 *)(param_1 + 0x788));
    plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4a0);
    iVar5 = (**(code **)(*plVar10 + 0xb0))(plVar10,local_1b0);
    if (iVar5 < 0) {
      *(undefined2 *)(param_1 + 0x77e) = 0;
    }
    else {
      FUN_004169a0(&local_1b8,*(undefined8 *)(param_1 + 0x788));
      plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4a0);
      uVar3 = (**(code **)(*plVar10 + 0xb0))(plVar10,local_1b8);
      *(undefined2 *)(param_1 + 0x77e) = uVar3;
    }
  }
  plVar10 = *(longlong **)(param_1 + 0x6d8);
  (**(code **)(*plVar10 + 0x268))(plVar10,*(undefined2 *)(param_1 + 0x77e));
  iVar5 = (**(code **)(*(longlong *)plVar10[0x94] + 0x28))((longlong *)plVar10[0x94]);
  iVar11 = FUN_0068bbb0(plVar10);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6f0),
               CONCAT71((int7)((ulonglong)
                               ((longlong)*(int *)((longlong)plVar10 + 0x9c) % (longlong)iVar11) >>
                              8),*(int *)((longlong)plVar10 + 0x9c) / iVar11 < iVar5) & 0xffffffff);
  iVar5 = (**(code **)(*plVar10 + 0x260))(plVar10);
  FUN_0043f750(&local_1c8,iVar5 + 1);
  uVar4 = (**(code **)(*(longlong *)plVar10[0x94] + 0x28))((longlong *)plVar10[0x94]);
  FUN_0043f750(&local_1d0,uVar4);
  FUN_00416cd0(&local_1c0,3,local_1c8,&DAT_013f31f4,local_1d0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_1c0);
  uVar7 = FUN_00b89270();
  FUN_00b8e520(uVar7,&local_1d8,0x3e5);
  uVar7 = FUN_00b89270();
  FUN_00b8e520(uVar7,&local_1e0,0x3e6);
  FUN_00416cd0(param_1 + 0x7d8,4,local_1d8,L": %d ",local_1e0,L": %d");
  FUN_013f5660(param_1);
  FUN_0064cf60(param_1,0x408);
  FUN_00414560(&local_1e0,0x10);
  FUN_00414560(&local_60,6);
  return;
}

