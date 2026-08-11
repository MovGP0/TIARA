/* Ghidra address: 01c691d0 */
/* Ghidra symbol: FUN_01c691d0 */


void FUN_01c691d0(longlong param_1,short param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  longlong local_88;
  short local_7a;
  int local_78;
  int local_74;
  longlong *local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  short *local_48;
  undefined8 local_40;
  undefined8 local_38;
  short *local_30 [2];
  
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = (short *)0x0;
  local_38 = 0;
  local_40 = 0;
  local_30[0] = (short *)0x0;
  local_88 = param_1;
  local_7a = param_2;
  FUN_00410f20(*(undefined8 *)(param_1 + 0x27a0));
  *(undefined8 *)(local_88 + 0x27a0) = 0;
  *(undefined4 *)(local_88 + 0x1b44) = 0xffffffff;
  *(undefined4 *)(local_88 + 0x1b48) = 0xffffffff;
  *(undefined4 *)(local_88 + 0x1920) = 2;
  *(undefined1 *)(local_88 + 0x2758) = 0;
  *(undefined1 *)(local_88 + 0x27b0) = 0;
  *(undefined1 *)(local_88 + 0x27b1) = 0;
  FUN_00414480(local_88 + 0x27b8);
  *(undefined1 *)(local_88 + 0x27c0) = 0;
  plVar5 = (longlong *)FUN_006d6380(*(undefined8 *)(local_88 + 0x1348));
  (**(code **)(*plVar5 + 0x90))(plVar5);
  iVar2 = FUN_00c858b0(*(undefined8 *)PTR_DAT_02002c40,0);
  local_78 = 0;
  if (-1 < iVar2 + -1) {
    do {
      local_98 = local_98 & 0xffffffffffffff00;
      FUN_00c85a00(*(undefined8 *)PTR_DAT_02002c40,local_30,local_78,*(undefined8 *)PTR_DAT_02001f18
                  );
      if (*local_30[0] == local_7a) {
        plVar5 = (longlong *)FUN_006d6380(*(undefined8 *)(local_88 + 0x1348));
        local_98 = local_98 & 0xffffffffffffff00;
        FUN_00c85a00(*(undefined8 *)PTR_DAT_02002c40,&local_40,local_78,
                     *(undefined8 *)PTR_DAT_02001f18);
        FUN_00416dc0(&local_38,local_40,2,0xff);
        (**(code **)(*plVar5 + 0x78))(plVar5,local_38);
      }
      local_78 = local_78 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  (**(code **)(**(longlong **)(local_88 + 0x1348) + 0x278))(*(longlong **)(local_88 + 0x1348),0);
  iVar2 = (**(code **)(**(longlong **)(*(longlong *)(local_88 + 0x6d8) + 0x4f0) + 0x28))();
  local_78 = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar5 = *(longlong **)(*(longlong *)(local_88 + 0x6d8) + 0x4f0);
      uVar6 = (**(code **)(*plVar5 + 0x30))(plVar5,local_78);
      FUN_00418590(uVar6,&DAT_00c7fd00);
      local_78 = local_78 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  (**(code **)(**(longlong **)(local_88 + 0x6d8) + 0x278))(*(longlong **)(local_88 + 0x6d8));
  if (*(longlong *)PTR_DAT_02002c40 != 0) {
    iVar2 = FUN_00c856a0(*(undefined8 *)PTR_DAT_02002c40,0);
    local_78 = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar7 = FUN_00c856d0(*(undefined8 *)PTR_DAT_02002c40,local_78,0);
        local_98 = local_98 & 0xffffffffffffff00;
        FUN_00c85a00(*(undefined8 *)PTR_DAT_02002c40,&local_48,*(undefined4 *)(lVar7 + 0x54),
                     *(undefined8 *)PTR_DAT_02001f18);
        if (*local_48 == local_7a) {
          if (*(int *)(lVar7 + 0x50) < 0) {
            uVar6 = FUN_00c856d0(*(undefined8 *)PTR_DAT_02002c40,local_78,0);
            local_70 = (longlong *)FUN_00c81e70(uVar6);
            cVar1 = FUN_004113d0(local_70,&PTR_FUN_01b46460);
            if ((((cVar1 != '\0') ||
                 (cVar1 = FUN_004113d0(local_70,&PTR_FUN_01b44a88), cVar1 != '\0')) ||
                (cVar1 = FUN_004113d0(local_70,&PTR_FUN_01b48018), cVar1 != '\0')) ||
               (cVar1 = FUN_004113d0(local_70,&PTR_FUN_01b491d8), cVar1 != '\0')) {
              iVar3 = (**(code **)(*local_70 + 0x28))(local_70,0);
              local_74 = 0;
              if (-1 < iVar3 + -1) {
                do {
                  local_68 = FUN_00418560(0x10,&DAT_00c7fd00);
                  FUN_00414ad0(local_68,&LAB_01c69768);
                  uVar4 = (**(code **)(*local_70 + 0x40))(local_70,local_74);
                  *(undefined4 *)(local_68 + 8) = uVar4;
                  cVar1 = FUN_01c691c0(auStack_b8,uVar4);
                  if (cVar1 == '\0') {
                    local_98 = 0;
                    (**(code **)(*local_70 + 0x30))
                              (local_70,&local_58,local_74,*(undefined8 *)PTR_DAT_02001f18);
                    plVar5 = *(longlong **)(*(longlong *)(local_88 + 0x6d8) + 0x4f0);
                    (**(code **)(*plVar5 + 0x80))(plVar5,local_58);
                  }
                  local_74 = local_74 + 1;
                  iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
              }
            }
          }
          else {
            local_68 = FUN_00418560(0x10,&DAT_00c7fd00);
            FUN_00414ad0(local_68,*(undefined8 *)(lVar7 + 0x30));
            *(undefined4 *)(local_68 + 8) = *(undefined4 *)(lVar7 + 0x50);
            local_98 = local_98 & 0xffffffffffffff00;
            FUN_00c858e0(*(undefined8 *)PTR_DAT_02002c40,&local_50,local_78,
                         *(undefined8 *)PTR_DAT_02001f18);
            plVar5 = *(longlong **)(*(longlong *)(local_88 + 0x6d8) + 0x4f0);
            (**(code **)(*plVar5 + 0x80))(plVar5,local_50);
          }
        }
        local_78 = local_78 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    lVar7 = *(longlong *)(local_88 + 0x6d8);
    plVar5 = *(longlong **)(lVar7 + 0x4f0);
    (**(code **)(*plVar5 + 0x18))(plVar5,&local_60,0);
    FUN_0064de00(lVar7,local_60);
    plVar5 = *(longlong **)(*(longlong *)(local_88 + 0x6d8) + 0x4f0);
    lVar7 = (**(code **)(*plVar5 + 0x30))(plVar5,0);
    *(undefined4 *)(local_88 + 0x1920) = *(undefined4 *)(lVar7 + 8);
    *(short *)(local_88 + 0x1810) = local_7a;
    iVar2 = FUN_006d5120(*(undefined8 *)(local_88 + 0x1348));
    if (-1 < iVar2) {
      uVar4 = FUN_006d5120(*(undefined8 *)(local_88 + 0x1348));
      FUN_01c72b30(local_88,uVar4);
    }
  }
  FUN_00414560(&local_60,7);
  return;
}

