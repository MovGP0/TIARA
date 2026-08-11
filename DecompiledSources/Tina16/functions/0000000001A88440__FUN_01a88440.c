/* Ghidra address: 01a88440 */
/* Ghidra symbol: FUN_01a88440 */


void FUN_01a88440(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM8_Qa;
  longlong local_98;
  longlong local_90;
  longlong *local_88;
  longlong local_80;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60 [7];
  
  local_98 = 0;
  local_90 = 0;
  lVar8 = 0;
  local_70 = 0;
  plVar1 = *(longlong **)(param_1 + 0x1068);
  if (plVar1 == (longlong *)0x0) {
    uVar5 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    *(undefined8 *)(param_1 + 0x1068) = uVar5;
  }
  else {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  cVar3 = FUN_01acff30(*(undefined8 *)(param_1 + 0x798),&local_70);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0xd8);
  uVar5 = (**(code **)(*plVar1 + 0x30))(plVar1,0);
  lVar6 = FUN_004113f0(uVar5,&DAT_01cdd500);
  if (*(char *)(lVar6 + 0x58) == '\0') {
    lVar9 = local_98;
    lVar2 = local_90;
    if (cVar3 == '\x02') {
      lVar7 = FUN_004aeac0(local_70,0);
      local_88 = *(longlong **)(lVar7 + 200);
      lVar7 = FUN_004aeac0(local_70,0);
      local_80 = *(longlong *)(lVar7 + 0xd0);
      iVar4 = *(int *)(local_70 + 0x10);
      iVar10 = 0;
      if (-1 < iVar4 + -1) {
        do {
          lVar8 = FUN_004aeac0(local_70,iVar10);
          uVar5 = FUN_004aeac0(local_70,iVar10);
          FUN_004ae7e0(*(undefined8 *)(param_1 + 0x1068),uVar5);
          lVar8 = *(longlong *)(lVar8 + 0xe0);
          cVar3 = *(char *)(lVar8 + 0x3b);
          lVar9 = lVar8;
          lVar2 = lVar8;
          if (cVar3 == '\x01') break;
          if ((cVar3 != '\x02') && (local_90 = lVar8, cVar3 == '\x03')) {
            lVar9 = local_98;
          }
          local_98 = lVar9;
          iVar10 = iVar10 + 1;
          iVar4 = iVar4 + -1;
          lVar9 = local_98;
          lVar2 = local_90;
        } while (iVar4 != 0);
      }
    }
    else {
      lVar7 = (**(code **)(**(longlong **)(lVar6 + 0x80) + 0x30))(*(longlong **)(lVar6 + 0x80),0);
      local_88 = *(longlong **)(lVar7 + 200);
      lVar7 = (**(code **)(**(longlong **)(lVar6 + 0x80) + 0x30))(*(longlong **)(lVar6 + 0x80),0);
      local_80 = *(longlong *)(lVar7 + 0xd0);
      uVar5 = (**(code **)(**(longlong **)(lVar6 + 0x80) + 0x30))(*(longlong **)(lVar6 + 0x80),0);
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x1068),uVar5);
      iVar4 = (**(code **)(**(longlong **)(lVar6 + 0x80) + 0x28))();
      iVar10 = 0;
      lVar7 = lVar8;
      if (-1 < iVar4 + -1) {
        do {
          uVar5 = (**(code **)(**(longlong **)(lVar6 + 0x80) + 0x30))
                            (*(longlong **)(lVar6 + 0x80),iVar10);
          lVar8 = FUN_004113f0(uVar5,&PTR_FUN_01aae560);
          lVar8 = *(longlong *)(lVar8 + 0xe0);
          cVar3 = *(char *)(lVar8 + 0x3b);
          lVar9 = lVar8;
          lVar2 = lVar8;
          if (cVar3 == '\x01') break;
          if ((cVar3 != '\x02') && (lVar9 = lVar7, lVar2 = local_98, cVar3 == '\x03')) {
            lVar9 = lVar8;
            local_90 = lVar8;
          }
          local_98 = lVar2;
          iVar10 = iVar10 + 1;
          iVar4 = iVar4 + -1;
          lVar8 = lVar9;
          lVar7 = lVar9;
          lVar9 = local_98;
          lVar2 = local_90;
        } while (iVar4 != 0);
      }
    }
    local_90 = lVar2;
    local_98 = lVar9;
    lVar9 = (**(code **)(**(longlong **)(lVar6 + 0x70) + 0x30))(*(longlong **)(lVar6 + 0x70),0);
    unaff_XMM7_Qa = *(undefined8 *)(lVar9 + 0xb8);
    lVar6 = (**(code **)(**(longlong **)(lVar6 + 0x70) + 0x30))(*(longlong **)(lVar6 + 0x70),0);
    unaff_XMM8_Qa = *(undefined8 *)(lVar6 + 0xc0);
  }
  FUN_00410f20(local_70);
  if ((lVar8 != 0) && (*(char *)(lVar8 + 0x2b) == '\0')) {
    if (*(char *)(*(longlong *)(param_1 + 0xb00) + 0x328) == '\0') {
      FUN_016d6fd0();
    }
    else {
      uVar5 = FUN_00410e60(&DAT_016d5688,1);
      if (local_98 == local_90) {
        FUN_016d6770(uVar5,1,*(undefined4 *)(local_80 + 0x4c),*(undefined8 *)(local_80 + 0x40),0);
      }
      else {
        FUN_016d6770(uVar5,2,*(undefined4 *)(local_80 + 0x4c),*(undefined8 *)(local_80 + 0x40),0);
      }
      iVar4 = (**(code **)(*local_88 + 0x20))(local_88,lVar8,0);
      lVar8 = FUN_00409570((longlong)iVar4);
      (**(code **)(*local_88 + 0x40))(local_88,&local_68,lVar8);
      if (local_98 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(undefined8 *)(lVar8 + (longlong)*(int *)(local_98 + 0x154) * 8);
      }
      if (local_90 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined8 *)(lVar8 + (longlong)*(int *)(local_90 + 0x154) * 8);
      }
      FUN_016d6ca0(uVar5,local_68,uVar11,uVar12);
      while (cVar3 = (**(code **)(*local_88 + 0x40))(local_88,local_60,lVar8), cVar3 != '\0') {
        if (local_98 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined8 *)(lVar8 + (longlong)*(int *)(local_98 + 0x154) * 8);
        }
        if (local_90 == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = *(undefined8 *)(lVar8 + (longlong)*(int *)(local_90 + 0x154) * 8);
        }
        FUN_016d6ca0(uVar5,local_60[0],uVar11,uVar12);
      }
      *(undefined4 *)(param_1 + 0x1070) = 0xffffffff;
      FUN_016d6890(uVar5,0,0);
      FUN_00410f20(uVar5);
      uVar5 = FUN_0065b870(param_1);
      uVar11 = FUN_00b90620(local_68,unaff_XMM7_Qa);
      uVar12 = FUN_00b90650(local_60[0],unaff_XMM8_Qa);
      FUN_016d6df0(uVar5,0,uVar11,uVar12);
      FUN_004095f0(lVar8);
    }
  }
  return;
}

