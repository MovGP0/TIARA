/* Ghidra address: 01497210 */
/* Ghidra symbol: FUN_01497210 */


undefined1 FUN_01497210(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 local_ed;
  int local_ec;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_ed = 1;
  plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  lVar1 = *(longlong *)(param_1 + 0x700);
  local_ec = 0;
  if (*(int *)(lVar1 + 0x4e0) + -2 < 0) {
LAB_014977ea:
    FUN_00410f20(plVar5);
    FUN_00414560(&local_e0,0x17);
    return local_ed;
  }
  iVar7 = *(int *)(lVar1 + 0x4e0) + -1;
LAB_0149734c:
  FUN_0084e320(lVar1,&local_50,0,local_ec + 1);
  FUN_0043ea00(&local_30,local_50);
  cVar2 = FUN_014937c0(param_1,local_ec + 1);
  if (cVar2 == '\0') {
    if (local_30 != 0) {
      cVar2 = FUN_014936e0(local_30);
      if (cVar2 != '\0') {
        iVar3 = (**(code **)(*plVar5 + 0xb0))(plVar5,local_30);
        if (iVar3 != -1) {
          uVar6 = FUN_00b89270();
          FUN_0041ddd0(&local_80,PTR_PTR_02003b10);
          FUN_00b8e650(uVar6,&local_78,L"d.DesignToolObject_Msg_DuplicateParam",local_80);
          FUN_00416cd0(&local_70,3,local_30,&DAT_01497848,local_78);
          FUN_01493aa0(param_1,local_70);
          *(undefined1 *)(param_1 + 0xba1) = 0;
          local_ed = 0;
          goto LAB_014977ea;
        }
        (**(code **)(*plVar5 + 0x78))(plVar5,local_30);
        iVar3 = local_ec + 1;
        FUN_0084e320(lVar1,&local_38,1,iVar3);
        FUN_014956b0(param_1,local_30,local_38);
        if (*(char *)(param_1 + 0xba1) != '\0') {
          *(undefined1 *)(param_1 + 0xba1) = 0;
          local_ed = 0;
          goto LAB_014977ea;
        }
        FUN_0084e320(lVar1,&local_40,2,iVar3);
        iVar4 = FUN_00416db0(local_40,L"<none>");
        if (iVar4 != 0) {
          if (local_40 == 0) {
            uVar6 = FUN_00b89270();
            FUN_0041ddd0(&local_98,PTR_PTR_020051e0);
            FUN_00b8e650(uVar6,&local_90,L"d.DesignToolObject_Msg_EmptyMinMax",local_98);
            FUN_00416cd0(&local_88,3,local_30,&DAT_01497848,local_90);
            FUN_01493aa0(param_1,local_88);
          }
          else {
            cVar2 = FUN_014963c0(param_1,local_40);
            if (cVar2 == '\0') {
              uVar6 = FUN_00b89270();
              FUN_0041ddd0(&local_b0,PTR_PTR_02002d80);
              FUN_00b8e650(uVar6,&local_a8,L"d.DesignToolObject_Msg_InvalidExpression",local_b0);
              FUN_00416cd0(&local_a0,3,local_30,&DAT_01497848,local_a8);
              FUN_01493aa0(param_1,local_a0);
            }
          }
          if (*(char *)(param_1 + 0xba1) != '\0') {
            *(undefined1 *)(param_1 + 0xba1) = 0;
            local_ed = 0;
            goto LAB_014977ea;
          }
        }
        FUN_0084e320(lVar1,&local_48,3,iVar3);
        iVar3 = FUN_00416db0(local_48,L"<none>");
        if (iVar3 != 0) {
          if (local_48 == 0) {
            uVar6 = FUN_00b89270();
            FUN_0041ddd0(&local_c8,PTR_PTR_020051e0);
            FUN_00b8e650(uVar6,&local_c0,L"d.DesignToolObject_Msg_EmptyMinMax",local_c8);
            FUN_00416cd0(&local_b8,3,local_30,&DAT_01497848,local_c0);
            FUN_01493aa0(param_1,local_b8);
          }
          else {
            cVar2 = FUN_014963c0(param_1,local_48);
            if (cVar2 == '\0') {
              uVar6 = FUN_00b89270();
              FUN_0041ddd0(&local_e0,PTR_PTR_02002d80);
              FUN_00b8e650(uVar6,&local_d8,L"d.DesignToolObject_Msg_InvalidExpression",local_e0);
              FUN_00416cd0(&local_d0,3,local_30,&DAT_01497848,local_d8);
              FUN_01493aa0(param_1,local_d0);
            }
          }
          if (*(char *)(param_1 + 0xba1) == '\0') goto LAB_014977d5;
          *(undefined1 *)(param_1 + 0xba1) = 0;
          local_ed = 0;
          goto LAB_014977ea;
        }
        goto LAB_014977d5;
      }
    }
    uVar6 = FUN_00b89270();
    FUN_0041ddd0(&local_68,PTR_PTR_02004428);
    FUN_00b8e650(uVar6,&local_60,L"d.DesignToolObject_Msg_InvalidKeyName",local_68);
    FUN_00416cd0(&local_58,3,local_30,&DAT_01497848,local_60);
    FUN_01493aa0(param_1,local_58);
    *(undefined1 *)(param_1 + 0xba1) = 0;
    local_ed = 0;
    goto LAB_014977ea;
  }
LAB_014977d5:
  local_ec = local_ec + 1;
  iVar7 = iVar7 + -1;
  if (iVar7 == 0) goto LAB_014977ea;
  goto LAB_0149734c;
}

