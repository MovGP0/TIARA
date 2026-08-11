/* Ghidra address: 01c70d20 */
/* Ghidra symbol: FUN_01c70d20 */


void FUN_01c70d20(longlong *param_1,undefined8 param_2,char param_3,ushort param_4,
                 undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  bool bVar2;
  undefined4 uVar3;
  char cVar4;
  short sVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined7 uVar11;
  undefined1 auStack_e8 [32];
  uint *local_c8;
  undefined1 *local_c0;
  char local_b1;
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
  undefined8 local_48;
  char local_3f;
  undefined1 local_3e;
  char local_3d;
  uint local_3c;
  uint local_38;
  undefined1 local_34 [4];
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  longlong *local_20;
  
  local_b0 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_98 = 0;
  local_80 = 0;
  local_88 = 0;
  local_78 = 0;
  local_68 = 0;
  local_70 = 0;
  local_60 = 0;
  local_b1 = param_3;
  FUN_01a64180(param_1[0x4a2]);
  if ((((param_4 & 0x10) != 0) && ((param_4 & 8) != 0)) &&
     (*(char *)(param_1[0x4f5] + 0xd1) == '\0')) {
    lVar6 = FUN_00498310(param_5,param_6);
    param_1[0x49a] = lVar6;
    lVar6 = FUN_00498310(*(undefined4 *)(*(longlong *)(param_1[0x142] + 0x498) + 0x14),
                         *(undefined4 *)(*(longlong *)(param_1[0x142] + 0x4b0) + 0x14));
    param_1[0x498] = lVar6;
    FUN_01995220(param_1[0x4f5],0);
    *(undefined1 *)((longlong)param_1 + 0x24fa) = 1;
    goto LAB_01c71d9a;
  }
  if (((local_b1 == '\0') && ((param_4 & 0x40) == 0)) &&
     ((param_1[0x4f5] != 0 && (lVar6 = FUN_0198d430(param_1[0x4f5]), lVar6 != 0)))) {
    local_2c = 0xffffffff;
    plVar1 = (longlong *)param_1[0x36b];
    if (((plVar1 == (longlong *)0x0) ||
        (cVar4 = (**(code **)(*plVar1 + 0x40))(plVar1,param_5,param_6), cVar4 != '\0')) &&
       (*(int *)((longlong)param_1 + 0x17f4) == 0)) {
      cVar4 = FUN_01c8cee0(param_1);
      if (cVar4 != '\0') {
        if (*PTR_DAT_02003b28 != '\0') {
          FUN_01994230(param_1[0x4f5]);
        }
        goto LAB_01c71d9a;
      }
      uVar7 = FUN_0198d430(param_1[0x4f5]);
      local_c8 = &local_28;
      FUN_01a982d0(uVar7,param_5,param_6,&local_24);
      local_38 = local_24;
      local_3c = local_28;
      local_20 = (longlong *)0x0;
      local_c8 = &local_30;
      cVar4 = FUN_019a4930(param_1[0x4f5],local_24,local_28,&local_20);
      if ((cVar4 == '\0') && (*PTR_DAT_020052b8 == '\0')) {
        FUN_01b1cd00(&local_38,&local_3c);
        local_c8 = &local_2c;
        local_c0 = &local_3e;
        FUN_019a4820(param_1[0x4f5],local_38,local_3c,&local_20);
        if (((*PTR_DAT_02004270 != '\0') && ((local_2c != 0xffffffff && ((param_4 & 1) == 0)))) &&
           ((*PTR_DAT_020052b8 == '\0' ||
            ((cVar4 = FUN_0198a580(local_20), cVar4 != '\x04' ||
             (sVar5 = (**(code **)(*local_20 + 0xf8))(local_20), sVar5 != 0x68)))))) {
          local_c8 = (uint *)CONCAT44(local_c8._4_4_,param_5);
          local_c0 = (undefined1 *)CONCAT44(local_c0._4_4_,param_6);
          uVar7 = FUN_01367a60(&PTR_FUN_013606d0,1,param_1,local_3e);
          FUN_01c6cee0(param_1,uVar7);
          FUN_01c6d670(param_1,param_1[0x178]);
          goto LAB_01c71d9a;
        }
      }
      if (local_20 == (longlong *)0x0) {
        local_20 = (longlong *)
                   (**(code **)(*(longlong *)param_1[0x4f5] + 0x58))
                             ((longlong *)param_1[0x4f5],local_24,local_28);
      }
      cVar4 = FUN_01d3bb80(local_20);
      if ((cVar4 == '\0') && (cVar4 = FUN_01d3bdc0(local_20), cVar4 == '\0')) {
        if (((*PTR_DAT_020052b8 == '\0') ||
            (((local_20 == (longlong *)0x0 || (cVar4 = FUN_0198a580(local_20), cVar4 != '\x04')) ||
             (cVar4 = (**(code **)(*local_20 + 0x278))(local_20), cVar4 == '\0')))) ||
           (*(char *)((longlong)local_20 + 0xaa) == '\0')) {
          FUN_01994230(param_1[0x4f5]);
        }
        else {
          cVar4 = (**(code **)(*local_20 + 0xc0))(local_20);
          if (cVar4 == '\0') {
            FUN_019943c0(param_1[0x4f5],local_20);
            FUN_01993f30(param_1[0x4f5],local_20,1,1);
          }
          FUN_0041ddd0(&local_60,PTR_PTR_02003228);
          lVar6 = param_1[0x4f5];
          uVar7 = FUN_017bb120(lVar6);
          FUN_017baeb0(&PTR_FUN_017ba830,local_60,lVar6,uVar7);
          local_c8 = (uint *)CONCAT71(local_c8._1_7_,1);
          local_c0 = (undefined1 *)((ulonglong)local_c0 & 0xffffffffffffff00);
          (**(code **)(*param_1 + 0x2f8))(param_1,local_24,local_28,1);
        }
        goto LAB_01c71d9a;
      }
      if (((local_20 == (longlong *)0x0) || (cVar4 = FUN_0198a580(local_20), cVar4 != '\x05')) ||
         ((param_4 & 1) == 0)) {
        if ((local_20 == (longlong *)0x0) || (((param_4 & 1) != 0 && (local_2c == 0xffffffff)))) {
          if ((param_4 & 4) == 0) {
            FUN_01994230(param_1[0x4f5]);
            FUN_0199df30(param_1[0x4f5],0,0);
          }
          (**(code **)(*param_1 + 0x300))(param_1,local_24,local_28);
        }
        else if ((param_4 & 4) == 0) {
          cVar4 = FUN_0198a580(local_20);
          if (((cVar4 == '\x04') && ((char)local_20[0xac] == '\0')) &&
             (cVar4 = (**(code **)(*local_20 + 0x2d8))(local_20), cVar4 != '\0')) {
            uVar7 = FUN_0198d430(param_1[0x4f5]);
            cVar4 = (**(code **)(*(longlong *)local_20[0x33] + 0x20))
                              ((longlong *)local_20[0x33],uVar7,local_24,local_28);
            if (cVar4 != '\0') {
              if (*PTR_DAT_020052b8 == '\0') {
                FUN_019af250(param_1[0x4f1]);
                FUN_01c70c60(auStack_e8);
                DAT_03566810 = local_20;
              }
              goto LAB_01c71d9a;
            }
          }
          if (((*PTR_DAT_020052b8 != '\0') && ((param_4 & 1) != 0)) &&
             ((cVar4 = FUN_0198a580(local_20), cVar4 == '\x04' &&
              (sVar5 = (**(code **)(*local_20 + 0xf8))(local_20), sVar5 == 0x68)))) {
            local_c8 = (uint *)CONCAT44(local_c8._4_4_,param_5);
            local_c0 = (undefined1 *)CONCAT44(local_c0._4_4_,param_6);
            uVar7 = FUN_01367a60(&PTR_FUN_013606d0,1,param_1,local_3e);
            FUN_01c6cee0(param_1,uVar7);
            FUN_01c6d670(param_1,param_1[0x178]);
            goto LAB_01c71d9a;
          }
          cVar4 = FUN_0198a580(local_20);
          if (cVar4 == '\b') {
            uVar7 = FUN_0198d430(param_1[0x4f5]);
            uVar7 = FUN_01a97e00(uVar7);
            local_c8 = (uint *)CONCAT44(local_c8._4_4_,local_28);
            cVar4 = FUN_01a5e850(local_20[5],uVar7,param_1[0x4f1],local_24);
            if (cVar4 != '\0') {
              uVar8 = FUN_0198d430(param_1[0x4f5]);
              FUN_01a97ea0(uVar8,uVar7);
              goto LAB_01c71d9a;
            }
            uVar8 = FUN_0198d430(param_1[0x4f5]);
            FUN_01a97ea0(uVar8,uVar7);
          }
          cVar4 = (**(code **)(*local_20 + 0xc0))(local_20);
          if (cVar4 == '\0') {
            FUN_019943c0(param_1[0x4f5],local_20);
            FUN_01993f30(param_1[0x4f5],local_20,1,1);
            cVar4 = (**(code **)(*local_20 + 0x118))(local_20);
            if (cVar4 != '\0') {
              FUN_017ff4f0(local_20,&local_70);
              local_c8 = (uint *)&DAT_01c71e1c;
              FUN_00416cd0(&local_68,3,L"SelectPart(",local_70);
              FUN_01b1e860(local_68,1);
            }
          }
          if (((*PTR_DAT_020052b8 != '\0') && (cVar4 = FUN_0198a580(local_20), cVar4 == '\x05')) &&
             (local_30 == 0xffffffff)) goto LAB_01c71d9a;
          FUN_0041ddd0(&local_78,PTR_PTR_02003228);
          lVar6 = param_1[0x4f5];
          uVar7 = FUN_017bb120(lVar6);
          FUN_017baeb0(&PTR_FUN_017ba830,local_78,lVar6,uVar7);
          local_c8 = (uint *)CONCAT71(local_c8._1_7_,1);
          local_c0 = (undefined1 *)((ulonglong)local_c0 & 0xffffffffffffff00);
          (**(code **)(*param_1 + 0x2f8))(param_1,local_24,local_28,1);
        }
        else {
          cVar4 = (**(code **)(*local_20 + 0xc0))(local_20);
          if (cVar4 == '\0') {
            FUN_01993f30(param_1[0x4f5],local_20,1,1);
            cVar4 = (**(code **)(*local_20 + 0x118))(local_20);
            if (cVar4 != '\0') {
              FUN_017ff4f0(local_20,&local_98);
              local_c8 = (uint *)&DAT_01c71e1c;
              FUN_00416cd0(&local_90,3,L"SelectPart(",local_98);
              FUN_01b1e860(local_90,1);
            }
            if (((*PTR_DAT_020052b8 != '\0') && (cVar4 = FUN_0198a580(local_20), cVar4 == '\x05'))
               && (local_30 == 0xffffffff)) goto LAB_01c71d9a;
            FUN_0041ddd0(&local_a0,PTR_PTR_02003228);
            lVar6 = param_1[0x4f5];
            uVar7 = FUN_017bb120(lVar6);
            FUN_017baeb0(&PTR_FUN_017ba830,local_a0,lVar6,uVar7);
            local_c8 = (uint *)CONCAT71(local_c8._1_7_,1);
            local_c0 = (undefined1 *)((ulonglong)local_c0 & 0xffffffffffffff00);
            (**(code **)(*param_1 + 0x2f8))(param_1,local_24,local_28,1);
          }
          else {
            FUN_01993f30(param_1[0x4f5],local_20,0,0);
            cVar4 = (**(code **)(*local_20 + 0x118))(local_20);
            if (cVar4 != '\0') {
              FUN_017ff4f0(local_20,&local_88);
              local_c8 = (uint *)&LAB_01c71e30;
              FUN_00416cd0(&local_80,3,L"SelectPart(",local_88);
              FUN_01b1e860(local_80,1);
            }
          }
        }
      }
      else {
        cVar4 = (**(code **)(*local_20 + 0xc0))(local_20);
        if (cVar4 == '\0') {
          FUN_019ad730(param_1[0x4f5],local_20,1);
        }
        else {
          FUN_019ad730(param_1[0x4f5],local_20,0);
        }
      }
    }
  }
  if ((local_b1 != '\x01') || ((param_4 & 0x40) != 0)) goto LAB_01c71d9a;
  *(undefined8 *)(param_1[0x1bc] + 0x18) = 0;
  if ((param_1[0x4f5] == 0) || (lVar6 = FUN_0198d430(param_1[0x4f5]), lVar6 == 0))
  goto LAB_01c71d9a;
  if ((param_1[0x36b] == 0) && (*(int *)((longlong)param_1 + 0x17f4) == 0)) {
    uVar7 = FUN_0198d430(param_1[0x4f5]);
    local_c8 = &local_28;
    FUN_01a982d0(uVar7,param_5,param_6,&local_24);
    local_20 = (longlong *)
               (**(code **)(*(longlong *)param_1[0x4f5] + 0x58))
                         ((longlong *)param_1[0x4f5],local_24,local_28);
    if (local_20 != (longlong *)0x0) {
      if ((param_4 & 4) == 0) {
        cVar4 = (**(code **)(*local_20 + 0xc0))(local_20);
        if (cVar4 == '\0') {
          FUN_019943c0(param_1[0x4f5],local_20);
          FUN_01993f30(param_1[0x4f5],local_20,1,1);
        }
      }
      else {
        cVar4 = (**(code **)(*local_20 + 0xc0))(local_20);
        if (cVar4 == '\0') {
          FUN_01993f30(param_1[0x4f5],local_20,1,1);
        }
        else {
          FUN_01993f30(param_1[0x4f5],local_20,0,0);
        }
      }
      *(longlong **)(param_1[0x1bc] + 0x18) = local_20;
      if ((*PTR_DAT_020052b8 != '\0') && (cVar4 = FUN_0199c830(local_20), cVar4 != '\0')) {
        local_a8 = FUN_00498310(param_5,param_6);
        uVar9 = FUN_0064d1f0(param_1[0x142],&local_a8);
        local_48._4_4_ = (undefined4)(uVar9 >> 0x20);
        uVar3 = local_48._4_4_;
        local_48 = uVar9;
        (**(code **)(*(longlong *)param_1[0x1bc] + 0xa8))
                  ((longlong *)param_1[0x1bc],uVar9 & 0xffffffff,uVar3);
      }
    }
    if (*PTR_DAT_020052b8 == '\0') {
      local_a8 = FUN_00498310(param_5,param_6);
      local_50 = FUN_0064d1f0(param_1[0x142],&local_a8);
      lVar6 = FUN_01993ec0(param_1[0x4f5]);
      if ((lVar6 == 0) || (cVar4 = FUN_0198a580(lVar6), cVar4 != '\x04')) {
LAB_01c71bef:
        bVar2 = false;
        uVar11 = 0;
      }
      else {
        cVar4 = FUN_0160c160(lVar6);
        if (cVar4 == '\0') {
          FUN_015fca00(&local_b0,0,0);
          local_c8 = (uint *)&local_3f;
          cVar4 = FUN_015f5c70(local_b0,lVar6,0xffff,local_34);
          if (cVar4 == '\0') goto LAB_01c71bef;
        }
        uVar11 = (undefined7)((ulonglong)lVar6 >> 8);
        bVar2 = true;
      }
      if ((bVar2) && (cVar4 = FUN_0160c160(lVar6), cVar4 != '\0' || local_3f != '\0')) {
        uVar9 = CONCAT71(uVar11,1);
      }
      else {
        uVar9 = 0;
      }
      FUN_007e2da0(param_1[0x2e2],uVar9 & 0xffffffff);
      FUN_007e2f80(param_1[0x2e2],uVar9 & 0xffffffff);
      if ((char)uVar9 != '\0') {
        cVar4 = FUN_0160c160(lVar6);
        lVar10 = lVar6;
        if (cVar4 != '\0') {
          lVar10 = FUN_0160ed90(lVar6);
        }
        *(longlong *)(param_1[0x2e2] + 0x18) = lVar10;
      }
      if ((lVar6 != 0) && (cVar4 = FUN_0198a580(lVar6), cVar4 == '\x04')) {
        FUN_0160c2f0(lVar6,&local_3d);
      }
      FUN_007e2da0(param_1[0x2e8],local_3d);
      FUN_007e2f80(param_1[0x2e8],local_3d);
      if (local_3d != '\0') {
        *(longlong *)(param_1[0x2e8] + 0x18) = lVar6;
      }
      (**(code **)(*(longlong *)param_1[0x181] + 0xa8))
                ((longlong *)param_1[0x181],local_50 & 0xffffffff,local_50._4_4_);
    }
  }
  if (((param_1[0x36b] != 0) && (*PTR_DAT_020052b8 == '\0')) && ((param_4 & 4) != 0)) {
    local_a8 = FUN_00498310(param_5,param_6);
    uVar9 = FUN_0064d1f0(param_1[0x142],&local_a8);
    local_58._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar3 = local_58._4_4_;
    local_58 = uVar9;
    (**(code **)(*(longlong *)param_1[0x181] + 0xa8))
              ((longlong *)param_1[0x181],uVar9 & 0xffffffff,uVar3);
  }
LAB_01c71d9a:
  FUN_00414480(&local_b0);
  FUN_00414560(&local_a0,9);
  return;
}

