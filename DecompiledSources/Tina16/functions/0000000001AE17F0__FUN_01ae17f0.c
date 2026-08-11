/* Ghidra address: 01ae17f0 */
/* Ghidra symbol: FUN_01ae17f0 */


void FUN_01ae17f0(longlong param_1,byte param_2,char param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  char unaff_R14B;
  double dVar11;
  double dVar12;
  longlong local_58;
  undefined8 local_50 [4];
  
  local_50[0] = 0;
  cVar2 = FUN_01acff30(param_1,local_50);
  if (((cVar2 == '\x02') &&
      ((((param_2 & 1) == 0 || (*(longlong *)(param_1 + 0xf0) == 0)) ||
       (lVar6 = FUN_004aeac0(local_50[0],0),
       *(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x58) != lVar6)))) &&
     (((param_2 != 0 || (*(longlong *)(param_1 + 0xf8) == 0)) ||
      (lVar6 = FUN_004aeac0(local_50[0],0),
      *(longlong *)(*(longlong *)(param_1 + 0xf8) + 0x58) != lVar6)))) {
    uVar7 = FUN_004aeac0(local_50[0],0);
    cVar2 = FUN_01ad1090(param_1,uVar7,&local_58);
    if (cVar2 == '\0') {
      FUN_00410f20(local_50[0]);
      return;
    }
    if (param_2 == 0) {
      if (*(longlong *)(param_1 + 0xf8) != 0) {
        FUN_01ac1cf0(*(longlong *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x80),1);
        plVar10 = *(longlong **)(*(longlong *)(param_1 + 0xf8) + 0x58);
        (**(code **)(*plVar10 + 0x108))(plVar10,*(undefined8 *)(param_1 + 0xf8));
        FUN_00410f20(*(undefined8 *)(param_1 + 0xf8));
      }
      lVar6 = FUN_01abf9b0(&PTR_FUN_01abefa0,1);
      *(longlong *)(param_1 + 0xf8) = lVar6;
      *(longlong *)(lVar6 + 0x98) = param_1;
      FUN_005fd4e0(*(undefined8 *)(lVar6 + 0x88),0xff0000);
      plVar10 = *(longlong **)(param_1 + 0xf8);
      *(undefined1 *)(plVar10 + 0x12) = 0;
    }
    else {
      if (*(longlong *)(param_1 + 0xf0) != 0) {
        FUN_01ac1cf0(*(longlong *)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0x80),1);
        plVar10 = *(longlong **)(*(longlong *)(param_1 + 0xf0) + 0x58);
        (**(code **)(*plVar10 + 0x108))(plVar10,*(undefined8 *)(param_1 + 0xf0));
        FUN_00410f20(*(undefined8 *)(param_1 + 0xf0));
      }
      lVar6 = FUN_01abf9b0(&PTR_FUN_01abefa0,1);
      *(longlong *)(param_1 + 0xf0) = lVar6;
      *(longlong *)(lVar6 + 0x98) = param_1;
      FUN_005fd4e0(*(undefined8 *)(lVar6 + 0x88),0xff);
      plVar10 = *(longlong **)(param_1 + 0xf0);
      *(undefined1 *)(plVar10 + 0x12) = 1;
    }
    *(char *)((longlong)plVar10 + 0x91) = param_3;
    plVar8 = (longlong *)FUN_004aeac0(local_50[0],0);
    plVar10[0xb] = (longlong)plVar8;
    (**(code **)(*plVar8 + 0x100))(plVar8,plVar10);
    uVar7 = FUN_01abda80(plVar10[0xb]);
    cVar2 = FUN_004113d0(uVar7,&PTR_FUN_01cb9c30);
    if (cVar2 == '\0') {
      if (param_2 == 0) {
        lVar6 = FUN_01abd500(plVar10[0xb]);
        plVar10[0xf] = *(longlong *)(lVar6 + 0xc0);
      }
      else {
        lVar6 = FUN_01abd500(plVar10[0xb]);
        plVar10[0xf] = *(longlong *)(lVar6 + 0xb8);
      }
      lVar6 = FUN_01abdb20(plVar10[0xb]);
      if ((*(longlong *)PTR_DAT_02005620 != lVar6) ||
         (lVar6 = FUN_01abda80(plVar10[0xb]), *(longlong *)PTR_DAT_020041f8 != lVar6)) {
        plVar8 = (longlong *)FUN_01abda80(plVar10[0xb]);
        uVar7 = FUN_01abdb20(plVar10[0xb]);
        (**(code **)(*plVar8 + 0x10))(plVar8,uVar7,1);
        uVar7 = FUN_01abdb20(plVar10[0xb]);
        *(undefined8 *)PTR_DAT_02005620 = uVar7;
        uVar7 = FUN_01abda80(plVar10[0xb]);
        *(undefined8 *)PTR_DAT_020041f8 = uVar7;
      }
      plVar8 = (longlong *)FUN_01abda80(plVar10[0xb]);
      lVar6 = (**(code **)(*plVar8 + 0x48))(plVar8,plVar10[0xf]);
      plVar10[0x10] = lVar6;
    }
    else {
      if (param_2 == 0) {
        plVar8 = (longlong *)FUN_01abda80(plVar10[0xb]);
        uVar7 = FUN_01abdb20(plVar10[0xb]);
        lVar6 = (**(code **)(*plVar8 + 0xa0))(plVar8,uVar7);
        plVar10[0xe] = lVar6;
      }
      else {
        uVar7 = FUN_01abda80(plVar10[0xb]);
        uVar9 = FUN_01abdb20(plVar10[0xb]);
        dVar11 = (double)FUN_01cc92d0(uVar7,uVar9);
        plVar8 = (longlong *)FUN_01abda80(plVar10[0xb]);
        uVar7 = FUN_01abdb20(plVar10[0xb]);
        dVar12 = (double)(**(code **)(*plVar8 + 0xa0))(plVar8,uVar7);
        plVar10[0xe] = (longlong)((dVar11 + dVar12) / 2.0);
      }
      lVar6 = FUN_01abdb20(plVar10[0xb]);
      if ((*(longlong *)PTR_DAT_02005620 != lVar6) ||
         (lVar6 = FUN_01abda80(plVar10[0xb]), *(longlong *)PTR_DAT_020041f8 != lVar6)) {
        plVar8 = (longlong *)FUN_01abda80(plVar10[0xb]);
        uVar7 = FUN_01abdb20(plVar10[0xb]);
        (**(code **)(*plVar8 + 0x10))(plVar8,uVar7,1);
        uVar7 = FUN_01abdb20(plVar10[0xb]);
        *(undefined8 *)PTR_DAT_02005620 = uVar7;
        uVar7 = FUN_01abda80(plVar10[0xb]);
        *(undefined8 *)PTR_DAT_020041f8 = uVar7;
      }
      plVar8 = (longlong *)FUN_01abda80(plVar10[0xb]);
      (**(code **)(*plVar8 + 0x90))(plVar8,plVar10[0xe],plVar10 + 0xf,plVar10 + 0x10);
    }
    (**(code **)(*plVar10 + 0xc0))
              (plVar10,*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x78));
    iVar5 = *(int *)(local_58 + 0x20);
    iVar1 = *(int *)(local_58 + 0x18);
    uVar3 = FUN_0040c770((double)(*(int *)(local_58 + 0x1c) - *(int *)(local_58 + 0x14)) * 0.15);
    uVar4 = FUN_0040c770((double)(iVar5 - iVar1) * 0.15);
    iVar5 = FUN_00b905f0(uVar3,uVar4);
    FUN_0040c770((double)iVar5 * 0.3);
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      lVar6 = (**(code **)(**(longlong **)(local_58 + 0x70) + 0x30))
                        (*(longlong **)(local_58 + 0x70),0);
      uVar3 = FUN_0040c770((double)*(int *)(lVar6 + 0x94) * 0.9);
      *(undefined4 *)(*(longlong *)(param_1 + 0xf0) + 0x48) = uVar3;
    }
    if (*(longlong *)(param_1 + 0xf8) != 0) {
      lVar6 = (**(code **)(**(longlong **)(local_58 + 0x70) + 0x30))
                        (*(longlong **)(local_58 + 0x70),0);
      uVar3 = FUN_0040c770((double)*(int *)(lVar6 + 0x94) * 0.9);
      *(undefined4 *)(*(longlong *)(param_1 + 0xf8) + 0x48) = uVar3;
    }
    if (param_2 == 0) {
      (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x70))
                (*(longlong **)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x80));
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x70))
                (*(longlong **)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0x80));
    }
    FUN_00410f20(local_50[0]);
  }
  else {
    if ((param_2 != 0) && (*(longlong *)(param_1 + 0xf0) != 0)) {
      unaff_R14B = FUN_01ad1090(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x58),
                                &local_58);
      FUN_01ac1cf0(*(undefined8 *)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0x80),1);
      plVar10 = *(longlong **)(*(longlong *)(param_1 + 0xf0) + 0x58);
      (**(code **)(*plVar10 + 0x108))(plVar10,*(undefined8 *)(param_1 + 0xf0));
      FUN_00410f20(*(undefined8 *)(param_1 + 0xf0));
      *(undefined8 *)(param_1 + 0xf0) = 0;
    }
    if ((param_2 == 0) && (*(longlong *)(param_1 + 0xf8) != 0)) {
      unaff_R14B = FUN_01ad1090(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0xf8) + 0x58),
                                &local_58);
      FUN_01ac1cf0(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x80),1);
      plVar10 = *(longlong **)(*(longlong *)(param_1 + 0xf8) + 0x58);
      (**(code **)(*plVar10 + 0x108))(plVar10,*(undefined8 *)(param_1 + 0xf8));
      FUN_00410f20(*(undefined8 *)(param_1 + 0xf8));
      *(undefined8 *)(param_1 + 0xf8) = 0;
    }
    if (unaff_R14B != '\0') {
      FUN_01a8dee0(*(undefined8 *)(param_1 + 0xe8),local_58);
    }
    FUN_01ae5650(param_1);
    FUN_00410f20(local_50[0]);
  }
  if (param_3 != '\0') {
    FUN_01ae4310(param_1);
  }
  return;
}

