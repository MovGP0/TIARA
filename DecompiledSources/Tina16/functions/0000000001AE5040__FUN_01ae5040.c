/* Ghidra address: 01ae5040 */
/* Ghidra symbol: FUN_01ae5040 */


void FUN_01ae5040(longlong param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  undefined8 local_68;
  undefined8 local_60 [4];
  undefined8 local_40 [2];
  
  local_60[0] = 0;
  local_40[0] = FUN_00410e60(&PTR_FUN_00472dd0,1);
  FUN_01acff30(param_1,local_40);
  plVar5 = (longlong *)FUN_007fc180(&PTR_FUN_01ac8bf8,1,*(undefined8 *)PTR_DAT_02004030);
  uVar6 = FUN_004aeac0(local_40[0],0);
  cVar2 = FUN_004113d0(uVar6,&LAB_00f12330);
  if (cVar2 != '\0') {
    lVar7 = FUN_004aeac0(local_40[0],0);
    FUN_0064de00(plVar5[0xe9],*(undefined8 *)(lVar7 + 0xe8));
    lVar7 = FUN_004aeac0(local_40[0],0);
    FUN_01ac94d0(plVar5,*(undefined8 *)(lVar7 + 0x60));
    lVar7 = FUN_004aeac0(local_40[0],0);
    bVar1 = *(byte *)(lVar7 + 0x9d);
    if (bVar1 < 3) {
      if (bVar1 == 2) {
        FUN_0074b490(plVar5[0xd9],2);
      }
      else if (bVar1 == 0) {
        FUN_0074b490(plVar5[0xd9],0);
      }
      else if (bVar1 == 1) {
        FUN_0074b490(plVar5[0xd9],1);
      }
    }
    else if (bVar1 == 3) {
      FUN_0074b490(plVar5[0xd9],3);
    }
    else if (bVar1 == 4) {
      FUN_0074b490(plVar5[0xd9],4);
    }
    (**(code **)(**(longlong **)(plVar5[0xdc] + 0x4f0) + 0x90))
              (*(longlong **)(plVar5[0xdc] + 0x4f0));
    (**(code **)(**(longlong **)(plVar5[0xdc] + 0x4f0) + 0x78))
              (*(longlong **)(plVar5[0xdc] + 0x4f0),&LAB_01ae5644);
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x28))(*(longlong **)(param_1 + 0xe0));
    iVar11 = 1;
    if (0 < iVar3) {
      do {
        iVar12 = iVar11 + -1;
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))
                          (*(longlong **)(param_1 + 0xe0),iVar12);
        cVar2 = FUN_004113d0(uVar6,&LAB_00f12330);
        if (cVar2 != '\0') {
          lVar7 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))
                            (*(longlong **)(param_1 + 0xe0),iVar12);
          lVar8 = FUN_004aeac0(local_40[0],0);
          if (lVar7 != lVar8) {
            uVar6 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))
                              (*(longlong **)(param_1 + 0xe0),iVar12);
            lVar7 = FUN_004113f0(uVar6,&LAB_00f12330);
            uVar6 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))
                              (*(longlong **)(param_1 + 0xe0),iVar12);
            (**(code **)(**(longlong **)(plVar5[0xdc] + 0x4f0) + 0x80))
                      (*(longlong **)(plVar5[0xdc] + 0x4f0),*(undefined8 *)(lVar7 + 0xe8),uVar6);
          }
        }
        iVar11 = iVar11 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    uVar6 = FUN_004aeac0(local_40[0],0);
    lVar7 = FUN_00f13040(uVar6);
    if (lVar7 == 0) {
      (**(code **)(*(longlong *)plVar5[0xdc] + 0x268))((longlong *)plVar5[0xdc],0);
    }
    else {
      plVar9 = (longlong *)plVar5[0xdc];
      uVar6 = FUN_004aeac0(local_40[0],0);
      lVar7 = FUN_00f13040(uVar6);
      uVar4 = (**(code **)(*(longlong *)plVar9[0x9e] + 0xb0))
                        ((longlong *)plVar9[0x9e],*(undefined8 *)(lVar7 + 0xe8));
      (**(code **)(*plVar9 + 0x268))(plVar9,uVar4);
    }
    lVar7 = FUN_004aeac0(local_40[0],0);
    if (*(char *)(lVar7 + 0x9c) == '\0') {
      (**(code **)(*(longlong *)plVar5[0xdd] + 0x268))((longlong *)plVar5[0xdd],0);
    }
    else {
      (**(code **)(*(longlong *)plVar5[0xdd] + 0x268))((longlong *)plVar5[0xdd],1);
    }
    lVar7 = FUN_004aeac0(local_40[0],0);
    FUN_00c5a4c0(plVar5[0xe7],*(undefined4 *)(lVar7 + 0x98));
    iVar3 = (**(code **)(*plVar5 + 0x2d0))(plVar5);
    if (iVar3 == 2) {
      FUN_00410f20(plVar5);
      FUN_00410f20(local_40[0]);
      goto LAB_01ae5602;
    }
    plVar9 = (longlong *)FUN_004aeac0(local_40[0],0);
    FUN_0064dd90(plVar5[0xe9],local_60);
    FUN_00414ad0(plVar9 + 0x1d,local_60[0]);
    (**(code **)(*(longlong *)plVar9[0xc] + 0x10))((longlong *)plVar9[0xc],plVar5[0xea]);
    iVar3 = *(int *)(plVar5[0xd9] + 0x4a8);
    if (iVar3 < 3) {
      if (iVar3 == 2) {
        lVar7 = FUN_004aeac0(local_40[0],0);
        *(undefined1 *)(lVar7 + 0x9d) = 2;
      }
      else if (iVar3 == 0) {
        lVar7 = FUN_004aeac0(local_40[0],0);
        *(undefined1 *)(lVar7 + 0x9d) = 0;
      }
      else if (iVar3 == 1) {
        lVar7 = FUN_004aeac0(local_40[0],0);
        *(undefined1 *)(lVar7 + 0x9d) = 1;
      }
    }
    else if (iVar3 == 3) {
      lVar7 = FUN_004aeac0(local_40[0],0);
      *(undefined1 *)(lVar7 + 0x9d) = 3;
    }
    else if (iVar3 == 4) {
      lVar7 = FUN_004aeac0(local_40[0],0);
      *(undefined1 *)(lVar7 + 0x9d) = 4;
    }
    iVar3 = (**(code **)(*(longlong *)plVar5[0xdc] + 0x260))((longlong *)plVar5[0xdc]);
    if (iVar3 != -1) {
      plVar10 = (longlong *)plVar5[0xdc];
      uVar4 = (**(code **)(*plVar10 + 0x260))(plVar10);
      uVar6 = (**(code **)(*(longlong *)plVar10[0x9e] + 0x30))((longlong *)plVar10[0x9e],uVar4);
      FUN_00f13090(plVar9,uVar6);
    }
    iVar3 = (**(code **)(*(longlong *)plVar5[0xdd] + 0x260))((longlong *)plVar5[0xdd]);
    if (iVar3 == 0) {
      lVar7 = FUN_004aeac0(local_40[0],0);
      *(undefined1 *)(lVar7 + 0x9c) = 0;
    }
    else {
      lVar7 = FUN_004aeac0(local_40[0],0);
      *(undefined1 *)(lVar7 + 0x9c) = 1;
    }
    uVar4 = FUN_00c5a450(plVar5[0xe7]);
    lVar7 = FUN_004aeac0(local_40[0],0);
    *(undefined4 *)(lVar7 + 0x98) = uVar4;
    lVar7 = FUN_00f13040(plVar9);
    if (lVar7 != 0) {
      uVar6 = FUN_004aeac0(local_40[0],0);
      plVar10 = (longlong *)
                FUN_00f15ab0(uVar6,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80));
      (**(code **)(*plVar10 + 0x128))
                (plVar10,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80));
    }
    (**(code **)(*plVar9 + 0xc0))
              (plVar9,*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x78));
    local_68 = (**(code **)(*plVar9 + 0xd0))(plVar9);
    (**(code **)(*plVar9 + 0xd8))
              (plVar9,*(undefined8 *)(param_1 + 0x78),&local_68,*(undefined8 *)(param_1 + 0x80));
  }
  FUN_00410f20(plVar5);
  FUN_00410f20(local_40[0]);
LAB_01ae5602:
  FUN_00414480(local_60);
  return;
}

