/* Ghidra address: 019701a0 */
/* Ghidra symbol: FUN_019701a0 */


char FUN_019701a0(longlong *param_1,short *param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined1 auStack_d8 [38];
  char local_b2;
  char local_b1;
  short *local_b0;
  int local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  char local_31;
  longlong local_30;
  
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_70 = (undefined *)0x0;
  local_78 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_b1 = '\x01';
  local_b2 = param_3;
  local_b0 = param_2;
  iVar3 = FUN_00414cb0(param_1[0x38]);
  if ((iVar3 < 2) || ((*(short *)param_1[0x38] != 0x2e && (*(short *)param_1[0x38] != 0x5c)))) {
    FUN_00414b50(&local_60,param_1[0x38]);
  }
  else {
    FUN_00441b80(&local_60,param_1[0x38]);
  }
  iVar3 = FUN_00414cb0(local_b0);
  if ((iVar3 < 2) || ((*local_b0 != 0x2e && (*local_b0 != 0x5c)))) {
    FUN_00414b50(&local_68,local_b0);
  }
  else {
    FUN_00441b80(&local_68,local_b0);
  }
  iVar3 = FUN_00416db0(local_60,local_68);
  if (iVar3 == 0) {
    local_b1 = '\0';
  }
  else {
    local_40 = FUN_0196e3c0(&PTR_FUN_0193aeb8,1,0);
    local_30 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    FUN_0194f7b0(local_40,param_1,0);
    FUN_00441640(&local_78,param_1[0x38]);
    FUN_00441d00(&local_70,local_78,local_b0);
    FUN_0196f5b0(param_1,local_70);
    lVar5 = FUN_01951400(local_40);
    iVar3 = *(int *)(lVar5 + 0x10);
    local_a4 = 0;
    bVar1 = false;
    if (-1 < iVar3 + -1) {
      do {
        lVar6 = FUN_004aeac0(lVar5,local_a4);
        cVar2 = FUN_004113d0(lVar6,&PTR_FUN_019342a8);
        if (cVar2 == '\0') {
          lVar6 = (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(lVar6 + 0x10));
          if (lVar6 != 0) {
            bVar1 = true;
            break;
          }
        }
        local_a4 = local_a4 + 1;
        iVar3 = iVar3 + -1;
        bVar1 = false;
      } while (iVar3 != 0);
    }
    local_31 = '\0';
    if ((bVar1) && (local_b2 == '\0')) {
      plVar7 = (longlong *)FUN_0181a5c0(&PTR_FUN_018fb698,1,0);
      iVar3 = (**(code **)(*plVar7 + 0x2d0))(plVar7);
      local_b1 = iVar3 == 1;
      if ((bool)local_b1) {
        local_31 = (**(code **)(*(longlong *)plVar7[0xde] + 0x260))((longlong *)plVar7[0xde]);
      }
      FUN_00410f20(plVar7);
    }
    else {
      local_31 = local_b2 == '\x01';
    }
    if (local_b1 == '\0') {
      FUN_0194f7b0(param_1,local_40,0);
    }
    else {
      plVar7 = (longlong *)FUN_019776f0(param_1);
      (**(code **)(*plVar7 + 0x38))(plVar7,&local_48);
      FUN_0196fe40(auStack_d8,param_1,local_40);
      iVar3 = FUN_004b2060();
      local_a4 = 0;
      if (-1 < iVar3 + -1) {
        do {
          uVar8 = FUN_0196d410(*(undefined8 *)(local_40 + 0x170),local_a4);
          FUN_0196d210(uVar8,&local_80);
          lVar5 = FUN_0196d4a0(param_1[0x2e],local_80);
          if (lVar5 == 0) {
            uVar8 = FUN_0196d410(*(undefined8 *)(local_40 + 0x170),local_a4);
            FUN_0196d210(uVar8,&local_88);
            lVar5 = FUN_01953bb0(param_1,0,local_88);
            if (lVar5 != 0) {
              FUN_0196d3f0(param_1[0x2e],lVar5);
            }
          }
          local_a4 = local_a4 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar3 = FUN_004b2060();
      local_a4 = 0;
      if (-1 < iVar3 + -1) {
        do {
          lVar5 = FUN_018163e0(*(undefined8 *)(local_40 + 0x298),local_a4);
          iVar4 = FUN_018163f0(param_1[0x53],*(undefined8 *)(lVar5 + 0x20));
          if (iVar4 != -1) {
            if (local_31 == '\0') {
              FUN_00416ad0(lVar5 + 0x20,L"_renamed");
            }
            else {
              lVar5 = 0;
            }
          }
          if (lVar5 != 0) {
            plVar7 = (longlong *)FUN_018163c0(param_1[0x53]);
            (**(code **)(*plVar7 + 0x10))(plVar7,lVar5);
          }
          local_a4 = local_a4 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar3 = FUN_004b2060();
      local_a4 = 0;
      if (-1 < iVar3 + -1) {
        do {
          lVar5 = FUN_0196dcf0(*(undefined8 *)(local_40 + 0x278),local_a4);
          lVar6 = FUN_0196dc70(param_1[0x4f],*(undefined8 *)(lVar5 + 0x20));
          if (lVar6 != 0) {
            if (local_31 == '\0') {
              FUN_00416ba0(&local_90,*(undefined8 *)(lVar5 + 0x20),L"_renamed");
              FUN_0196d9f0(lVar5,local_90);
            }
            else {
              lVar5 = 0;
            }
          }
          if (lVar5 != 0) {
            plVar7 = (longlong *)FUN_0196dc60(param_1[0x4f]);
            (**(code **)(*plVar7 + 0x10))(plVar7,lVar5);
          }
          local_a4 = local_a4 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar3 = FUN_00416db0(*(undefined8 *)(param_1[0x49] + 0x130),L"C++Script");
      if ((iVar3 == 0) ||
         (iVar3 = FUN_00416db0(*(undefined8 *)(param_1[0x49] + 0x130),L"JScript"), iVar3 == 0)) {
        FUN_00414b50(&local_50,&DAT_01970a84);
        FUN_00414b50(&local_58,&DAT_01970a98);
      }
      else {
        iVar3 = FUN_00416db0(*(undefined8 *)(param_1[0x49] + 0x130),L"BasicScript");
        if (iVar3 == 0) {
          FUN_00414b50(&local_50,&DAT_01970ad0);
          FUN_00414b50(&local_58,&DAT_01970ad0);
        }
        else {
          iVar3 = FUN_00416db0(*(undefined8 *)(param_1[0x49] + 0x130),L"PascalScript");
          if (iVar3 == 0) {
            FUN_00414b50(&local_50,&DAT_01970b0c);
            FUN_00414b50(&local_58,&DAT_01970b1c);
          }
        }
      }
      plVar7 = (longlong *)FUN_019776f0(param_1);
      (**(code **)(*plVar7 + 0x78))(plVar7,local_50);
      plVar7 = (longlong *)FUN_019776f0(param_1);
      (**(code **)(*plVar7 + 0x78))(plVar7,L"**********Script from parent report**********");
      plVar7 = (longlong *)FUN_019776f0(param_1);
      plVar9 = (longlong *)FUN_019776f0(param_1);
      (**(code **)(*plVar9 + 0x38))(plVar9,&local_98);
      FUN_00416ad0(&local_98,local_48);
      (**(code **)(*plVar7 + 0x60))(plVar7,local_98);
      plVar7 = (longlong *)FUN_019776f0(param_1);
      (**(code **)(*plVar7 + 0x78))(plVar7,local_58);
      iVar3 = FUN_004b2060();
      local_a4 = 0;
      if (-1 < iVar3 + -1) {
        do {
          uVar8 = FUN_0196d410(param_1[0x2e],local_a4);
          FUN_0196d210(uVar8,&local_a0);
          uVar8 = FUN_01953bb0(param_1,0,local_a0);
          uVar10 = FUN_0196d410(param_1[0x2e],local_a4);
          FUN_0196d190(uVar10,uVar8);
          local_a4 = local_a4 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      while (0 < *(int *)(local_30 + 0x10)) {
        lVar5 = FUN_004aeac0(local_30,0);
        lVar6 = (**(code **)(*param_1 + 0x1e8))(param_1);
        if (lVar6 == 0) {
          lVar6 = FUN_0180d1d0(param_1);
        }
        if (lVar6 != 0) {
          FUN_0058af20(*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10),lVar6);
        }
        FUN_00410f20(lVar5);
        FUN_004ae870(local_30);
      }
    }
    FUN_00410f20(local_30);
    FUN_00410f20(local_40);
  }
  FUN_00414560(&local_a0,0xc);
  return local_b1;
}

