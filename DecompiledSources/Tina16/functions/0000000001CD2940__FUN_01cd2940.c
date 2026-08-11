/* Ghidra address: 01cd2940 */
/* Ghidra symbol: FUN_01cd2940 */


undefined4 FUN_01cd2940(longlong *param_1,longlong param_2)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  bool bVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined8 local_50 [5];
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  local_68 = 0;
  local_60[0] = 0;
  local_50[0] = 0;
  cVar3 = (**(code **)(*param_1 + 0x58))(param_1);
  if (cVar3 == '\0') {
    local_6c = 0;
  }
  else {
    plVar9 = (longlong *)FUN_005fc570(&PTR_FUN_005f2d40,1);
    uVar10 = *(undefined8 *)(param_2 + 0x70);
    (**(code **)(*plVar9 + 0x10))(plVar9,uVar10);
    uVar4 = FUN_01cce3f0(param_1);
    bVar1 = *(byte *)(param_1 + 0xe);
    if (bVar1 < 8) {
      bVar12 = ((int)CONCAT71((int7)((ulonglong)uVar10 >> 8),1) << (bVar1 & 0x1f) & 4U) != 0;
    }
    else {
      bVar12 = false;
    }
    if (bVar12) {
      uVar4 = 0xffffffe2;
    }
    dVar15 = (double)*(int *)((longlong)param_1 + 0x94) * 1.2;
    if (bVar1 < 2) {
      param_1[0xf] = (longlong)
                     (((double)param_1[0x18] - (double)param_1[0x17]) /
                     (double)*(int *)((longlong)param_1 + 0x74));
    }
    else if (bVar1 == 2) {
      dVar13 = (double)FUN_00c43d10(param_1[0x18]);
      dVar14 = (double)FUN_00c43d10(param_1[0x17]);
      lVar11 = FUN_00c43d20((dVar13 - dVar14) / (double)*(int *)((longlong)param_1 + 0x74));
      param_1[0xf] = lVar11;
    }
    else if (bVar1 == 3) {
      param_1[0xf] = 0x3fb999999999999a;
    }
    uVar10 = FUN_01cd6670(param_1);
    if ((byte)uVar10 < 8) {
      bVar12 = ((int)CONCAT71((int7)((ulonglong)uVar10 >> 8),1) << ((byte)uVar10 & 0x1f) & 0x50U) !=
               0;
    }
    else {
      bVar12 = false;
    }
    if (bVar12) {
      local_6c = 1;
    }
    else {
      lVar11 = FUN_01a5d940(&PTR_FUN_01a5c280,1);
      uVar5 = FUN_01cd66b0(param_1);
      uVar6 = FUN_00f060d0(param_1[0xf]);
      FUN_00f05f60(local_60,param_1[0x17],param_1[0x11],(char)param_1[0x10],CONCAT44(uVar8,uVar5),
                   uVar4,uVar6);
      plVar2 = *(longlong **)(*(longlong *)(lVar11 + 0x90) + 0xa0);
      (**(code **)(*plVar2 + 0x78))(plVar2,local_60[0]);
      plVar2 = *(longlong **)(*(longlong *)(lVar11 + 0x90) + 0x80);
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1[0x14]);
      (**(code **)(**(longlong **)(param_2 + 0x70) + 0x10))
                (*(longlong **)(param_2 + 0x70),param_1[0x14]);
      if ((char)param_1[0x21] == '\0') {
        iVar7 = FUN_01d1bfb0(*(undefined8 *)(lVar11 + 0x90),param_2);
        dVar15 = dVar15 + (double)iVar7 * 1.2;
        uVar8 = FUN_01cd66b0(param_1);
        FUN_00f06520(local_50,param_1[0x11],uVar8,0xffffff9c);
        plVar2 = *(longlong **)(*(longlong *)(lVar11 + 0x90) + 0xa0);
        (**(code **)(*plVar2 + 0x90))(plVar2);
        FUN_00416cd0(&local_68,3,param_1[0x1b],local_50[0],param_1[0x1c]);
        plVar2 = *(longlong **)(*(longlong *)(lVar11 + 0x90) + 0xa0);
        (**(code **)(*plVar2 + 0x78))(plVar2,local_68);
        plVar2 = *(longlong **)(*(longlong *)(lVar11 + 0x90) + 0x80);
        (**(code **)(*plVar2 + 0x10))(plVar2,param_1[0x13]);
        (**(code **)(**(longlong **)(param_2 + 0x70) + 0x10))
                  (*(longlong **)(param_2 + 0x70),param_1[0x13]);
        if (param_1[0x1b] != 0) {
          iVar7 = FUN_01d1bfb0(*(undefined8 *)(lVar11 + 0x90),param_2);
          dVar15 = dVar15 + (double)iVar7 * 1.2;
        }
      }
      FUN_00410f20(lVar11);
      local_6c = FUN_0040c770(dVar15);
      (**(code **)(**(longlong **)(param_2 + 0x70) + 0x10))(*(longlong **)(param_2 + 0x70),plVar9);
      FUN_00410f20(plVar9);
    }
  }
  FUN_00414560(&local_68,2);
  FUN_00414480(local_50);
  return local_6c;
}

