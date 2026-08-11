/* Ghidra address: 0080ec80 */
/* Ghidra symbol: FUN_0080ec80 */


void FUN_0080ec80(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  code *pcVar7;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  int local_a4 [2];
  int local_9c;
  char local_91;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_c0 = 0;
  local_c8 = 0;
  local_30[0] = *param_2;
  FUN_00417580(&local_90,&DAT_00636c90);
  *(undefined1 *)(param_1 + 0xd0) = 0;
  local_58 = 0;
  if ((*(char *)(param_1 + 0x108) != '\0') && (*(longlong *)(param_1 + 0xd8) != 0)) {
    cVar2 = FUN_007f9770(*(undefined1 *)(param_1 + 0x192));
    if (cVar2 != '\0') {
      uVar5 = FUN_0064acf0(local_30,1);
      lVar6 = FUN_00809680(uVar5);
      if (*(longlong *)(param_1 + 0xd8) == lVar6) {
        lVar6 = FUN_0064fd00(*(undefined8 *)(param_1 + 0xd8));
        if (lVar6 == 0) {
          local_90 = *(undefined8 *)(param_1 + 0xd8);
          local_80 = local_30[0];
          iVar4 = FUN_0080e890(auStack_f8);
          local_80 = CONCAT44(local_80._4_4_ + iVar4,(undefined4)local_80);
          local_78 = FUN_00807f90(DAT_02012670);
          local_74 = *(undefined4 *)(param_1 + 0xd4);
          FUN_0064d000(*(undefined8 *)(param_1 + 0xd8),&local_b8);
          local_70 = local_b8;
          local_68 = uStack_b0;
          local_38 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0xd8))
                               (*(longlong **)(param_1 + 0xd8));
          local_40 = 0;
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xd8) + 0x78);
          if (plVar1 == (longlong *)0x0) {
            lVar6 = *(longlong *)(param_1 + 0xd8);
            cVar2 = FUN_004113d0(lVar6,&PTR_FUN_00640c18);
            if ((cVar2 != '\0') && (*(longlong *)(lVar6 + 0x358) != 0)) {
              thunk_FUN_0415f9d2(*(undefined8 *)(lVar6 + 0x358),&local_40);
            }
          }
          else {
            local_40 = (**(code **)(*plVar1 + 0xd8))(plVar1);
          }
          FUN_00423b50(&local_70,(int)local_40 - (int)local_38,local_40._4_4_ - local_38._4_4_);
          local_60 = FUN_0064d3a0(*(undefined8 *)(param_1 + 0xd8),local_30);
          FUN_00809630(&local_c8,*(undefined8 *)(param_1 + 0xd8));
          FUN_00648720(&local_c0,local_c8);
          FUN_00414b50(&local_50,local_c0);
          local_54 = *(undefined4 *)(param_1 + 0xf0);
          local_88 = PTR_PTR_01e13fa8;
          local_48 = 0;
          lVar6 = FUN_0064fca0(*(undefined8 *)(param_1 + 0xd8),0xb030,0,&local_90);
          local_91 = lVar6 == 0;
          if (((bool)local_91) && (*(longlong *)(param_1 + 0x2b0) != 0)) {
            (**(code **)(param_1 + 0x2b0))
                      (*(undefined8 *)(param_1 + 0x2b8),&local_50,&local_91,&local_90);
          }
          if ((local_91 == '\0') || (*(longlong *)(param_1 + 0xd8) == 0)) {
            uVar3 = 0;
          }
          else {
            uVar3 = 1;
          }
          *(undefined1 *)(param_1 + 0xd0) = uVar3;
          if ((*(char *)(param_1 + 0xd0) != '\0') && (local_50 != 0)) {
            FUN_0080eae0(auStack_f8,local_88);
            (**(code **)(**(longlong **)(param_1 + 0x100) + 0x140))
                      (*(longlong **)(param_1 + 0x100),
                       *(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0xb1));
            local_d8 = local_48;
            (**(code **)(**(longlong **)(param_1 + 0x100) + 0x290))
                      (*(longlong **)(param_1 + 0x100),local_a4,local_78,local_50);
            FUN_00423b50(local_a4,local_80 & 0xffffffff,local_80._4_4_);
            uVar5 = *(undefined8 *)(param_1 + 0x100);
            pcVar7 = (code *)FUN_00411550(uVar5,0xffc5);
            cVar2 = (*pcVar7)(uVar5);
            if (cVar2 != '\0') {
              iVar4 = FUN_0080eb50(auStack_f8,local_50);
              local_a4[0] = local_a4[0] - (iVar4 + 5);
              local_9c = local_9c - (iVar4 + 5);
            }
            uVar5 = FUN_0064d1f0(*(undefined8 *)(param_1 + 0xd8),&local_70);
            *(undefined8 *)(param_1 + 0xe0) = uVar5;
            uVar5 = FUN_0064d1f0(*(undefined8 *)(param_1 + 0xd8),&local_68);
            *(undefined8 *)(param_1 + 0xe8) = uVar5;
            FUN_0064e030(*(undefined8 *)(param_1 + 0x100),local_74);
            (**(code **)(**(longlong **)(param_1 + 0x100) + 0x288))
                      (*(longlong **)(param_1 + 0x100),local_a4,local_50,local_48);
            FUN_008097f0();
            if (local_58 < 1) {
              FUN_0080e4f0(param_1,local_54,1);
            }
            else {
              FUN_0080e4f0(param_1,local_58,0);
            }
            goto LAB_0080f184;
          }
        }
      }
    }
  }
  if (local_58 < 1) {
    FUN_0080e820(param_1);
  }
  else {
    FUN_0080e4f0(param_1,local_58,0);
  }
LAB_0080f184:
  FUN_00414560(&local_c8,2);
  FUN_00417740(&local_90,&DAT_00636c90);
  return;
}

