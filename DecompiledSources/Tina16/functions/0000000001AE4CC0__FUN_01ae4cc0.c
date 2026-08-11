/* Ghidra address: 01ae4cc0 */
/* Ghidra symbol: FUN_01ae4cc0 */


void FUN_01ae4cc0(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_70 [4];
  undefined4 local_6c;
  undefined4 local_60 [4];
  undefined8 local_50 [4];
  undefined8 local_30;
  
  local_30 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  FUN_01acff30(param_1,&local_30);
  plVar5 = (longlong *)FUN_007fc180(&PTR_FUN_01ac8328,1,*(undefined8 *)PTR_DAT_02004030);
  uVar6 = FUN_004aeac0(local_30,0);
  cVar1 = FUN_004113d0(uVar6,&PTR_FUN_010ecd58);
  if (cVar1 == '\0') {
    uVar6 = FUN_004aeac0(local_30,0);
    cVar1 = FUN_004113d0(uVar6,&LAB_00f10748);
    if (cVar1 != '\0') {
      lVar7 = FUN_004aeac0(local_30,0);
      FUN_01ac8a80(plVar5,*(undefined8 *)(lVar7 + 0x60));
      iVar3 = (**(code **)(*plVar5 + 0x2d0))(plVar5);
      if (iVar3 == 2) {
        FUN_00410f20(plVar5);
        FUN_00410f20(local_30);
        return;
      }
      plVar8 = (longlong *)FUN_004aeac0(local_30,0);
      (**(code **)(*(longlong *)plVar8[0xc] + 0x10))((longlong *)plVar8[0xc],plVar5[0xe0]);
      FUN_00f11460(plVar8,local_60);
      FUN_00f11460(plVar8,local_70);
      local_50[0] = FUN_00498310(local_60[0],local_6c);
      (**(code **)(*plVar8 + 0xd8))
                (plVar8,*(undefined8 *)(param_1 + 0x78),local_50,*(undefined8 *)(param_1 + 0x80));
      FUN_01ae7ab0(param_1,L"Line width",*(undefined4 *)(*(longlong *)(plVar5[0xe0] + 0x18) + 0x2c))
      ;
      uVar4 = FUN_005fd4d0(plVar5[0xe0]);
      FUN_01ae7ab0(param_1,L"Line color",uVar4);
      uVar2 = FUN_005fd660(plVar5[0xe0]);
      FUN_01ae7ab0(param_1,L"Line style",uVar2);
    }
  }
  else {
    lVar7 = FUN_004aeac0(local_30,0);
    FUN_01ac8a80(plVar5,*(undefined8 *)(lVar7 + 0x88));
    iVar3 = (**(code **)(*plVar5 + 0x2d0))(plVar5);
    if (iVar3 == 2) {
      FUN_00410f20(plVar5);
      FUN_00410f20(local_30);
      return;
    }
    plVar8 = (longlong *)FUN_004aeac0(local_30,0);
    (**(code **)(*(longlong *)plVar8[0x11] + 0x10))((longlong *)plVar8[0x11],plVar5[0xe0]);
    local_50[0] = FUN_00498310((int)plVar8[0xd],*(undefined4 *)((longlong)plVar8 + 0x6c));
    (**(code **)(*plVar8 + 0xd8))
              (plVar8,*(undefined8 *)(param_1 + 0x78),local_50,*(undefined8 *)(param_1 + 0x80));
    FUN_01ae7ab0(param_1,L"Circle width",*(undefined4 *)(*(longlong *)(plVar5[0xe0] + 0x18) + 0x2c))
    ;
    uVar4 = FUN_005fd4d0(plVar5[0xe0]);
    FUN_01ae7ab0(param_1,L"Circle color",uVar4);
    uVar2 = FUN_005fd660(plVar5[0xe0]);
    FUN_01ae7ab0(param_1,L"Circle style",uVar2);
  }
  FUN_00410f20(plVar5);
  FUN_00410f20(local_30);
  return;
}

