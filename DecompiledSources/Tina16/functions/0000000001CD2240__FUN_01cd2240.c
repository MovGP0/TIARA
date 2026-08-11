/* Ghidra address: 01cd2240 */
/* Ghidra symbol: FUN_01cd2240 */


undefined4 FUN_01cd2240(longlong *param_1,longlong param_2)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar17;
  longlong lVar16;
  undefined4 local_84;
  int local_74;
  double local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined8 local_50 [5];
  
  local_68 = 0;
  local_60[0] = 0;
  local_50[0] = 0;
  cVar3 = (**(code **)(*param_1 + 0x58))(param_1);
  if (cVar3 == '\0') {
    local_84 = 0;
  }
  else {
    plVar9 = (longlong *)FUN_005fc570(&PTR_FUN_005f2d40,1);
    (**(code **)(*plVar9 + 0x10))(plVar9,*(undefined8 *)(param_2 + 0x70));
    uVar4 = FUN_01cce3f0(param_1);
    if (*(byte *)(param_1 + 0xe) < 8) {
      bVar11 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) <<
                (*(byte *)(param_1 + 0xe) & 0x1f) & 4U) != 0;
    }
    else {
      bVar11 = false;
    }
    if (bVar11) {
      uVar4 = 0xffffffe2;
    }
    uVar5 = FUN_01cd66b0(param_1);
    FUN_00f06520(local_50,param_1[0x11],uVar5,0xffffff9c);
    lVar10 = FUN_01a5d940(&PTR_FUN_01a5c280,1);
    lVar16 = param_1[0x1c];
    FUN_00416cd0(local_60,3,param_1[0x1b],local_50[0],lVar16);
    plVar2 = *(longlong **)(*(longlong *)(lVar10 + 0x90) + 0xa0);
    (**(code **)(*plVar2 + 0x78))(plVar2,local_60[0]);
    plVar2 = *(longlong **)(*(longlong *)(lVar10 + 0x90) + 0x80);
    (**(code **)(*plVar2 + 0x10))(plVar2,param_1[0x13]);
    (**(code **)(**(longlong **)(param_2 + 0x70) + 0x10))
              (*(longlong **)(param_2 + 0x70),param_1[0x13]);
    if (param_1[0x1b] == 0) {
      local_70 = 0.0;
    }
    else {
      cVar3 = FUN_01cd6670(param_1);
      if (cVar3 == '\x01') {
        iVar6 = FUN_01d1bfb0(*(undefined8 *)(lVar10 + 0x90),param_2);
        local_70 = (double)iVar6 * 1.2;
      }
      else if ((byte)(cVar3 - 2U) < 2) {
        iVar6 = FUN_01d1b660(*(undefined8 *)(lVar10 + 0x90),param_2);
        iVar7 = FUN_01d1bfb0(*(undefined8 *)(lVar10 + 0x90),param_2);
        local_70 = (double)iVar6 + (double)iVar7 * 0.2;
      }
    }
    FUN_00410f20(lVar10);
    lVar10 = FUN_01a5d940(&PTR_FUN_01a5c280,1);
    plVar2 = *(longlong **)(*(longlong *)(lVar10 + 0x90) + 0xa0);
    (**(code **)(*plVar2 + 0x90))(plVar2);
    plVar2 = *(longlong **)(*(longlong *)(lVar10 + 0x90) + 0x80);
    (**(code **)(*plVar2 + 0x10))(plVar2,param_1[0x14]);
    (**(code **)(**(longlong **)(param_2 + 0x70) + 0x10))
              (*(longlong **)(param_2 + 0x70),param_1[0x14]);
    dVar13 = (double)param_1[0x17];
    bVar1 = *(byte *)(param_1 + 0xe);
    if (bVar1 < 2) {
      param_1[0xf] = (longlong)
                     (((double)param_1[0x18] - (double)param_1[0x17]) /
                     (double)*(int *)((longlong)param_1 + 0x74));
    }
    else if (bVar1 == 2) {
      dVar14 = (double)FUN_00c43d10(param_1[0x18]);
      dVar15 = (double)FUN_00c43d10(param_1[0x17]);
      lVar12 = FUN_00c43d20((dVar14 - dVar15) / (double)*(int *)((longlong)param_1 + 0x74));
      param_1[0xf] = lVar12;
    }
    else if (bVar1 == 3) {
      param_1[0xf] = 0x3fb999999999999a;
    }
    cVar3 = FUN_01cd6670(param_1);
    if ((byte)(cVar3 - 1U) < 2) {
      local_74 = 0;
      if (-1 < *(int *)((longlong)param_1 + 0x74)) {
        iVar6 = *(int *)((longlong)param_1 + 0x74) + 1;
        do {
          uVar17 = (undefined4)((ulonglong)lVar16 >> 0x20);
          uVar5 = FUN_01cd66b0(param_1);
          uVar8 = FUN_00f060d0(param_1[0xf]);
          lVar16 = CONCAT44(uVar17,uVar5);
          FUN_00f05f60(&local_68,dVar13,param_1[0x11],(char)param_1[0x10],lVar16,uVar4,uVar8);
          plVar2 = *(longlong **)(*(longlong *)(lVar10 + 0x90) + 0xa0);
          (**(code **)(*plVar2 + 0x78))(plVar2,local_68);
          if (*(byte *)(param_1 + 0xe) < 2) {
            dVar13 = dVar13 + ((double)param_1[0x18] - (double)param_1[0x17]) /
                              (double)*(int *)((longlong)param_1 + 0x74);
          }
          else if (*(byte *)(param_1 + 0xe) == 2) {
            dVar13 = (double)FUN_00c43d10(param_1[0x17]);
            dVar14 = (double)FUN_00c43d10(param_1[0x18]);
            dVar15 = (double)FUN_00c43d10(param_1[0x17]);
            dVar13 = (double)FUN_00c43d20(dVar13 + ((double)local_74 * (dVar14 - dVar15)) /
                                                   (double)*(int *)((longlong)param_1 + 0x74));
          }
          if (local_74 == *(int *)((longlong)param_1 + 0x74) + -1) {
            dVar13 = (double)param_1[0x18];
          }
          local_74 = local_74 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      iVar6 = FUN_01d1b660(*(undefined8 *)(lVar10 + 0x90),param_2);
      local_70 = local_70 + (double)iVar6;
    }
    else if (cVar3 == '\x03') {
      iVar6 = (**(code **)(**(longlong **)(param_1[0xd] + 0x80) + 0x28))
                        (*(longlong **)(param_1[0xd] + 0x80));
      if (iVar6 < 7) {
        plVar2 = *(longlong **)(*(longlong *)(lVar10 + 0x90) + 0xa0);
        (**(code **)(*plVar2 + 0x78))(plVar2,&DAT_01cd2910);
        plVar2 = *(longlong **)(*(longlong *)(lVar10 + 0x90) + 0xa0);
        (**(code **)(*plVar2 + 0x78))(plVar2,&DAT_01cd2920);
      }
      else {
        plVar2 = *(longlong **)(*(longlong *)(lVar10 + 0x90) + 0xa0);
        (**(code **)(*plVar2 + 0x78))(plVar2,&LAB_01cd2930);
      }
      iVar6 = FUN_01d1b660(*(undefined8 *)(lVar10 + 0x90),param_2);
      local_70 = local_70 + (double)iVar6;
    }
    else if ((cVar3 == '\x05') || (cVar3 == '\a')) {
      local_70 = 1.0;
    }
    iVar6 = *(int *)((longlong)param_1 + 0x94);
    FUN_00410f20(lVar10);
    local_84 = FUN_0040c770(local_70 + (double)iVar6 * 1.2);
    (**(code **)(**(longlong **)(param_2 + 0x70) + 0x10))(*(longlong **)(param_2 + 0x70),plVar9);
    FUN_00410f20(plVar9);
  }
  FUN_00414560(&local_68,2);
  FUN_00414480(local_50);
  return local_84;
}

