/* Ghidra address: 01a88cd0 */
/* Ghidra symbol: FUN_01a88cd0 */


void FUN_01a88cd0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  local_50[0] = 0;
  plVar7 = (longlong *)FUN_00723990(&PTR_FUN_0071a1f0,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_00414ad0(plVar7 + 0x20,&DAT_01a8926c);
  FUN_00724380(plVar7,L"tcurve.wav");
  FUN_00414ad0(plVar7 + 0x1c,L"WAV files (*.wav)|*.wav");
  FUN_00414ad0(plVar7 + 0x1f,L"Save diagram to WAV");
  cVar5 = (**(code **)(*plVar7 + 0xa8))(plVar7);
  if (cVar5 != '\0') {
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_40 = 0;
    cVar5 = FUN_01acff30(*(undefined8 *)(param_1 + 0x798),&local_40);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0xd8);
    uVar8 = (**(code **)(*plVar2 + 0x30))(plVar2,0);
    lVar9 = FUN_004113f0(uVar8,&DAT_01cdd500);
    lVar10 = local_a8;
    lVar3 = local_a0;
    lVar4 = local_98;
    if (cVar5 == '\x02') {
      lVar9 = FUN_004aeac0(local_40,0);
      local_78 = *(longlong **)(lVar9 + 200);
      lVar9 = FUN_004aeac0(local_40,0);
      lVar11 = *(longlong *)(lVar9 + 0xd0);
      iVar6 = *(int *)(local_40 + 0x10);
      iVar12 = 0;
      if (-1 < iVar6 + -1) {
        do {
          lVar10 = FUN_004aeac0(local_40,iVar12);
          lVar10 = *(longlong *)(lVar10 + 0xe0);
          cVar1 = *(char *)(lVar10 + 0x3b);
          lVar3 = lVar10;
          lVar4 = lVar10;
          if (cVar1 == '\x01') break;
          if ((cVar1 != '\x02') && (lVar3 = local_a8, lVar4 = local_98, cVar1 == '\x03')) {
            local_a0 = lVar10;
            lVar4 = lVar10;
          }
          local_98 = lVar4;
          local_a8 = lVar3;
          iVar12 = iVar12 + 1;
          iVar6 = iVar6 + -1;
          lVar10 = local_a8;
          lVar3 = local_a0;
          lVar4 = local_98;
        } while (iVar6 != 0);
      }
    }
    else {
      lVar11 = (**(code **)(**(longlong **)(lVar9 + 0x80) + 0x30))(*(longlong **)(lVar9 + 0x80),0);
      local_78 = *(longlong **)(lVar11 + 200);
      lVar11 = (**(code **)(**(longlong **)(lVar9 + 0x80) + 0x30))(*(longlong **)(lVar9 + 0x80),0);
      lVar11 = *(longlong *)(lVar11 + 0xd0);
      iVar6 = (**(code **)(**(longlong **)(lVar9 + 0x80) + 0x28))();
      iVar12 = 0;
      if (-1 < iVar6 + -1) {
        do {
          uVar8 = (**(code **)(**(longlong **)(lVar9 + 0x80) + 0x30))
                            (*(longlong **)(lVar9 + 0x80),iVar12);
          lVar10 = FUN_004113f0(uVar8,&PTR_FUN_01aae560);
          lVar10 = *(longlong *)(lVar10 + 0xe0);
          cVar1 = *(char *)(lVar10 + 0x3b);
          lVar3 = lVar10;
          lVar4 = lVar10;
          if (cVar1 == '\x01') break;
          if ((cVar1 != '\x02') && (lVar3 = local_a8, lVar4 = local_98, cVar1 == '\x03')) {
            local_a0 = lVar10;
            lVar4 = lVar10;
          }
          local_98 = lVar4;
          local_a8 = lVar3;
          iVar12 = iVar12 + 1;
          iVar6 = iVar6 + -1;
          lVar10 = local_a8;
          lVar3 = local_a0;
          lVar4 = local_98;
        } while (iVar6 != 0);
      }
    }
    local_98 = lVar4;
    local_a0 = lVar3;
    local_a8 = lVar10;
    FUN_00410f20(local_40);
    if (local_98 == 0) {
      if (cVar5 == '\x02') {
        uVar8 = FUN_00b89270();
        FUN_0041ddd0(&local_60,&LAB_01a72608);
        FUN_00b8e650(uVar8,&local_58,L"DrawWind.WAVExportErrorCurve",local_60);
        FUN_0072d440(local_58,1,4,0);
      }
      else {
        uVar8 = FUN_00b89270();
        FUN_0041ddd0(&local_70,&PTR_PTR_01a860d0);
        FUN_00b8e650(uVar8,&local_68,L"DrawWind.WAVExportErrorAll",local_70);
        FUN_0072d440(local_68,1,4,0);
      }
    }
    else {
      uVar8 = FUN_00410e60(&DAT_016d5688,1);
      if (local_a8 == local_a0) {
        FUN_016d6770(uVar8,1,*(undefined4 *)(lVar11 + 0x4c),*(undefined8 *)(lVar11 + 0x40),0);
      }
      else {
        FUN_016d6770(uVar8,2,*(undefined4 *)(lVar11 + 0x4c),*(undefined8 *)(lVar11 + 0x40),0);
      }
      iVar6 = (**(code **)(*local_78 + 0x20))(local_78,local_98,0);
      lVar10 = FUN_00409570((longlong)iVar6);
      (**(code **)(*local_78 + 0x40))(local_78,&local_38,lVar10);
      if (local_a8 == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = *(undefined8 *)(lVar10 + (longlong)*(int *)(local_a8 + 0x154) * 8);
      }
      if (local_a0 == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined8 *)(lVar10 + (longlong)*(int *)(local_a0 + 0x154) * 8);
      }
      FUN_016d6ca0(uVar8,local_38,uVar13,uVar14);
      while (cVar5 = (**(code **)(*local_78 + 0x40))(local_78,&local_30,lVar10), cVar5 != '\0') {
        if (local_a8 == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = *(undefined8 *)(lVar10 + (longlong)*(int *)(local_a8 + 0x154) * 8);
        }
        if (local_a0 == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = *(undefined8 *)(lVar10 + (longlong)*(int *)(local_a0 + 0x154) * 8);
        }
        FUN_016d6ca0(uVar8,local_30,uVar13,uVar14);
      }
      FUN_00724270(plVar7,local_50);
      FUN_016d6890(uVar8,local_50[0],0);
      FUN_00410f20(uVar8);
      FUN_004095f0(lVar10);
    }
  }
  FUN_00410f20(plVar7);
  FUN_00414560(&local_70,4);
  FUN_00414480(local_50);
  return;
}

