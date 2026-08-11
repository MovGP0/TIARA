/* Ghidra address: 01b9bcb0 */
/* Ghidra symbol: FUN_01b9bcb0 */


void FUN_01b9bcb0(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_188 [32];
  undefined4 *local_168;
  undefined1 local_160;
  undefined1 local_158;
  undefined1 local_150;
  undefined1 local_148;
  undefined4 local_140;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined1 *local_f0;
  longlong local_e8;
  longlong local_d8;
  int local_d0;
  undefined1 local_c9;
  longlong local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong *local_88;
  longlong local_80;
  undefined4 local_74;
  undefined4 local_70;
  int local_6c;
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  int local_4c;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  longlong *local_28;
  int local_20;
  uint local_1c;
  
  local_f0 = auStack_188;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  local_118 = 0;
  local_108 = 0;
  local_f8 = 0;
  plVar5 = (longlong *)FUN_006a6030();
  (**(code **)(*plVar5 + 0x30))(plVar5);
  uVar6 = FUN_006a6030();
  cVar1 = FUN_006a5ff0(uVar6,*(undefined2 *)PTR_DAT_020027b8);
  if (cVar1 == '\0') {
    uVar6 = FUN_006a6030();
    cVar1 = FUN_006a5ff0(uVar6,1);
    if (cVar1 == '\0') {
      uVar6 = FUN_006a6030();
      cVar1 = FUN_006a5ff0(uVar6,*(undefined2 *)PTR_DAT_02001528);
      if (cVar1 == '\0') {
        uVar6 = FUN_006a6030();
        cVar1 = FUN_006a5ff0(uVar6,0xe);
        if (cVar1 == '\0') {
          uVar6 = FUN_006a6030();
          cVar1 = FUN_006a5ff0(uVar6,3);
          if (cVar1 == '\0') {
            uVar6 = FUN_006a6030();
            cVar1 = FUN_006a5ff0(uVar6,2);
            if (cVar1 != '\0') {
              local_c0 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
              uVar6 = FUN_006a6030();
              uVar6 = FUN_006a5da0(uVar6,2);
              (**(code **)(*local_c0 + 0xd0))(local_c0,2,uVar6,0);
              local_b8 = (longlong *)FUN_00605cc0(&PTR_FUN_005f86c8,1);
              uVar2 = (**(code **)(*local_c0 + 0x60))(local_c0);
              uVar4 = (**(code **)(*local_c0 + 0x48))(local_c0);
              FUN_01b23050(uVar2,uVar4,&local_70,&local_74);
              FUN_010b6d50(local_c0,local_b8,local_70,local_74);
              local_98 = FUN_006060c0(local_b8);
              local_90 = thunk_FUN_040ef593(0);
              local_b0 = 8;
              local_ac = FUN_006061d0(local_b8);
              local_a8 = FUN_006061a0(local_b8);
              local_a0 = local_98;
              thunk_FUN_041a9b5c(0,local_90);
              uVar6 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
              FUN_01a9a4e0(uVar6,&local_1c,&local_20);
              local_168 = &local_b0;
              local_88 = (longlong *)FUN_010b7590(0,&PTR_FUN_010b6978,local_1c,local_20);
              *(undefined1 *)((longlong)local_88 + 0x81) = 1;
              FUN_00410f20(local_c0);
              FUN_00410f20(local_b8);
              FUN_0041ddd0(&local_130,PTR_DAT_020056b8);
              local_100 = local_88;
              local_168 = (undefined4 *)FUN_017baf50(&local_100,0);
              FUN_017bb430(&PTR_FUN_017ba4c0,1,local_130,
                           *(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
              (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x20))
                        (*(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),local_88);
              FUN_0199e310(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),0,1,0);
              FUN_01994230(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
              FUN_01993f30(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),local_88,1,0);
              uVar6 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
              (**(code **)(*local_88 + 0xa0))(local_88,uVar6);
              local_168 = (undefined4 *)((ulonglong)local_168 & 0xffffffffffffff00);
              local_160 = 0;
              (**(code **)(**(longlong **)PTR_DAT_02004e40 + 0x2f8))
                        (*(longlong **)PTR_DAT_02004e40,local_1c,local_20,0);
              FUN_01c6d670(*(undefined8 *)PTR_DAT_02004e40,
                           *(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 3000));
            }
            plVar5 = (longlong *)FUN_006a6030();
            (**(code **)(*plVar5 + 0x28))(plVar5);
            goto LAB_01b9cf6f;
          }
        }
        local_90 = thunk_FUN_040ef593(0);
        local_b8 = (longlong *)FUN_00605cc0(&PTR_FUN_005f86c8,1);
        uVar6 = FUN_006a6030();
        uVar6 = FUN_006a5da0(uVar6,0xe);
        (**(code **)(*local_b8 + 0xd0))(local_b8,0xe,uVar6,0);
        local_98 = FUN_006060c0(local_b8);
        local_b0 = 8;
        local_ac = FUN_006061d0(local_b8);
        local_a8 = FUN_006061a0(local_b8);
        local_a0 = local_98;
        thunk_FUN_041a9b5c(0,local_90);
        uVar6 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
        FUN_01a9a4e0(uVar6,&local_1c,&local_20);
        local_168 = &local_b0;
        local_88 = (longlong *)FUN_010b7590(0,&PTR_FUN_010b6978,local_1c,local_20);
        plVar5 = (longlong *)FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
        uVar2 = (**(code **)(*plVar5 + 0xd0))(plVar5,0);
        *(undefined4 *)((longlong)local_88 + 0x6c) = uVar2;
        FUN_00410f20(local_b8);
        FUN_0041ddd0(&local_128,PTR_DAT_020056b8);
        local_100 = local_88;
        local_168 = (undefined4 *)FUN_017baf50(&local_100,0);
        FUN_017bb430(&PTR_FUN_017ba4c0,1,local_128,
                     *(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
        (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x20))
                  (*(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),local_88);
        FUN_0199e310(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),0,1,0);
        FUN_01994230(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
        FUN_01993f30(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),local_88,1,0);
        uVar6 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
        (**(code **)(*local_88 + 0xa0))(local_88,uVar6);
        local_168 = (undefined4 *)((ulonglong)local_168 & 0xffffffffffffff00);
        local_160 = 0;
        (**(code **)(**(longlong **)PTR_DAT_02004e40 + 0x2f8))
                  (*(longlong **)PTR_DAT_02004e40,local_1c,local_20,0);
        FUN_01c6d670(*(undefined8 *)PTR_DAT_02004e40,
                     *(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 3000));
        plVar5 = (longlong *)FUN_006a6030();
        (**(code **)(*plVar5 + 0x28))(plVar5);
      }
      else {
        uVar6 = FUN_006a6030();
        local_30 = FUN_006a5da0(uVar6,*(undefined2 *)PTR_DAT_02001528);
        if (local_30 != 0) {
          local_40 = thunk_FUN_0416a623(local_30);
          local_28 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
          uVar6 = thunk_FUN_0420b4c4(local_30);
          FUN_004b89e0(local_28,local_40,uVar6);
          thunk_FUN_04172795(local_30);
          local_168 = (undefined4 *)((ulonglong)local_168 & 0xffffffffffffff00);
          local_38 = FUN_01d30b30(&DAT_01d2e8e8,1,local_28,0);
          *(undefined8 *)PTR_DAT_02003a18 = 0;
          uVar6 = FUN_0065b870(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xa10));
          *(undefined8 *)PTR_DAT_02001eb8 = uVar6;
          *(undefined1 *)(local_38 + 0x7a) = 1;
          *(undefined8 *)(local_38 + 0x50) = *(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8)
          ;
          FUN_01d32e90(*(undefined8 *)PTR_DAT_02003458,&local_38);
          if (*(longlong *)PTR_DAT_02003a18 != 0) {
            local_168 = (undefined4 *)CONCAT71(local_168._1_7_,PTR_DAT_02004010[0x814]);
            local_160 = *PTR_DAT_020037e8;
            local_158 = PTR_DAT_02004010[0x815];
            local_150 = *PTR_DAT_02001560;
            local_148 = *PTR_DAT_02005310;
            local_140 = 0x1c7;
            FUN_0198d580(*(undefined8 *)PTR_DAT_02003a18,&local_50,*PTR_DAT_02002480,
                         PTR_DAT_02004010[0x816]);
            uVar6 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
            FUN_01a9a4e0(uVar6,&local_1c,&local_20);
            lVar7 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
            uVar2 = FUN_00b905e0(local_1c,*(undefined4 *)(lVar7 + 0x3c));
            lVar7 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
            iVar3 = FUN_00b905f0(uVar2,*(undefined4 *)(lVar7 + 0x44));
            local_1c = iVar3 - local_50;
            lVar7 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
            uVar2 = FUN_00b905e0(local_20,*(undefined4 *)(lVar7 + 0x40));
            lVar7 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
            local_20 = FUN_00b905f0(uVar2,*(undefined4 *)(lVar7 + 0x48));
            local_20 = local_20 - local_4c;
            FUN_01b1cd00(&local_1c,&local_20);
            local_d8 = *(longlong *)PTR_DAT_02003a18;
            iVar3 = *(int *)(local_d8 + 0x10);
            local_d0 = 0;
            if (-1 < iVar3 + -1) {
              do {
                uVar6 = FUN_00b94e60(local_d8,local_d0);
                FUN_01b9bc30(auStack_188,uVar6);
                local_d0 = local_d0 + 1;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
            if (*PTR_DAT_02003b28 != '\0') {
              local_e8 = *(longlong *)PTR_DAT_02003a18;
              iVar3 = *(int *)(local_e8 + 0x10);
              local_d0 = 0;
              if (-1 < iVar3 + -1) {
                do {
                  uVar6 = FUN_00b94e60(local_e8,local_d0);
                  FUN_01b9bc80(auStack_188,uVar6);
                  local_d0 = local_d0 + 1;
                  iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
              }
            }
            FUN_01994230(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
            if (*PTR_DAT_020041d0 != '\0') {
              FUN_019ad280(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),
                           *(undefined8 *)PTR_DAT_02003a18,0);
            }
            cVar1 = FUN_019ad660(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),
                                 *(undefined8 *)PTR_DAT_02003a18);
            if (cVar1 != '\0') {
              uVar6 = FUN_00b89270();
              FUN_0041ddd0(&local_118,&PTR_PTR_01b9b890);
              FUN_00b8e650(uVar6,&local_110,L"TClpBrd.sDuplicateWireIDFound",local_118);
              iVar3 = FUN_0072d440(local_110,3,0x403,0);
              if (iVar3 == 1) {
                FUN_019ad500(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),
                             *(undefined8 *)PTR_DAT_02003a18);
              }
            }
            FUN_0041ddd0(&local_120,PTR_DAT_020056b8);
            local_168 = (undefined4 *)FUN_017bb060(*(undefined8 *)PTR_DAT_02003a18);
            FUN_017bb430(&PTR_FUN_017ba4c0,1,local_120,
                         *(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
            local_c8 = FUN_01c8a330(*(undefined8 *)PTR_DAT_02004e40,
                                    *(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
            if (local_c8 == 0) {
              local_c9 = 0;
            }
            else {
              local_c9 = *(undefined1 *)(local_c8 + 0x978);
            }
            FUN_0198cd90(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),
                         *(undefined8 *)PTR_DAT_02003a18,0x6601,local_c9);
            FUN_0199e310(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),0,1,0);
            uVar6 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
            FUN_01a9a4e0(uVar6,&local_1c,&local_20);
            local_168 = (undefined4 *)((ulonglong)local_168 & 0xffffffffffffff00);
            local_160 = 0;
            (**(code **)(**(longlong **)PTR_DAT_02004e40 + 0x2f8))
                      (*(longlong **)PTR_DAT_02004e40,local_1c,local_20,0);
          }
          if (*(longlong *)PTR_DAT_02003a18 != 0) {
            uVar6 = (**(code **)**(undefined8 **)PTR_DAT_02003a18)(*(undefined8 **)PTR_DAT_02003a18)
            ;
            FUN_00418590(uVar6,&DAT_01984da0);
          }
          *(undefined8 *)PTR_DAT_02003a18 = 0;
          FUN_00410f20(local_38);
          FUN_00410f20(local_28);
        }
      }
    }
    else {
      uVar6 = FUN_006a6030();
      uVar6 = FUN_006a5da0(uVar6,1);
      local_6c = thunk_FUN_0420b4c4(uVar6);
      local_6c = local_6c * 2;
      local_68 = (longlong *)FUN_0149d160(0,&PTR_FUN_0149cf30);
      lVar7 = (longlong)local_6c;
      local_58 = FUN_004095c0(lVar7);
      uVar6 = FUN_006a6030();
      FUN_006a5710(uVar6,local_58,local_6c);
      local_60 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      (**(code **)(*local_60 + 0x120))(local_60,local_58);
      FUN_004095f0(local_58,lVar7);
      FUN_0149ec30(local_68,local_60);
      FUN_00410f20(local_60);
      FUN_0041ddd0(&local_108,PTR_DAT_020056b8);
      local_100 = local_68;
      local_168 = (undefined4 *)FUN_017baf50(&local_100,0);
      FUN_017bb430(&PTR_FUN_017ba4c0,1,local_108,
                   *(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
      (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x20))
                (*(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),local_68);
      FUN_0199e310(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),0,1,0);
      FUN_01994230(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
      uVar6 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
      FUN_01a9a4e0(uVar6,&local_1c,&local_20);
      uVar6 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
      (**(code **)(*local_68 + 0xe8))(local_68,uVar6,local_1c,local_20);
      FUN_01993f30(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),local_68,1,0);
      uVar6 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
      (**(code **)(*local_68 + 0xa0))(local_68,uVar6);
      local_168 = (undefined4 *)((ulonglong)local_168 & 0xffffffffffffff00);
      local_160 = 0;
      (**(code **)(**(longlong **)PTR_DAT_02004e40 + 0x2f8))
                (*(longlong **)PTR_DAT_02004e40,local_1c,local_20,0);
      FUN_01c6d670(*(undefined8 *)PTR_DAT_02004e40,
                   *(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 3000));
    }
  }
  else {
    uVar6 = FUN_006a6030();
    local_30 = FUN_006a5da0(uVar6,*(undefined2 *)PTR_DAT_020027b8);
    if (local_30 != 0) {
      local_40 = thunk_FUN_0416a623(local_30);
      local_28 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
      uVar6 = thunk_FUN_0420b4c4(local_30);
      (**(code **)(*local_28 + 0x10))(local_28,uVar6);
      FUN_004b6dc0(local_28,0);
      uVar6 = thunk_FUN_0420b4c4(local_30);
      FUN_004b89e0(local_28,local_40,uVar6);
      thunk_FUN_04172795(local_30);
      local_168 = (undefined4 *)((ulonglong)local_168 & 0xffffffffffffff00);
      local_38 = FUN_01d30b30(&DAT_01d2e8e8,1,local_28,0);
      local_80 = FUN_01d331a0(&PTR_FUN_01a5c280,1,local_38);
      *(undefined1 *)(*(longlong *)(local_80 + 0x90) + 0x98) = 1;
      *(undefined1 *)(local_80 + 0x99) = 1;
      *(undefined1 *)(local_80 + 0xa0) = 1;
      FUN_00410f20(local_38);
      FUN_00410f20(local_28);
      local_68 = (longlong *)FUN_0149d160(0,&PTR_FUN_0149cf30);
      FUN_01a5eb60(local_68[5],local_80);
      FUN_00410f20(local_80);
      FUN_0041ddd0(&local_f8,PTR_DAT_020056b8);
      local_100 = local_68;
      local_168 = (undefined4 *)FUN_017baf50(&local_100,0);
      FUN_017bb430(&PTR_FUN_017ba4c0,1,local_f8,
                   *(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
      (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x20))
                (*(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),local_68);
      FUN_0199e310(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),0,1,0);
      FUN_01994230(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
      uVar6 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
      FUN_01a9a4e0(uVar6,&local_1c,&local_20);
      uVar6 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
      (**(code **)(*local_68 + 0xe8))(local_68,uVar6,local_1c,local_20);
      FUN_01993f30(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),local_68,1,0);
      uVar6 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
      (**(code **)(*local_68 + 0xa0))(local_68,uVar6);
      local_168 = (undefined4 *)((ulonglong)local_168 & 0xffffffffffffff00);
      local_160 = 0;
      (**(code **)(**(longlong **)PTR_DAT_02004e40 + 0x2f8))
                (*(longlong **)PTR_DAT_02004e40,local_1c,local_20,0);
      FUN_01c6d670(*(undefined8 *)PTR_DAT_02004e40,
                   *(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 3000));
    }
  }
  FUN_01b9d0d0(0,local_f0);
LAB_01b9cf6f:
  FUN_00414560(&local_130,6);
  FUN_00414480(&local_f8);
  return;
}

