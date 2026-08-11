/* Ghidra address: 01a7ee10 */
/* Ghidra symbol: FUN_01a7ee10 */


void FUN_01a7ee10(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_d8 [32];
  uint local_b8;
  undefined8 *local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  longlong local_70;
  longlong local_68;
  int local_5c;
  undefined8 local_58;
  undefined1 local_50 [2];
  undefined2 local_4e;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  longlong *local_30;
  
  local_80 = auStack_d8;
  local_88 = 0;
  FUN_01aee720(&local_88,0x406,*(undefined4 *)(param_1 + 0x6b8),L"DFPasteMnu");
  FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_88);
  if (*(longlong *)(param_1 + 0x798) == 0) {
    FUN_0082a6c0(*(undefined8 *)(param_1 + 0xa90),1);
    FUN_01a794b0(param_1,param_2);
  }
  else {
    uVar5 = FUN_006a6030();
    cVar3 = FUN_006a5ff0(uVar5,*(undefined2 *)PTR_DAT_020027b8);
    if (cVar3 == '\0') {
      uVar5 = FUN_006a6030();
      cVar3 = FUN_006a5ff0(uVar5,1);
      if (cVar3 == '\0') {
        uVar5 = FUN_006a6030();
        cVar3 = FUN_006a5ff0(uVar5,DAT_01fcab58);
        if (cVar3 == '\0') {
          uVar5 = FUN_006a6030();
          cVar3 = FUN_006a5ff0(uVar5,0xe);
          if (cVar3 == '\0') {
            uVar5 = FUN_006a6030();
            cVar3 = FUN_006a5ff0(uVar5,3);
            if (cVar3 == '\0') goto LAB_01a7f859;
          }
          lVar7 = FUN_010f0500(&PTR_FUN_010ef9a8,1);
          *(longlong *)(param_1 + 0xff8) = lVar7;
          uVar5 = FUN_006a6030();
          (**(code **)(**(longlong **)(lVar7 + 0x90) + 0x10))(*(longlong **)(lVar7 + 0x90),uVar5);
          plVar6 = *(longlong **)(*(longlong *)(param_1 + 0xff8) + 0x90);
          uVar4 = (**(code **)(*plVar6 + 0x60))(plVar6);
          plVar6 = *(longlong **)(*(longlong *)(param_1 + 0xff8) + 0x90);
          local_b8 = (**(code **)(*plVar6 + 0x48))(plVar6);
          FUN_00498350(&local_a0,0,0,uVar4);
          lVar7 = *(longlong *)(param_1 + 0xff8);
          *(undefined8 *)(lVar7 + 0x80) = local_a0;
          *(undefined8 *)(lVar7 + 0x88) = uStack_98;
          *(undefined4 *)(param_1 + 0x1018) = 0;
          *(undefined4 *)(param_1 + 0x101c) = 0;
          plVar6 = *(longlong **)(*(longlong *)(param_1 + 0xff8) + 0x90);
          uVar4 = (**(code **)(*plVar6 + 0x60))(plVar6);
          *(undefined4 *)(param_1 + 0x1014) = uVar4;
          plVar6 = *(longlong **)(*(longlong *)(param_1 + 0xff8) + 0x90);
          uVar4 = (**(code **)(*plVar6 + 0x48))(plVar6);
          *(undefined4 *)(param_1 + 0x1010) = uVar4;
          plVar6 = *(longlong **)(param_1 + 0xff8);
          plVar6[0x15] = *(longlong *)(param_1 + 0x798);
          (**(code **)(*plVar6 + 0xe8))(plVar6);
          FUN_0064e140(param_1,0xfff4);
          iVar1 = *(int *)(param_1 + 0x1018);
          iVar2 = *(int *)(param_1 + 0x101c);
          local_b8 = 0;
          FUN_00498350(&local_a0,0,0,0);
          local_b8 = iVar2 + *(int *)(param_1 + 0x1010);
          local_b0 = &local_a0;
          FUN_01a8dd40(*(undefined8 *)(param_1 + 0x780),iVar1,iVar2,
                       iVar1 + *(int *)(param_1 + 0x1014));
          *(undefined1 *)(param_1 + 0x7a8) = 0x10;
        }
        else {
          plVar6 = (longlong *)FUN_006a6030();
          (**(code **)(*plVar6 + 0x30))(plVar6);
          uVar5 = FUN_006a6030();
          local_38 = FUN_006a5da0(uVar5,DAT_01fcab58);
          if (local_38 != 0) {
            local_48 = thunk_FUN_0416a623(local_38);
            local_30 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
            thunk_FUN_0420b4c4(local_38);
            uVar5 = thunk_FUN_0420b4c4(local_38);
            (**(code **)(*local_30 + 0x10))(local_30,uVar5);
            uVar5 = thunk_FUN_0420b4c4(local_38);
            FUN_004b89e0(local_30,local_48,uVar5);
            thunk_FUN_04172795(local_38);
            plVar6 = (longlong *)FUN_006a6030();
            (**(code **)(*plVar6 + 0x28))(plVar6);
            local_b8 = local_b8 & 0xffffff00;
            local_40 = FUN_01d30b30(&DAT_01d2e8e8,1,local_30,0);
            FUN_01d30e90(local_40,local_50);
            (**(code **)(**(longlong **)(param_1 + 0x7a0) + 0x30))
                      (*(longlong **)(param_1 + 0x7a0),local_40,local_4e);
            FUN_01acfc60(*(undefined8 *)(param_1 + 0x798));
            FUN_01aceb90(*(undefined8 *)(param_1 + 0x798),1);
            FUN_01add6f0(*(undefined8 *)(param_1 + 0x798),0);
            FUN_00410f20(local_40);
            FUN_00410f20(local_30);
          }
        }
      }
      else {
        uVar5 = FUN_01a5d940(&PTR_FUN_01a5c280,1);
        *(undefined8 *)(param_1 + 0xff0) = uVar5;
        local_70 = *(longlong *)(param_1 + 0xff0);
        *(undefined1 *)(*(longlong *)(local_70 + 0x90) + 0x98) = 1;
        plVar6 = (longlong *)FUN_006a6030();
        (**(code **)(*plVar6 + 0x30))(plVar6);
        uVar5 = FUN_006a6030();
        uVar5 = FUN_006a5da0(uVar5,1);
        local_5c = thunk_FUN_0420b4c4(uVar5);
        local_5c = local_5c * 2;
        lVar7 = (longlong)local_5c;
        local_58 = FUN_004095c0(lVar7);
        uVar5 = FUN_006a6030();
        FUN_006a5710(uVar5,local_58,local_5c);
        plVar6 = *(longlong **)(*(longlong *)(local_70 + 0x90) + 0xa0);
        (**(code **)(*plVar6 + 0x120))(plVar6,local_58);
        FUN_004095f0(local_58,lVar7);
        plVar6 = (longlong *)FUN_006a6030();
        (**(code **)(*plVar6 + 0x28))(plVar6);
        *(undefined1 *)(local_70 + 0x99) = 1;
        *(undefined1 *)(local_70 + 0xa0) = 1;
        local_90 = FUN_00498310(0xffffff9c,0xffffff9c);
        (**(code **)(**(longlong **)(param_1 + 0xff0) + 200))
                  (*(longlong **)(param_1 + 0xff0),&local_90);
        *(undefined4 *)(param_1 + 0x1018) = 0xffffff9c;
        *(undefined4 *)(param_1 + 0x101c) = 0xffffff9c;
        uVar4 = FUN_01a5ee60(*(undefined8 *)(param_1 + 0xff0),*(undefined8 *)(param_1 + 0x780));
        *(undefined4 *)(param_1 + 0x1014) = uVar4;
        uVar4 = FUN_01a5eed0(*(undefined8 *)(param_1 + 0xff0),*(undefined8 *)(param_1 + 0x780));
        *(undefined4 *)(param_1 + 0x1010) = uVar4;
        plVar6 = *(longlong **)(param_1 + 0xff0);
        plVar6[0x11] = *(longlong *)(param_1 + 0x798);
        (**(code **)(*plVar6 + 0xe8))(plVar6);
        FUN_01a5f250(*(undefined8 *)(param_1 + 0xff0));
        FUN_0064e140(param_1,5);
        iVar1 = *(int *)(param_1 + 0x1018);
        iVar2 = *(int *)(param_1 + 0x101c);
        local_b8 = 0;
        FUN_00498350(&local_a0,0,0,0);
        local_b8 = iVar2 + *(int *)(param_1 + 0x1010);
        local_b0 = &local_a0;
        FUN_01a8dd40(*(undefined8 *)(param_1 + 0x780),iVar1,iVar2,iVar1 + *(int *)(param_1 + 0x1014)
                    );
        *(undefined1 *)(param_1 + 0x7a8) = 6;
      }
    }
    else {
      plVar6 = (longlong *)FUN_006a6030();
      (**(code **)(*plVar6 + 0x30))(plVar6);
      uVar5 = FUN_006a6030();
      local_38 = FUN_006a5da0(uVar5,*(undefined2 *)PTR_DAT_020027b8);
      if (local_38 != 0) {
        local_48 = thunk_FUN_0416a623(local_38);
        local_30 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
        uVar5 = thunk_FUN_0420b4c4(local_38);
        (**(code **)(*local_30 + 0x10))(local_30,uVar5);
        uVar5 = thunk_FUN_0420b4c4(local_38);
        FUN_004b89e0(local_30,local_48,uVar5);
        thunk_FUN_04172795(local_38);
        plVar6 = (longlong *)FUN_006a6030();
        (**(code **)(*plVar6 + 0x28))(plVar6);
        local_b8 = local_b8 & 0xffffff00;
        local_40 = FUN_01d30b30(&DAT_01d2e8e8,1,local_30,0);
        uVar5 = FUN_01d331a0(&PTR_FUN_01a5c280,1,local_40);
        *(undefined8 *)(param_1 + 0xff0) = uVar5;
        local_68 = *(longlong *)(param_1 + 0xff0);
        *(undefined1 *)(*(longlong *)(local_68 + 0x90) + 0x98) = 1;
        *(undefined1 *)(local_68 + 0x99) = 1;
        *(undefined1 *)(local_68 + 0xa0) = 1;
        FUN_00410f20(local_40);
        FUN_00410f20(local_30);
        local_90 = FUN_00498310(0xffffff9c,0xffffff9c);
        (**(code **)(**(longlong **)(param_1 + 0xff0) + 200))
                  (*(longlong **)(param_1 + 0xff0),&local_90);
        *(undefined4 *)(param_1 + 0x1018) = 0xffffff9c;
        *(undefined4 *)(param_1 + 0x101c) = 0xffffff9c;
        uVar4 = FUN_01a5ee60(*(undefined8 *)(param_1 + 0xff0),*(undefined8 *)(param_1 + 0x780));
        *(undefined4 *)(param_1 + 0x1014) = uVar4;
        uVar4 = FUN_01a5eed0(*(undefined8 *)(param_1 + 0xff0),*(undefined8 *)(param_1 + 0x780));
        *(undefined4 *)(param_1 + 0x1010) = uVar4;
        plVar6 = *(longlong **)(param_1 + 0xff0);
        plVar6[0x11] = *(longlong *)(param_1 + 0x798);
        (**(code **)(*plVar6 + 0xe8))(plVar6);
        FUN_01a5f250(*(undefined8 *)(param_1 + 0xff0));
        FUN_0064e140(param_1,5);
        iVar1 = *(int *)(param_1 + 0x1018);
        iVar2 = *(int *)(param_1 + 0x101c);
        local_b8 = 0;
        FUN_00498350(&local_a0,0,0,0);
        local_b8 = iVar2 + *(int *)(param_1 + 0x1010);
        local_b0 = &local_a0;
        FUN_01a8dd40(*(undefined8 *)(param_1 + 0x780),iVar1,iVar2,iVar1 + *(int *)(param_1 + 0x1014)
                    );
        *(undefined1 *)(param_1 + 0x7a8) = 6;
      }
    }
  }
LAB_01a7f859:
  FUN_00414480(&local_88);
  return;
}

