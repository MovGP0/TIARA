/* Ghidra address: 01742a00 */
/* Ghidra symbol: FUN_01742a00 */


void FUN_01742a00(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                 undefined1 param_5,char param_6)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong *local_res18;
  undefined8 local_res20;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f0;
  int local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined1 local_c2;
  undefined1 local_c1;
  longlong local_c0;
  longlong local_b8;
  longlong *local_a8;
  undefined1 local_9f;
  undefined1 local_9e;
  undefined1 local_9d;
  undefined4 local_9c;
  undefined8 local_98;
  double local_90;
  char local_81;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined8 local_70;
  short local_65;
  short local_63;
  undefined1 local_61;
  undefined1 local_60;
  undefined1 local_5f;
  char local_5e;
  undefined4 local_5d;
  undefined4 local_55;
  undefined1 *local_50;
  undefined8 local_48;
  uint local_3c;
  undefined8 local_38;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  longlong *local_20;
  
  local_d0 = auStack_128;
  local_d8 = 0;
  local_e0 = 0;
  local_48 = 0;
  local_a8 = (longlong *)0x0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_3);
  FUN_0041b910(local_res20);
  if ((((param_2 != (longlong *)0x0) && (cVar1 = FUN_0175ad40(param_1,param_2), cVar1 != '\0')) ||
      (local_res18 != (longlong *)0x0)) &&
     (lVar5 = *(longlong *)(param_1 + 0x28), *(char *)(lVar5 + 0xb) == '\0')) {
    if (param_6 == '\0') {
      local_e4 = *(int *)(param_1 + 0xd0);
      local_7c = 1;
      if (0 < local_e4) {
        do {
          local_c0 = param_1 + 8 + (longlong)local_7c * 0x30;
          sVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))
                            (*(longlong **)(param_1 + 0x28));
          if (sVar2 == 0x2c) {
            local_108 = (undefined1 *)((longlong)&local_38 + 4);
            local_100._0_1_ = local_res18 == (longlong *)0x0;
            local_f8._0_1_ = 1;
            FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0xc,0xfffffff8,&local_38);
            local_108 = local_2c;
            local_100._0_1_ = local_res18 == (longlong *)0x0;
            local_f8._0_1_ = 1;
            FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0x1c,0,local_30);
            local_108 = local_24;
            local_100 = CONCAT71(local_100._1_7_,local_res18 == (longlong *)0x0);
            local_f8 = CONCAT31(local_f8._1_3_,1);
            FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0xc,8,local_28);
          }
          else if (sVar2 == 0x71) {
            local_108 = (undefined1 *)((longlong)&local_38 + 4);
            local_100._0_1_ = local_res18 == (longlong *)0x0;
            local_f8._0_1_ = 1;
            FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),9,0xfffffff9,&local_38);
            local_108 = local_2c;
            local_100._0_1_ = local_res18 == (longlong *)0x0;
            local_f8._0_1_ = 1;
            FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0x17,0,local_30);
            local_108 = local_24;
            local_100 = CONCAT71(local_100._1_7_,local_res18 == (longlong *)0x0);
            local_f8 = CONCAT31(local_f8._1_3_,1);
            FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),9,7,local_28);
          }
          else if ((ushort)(sVar2 - 0x19aU) < 3) {
            if (local_7c == 1) {
              local_108 = (undefined1 *)((longlong)&local_38 + 4);
              local_100._0_1_ = local_res18 == (longlong *)0x0;
              local_f8._0_1_ = 1;
              FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0x14,0xfffffff8,&local_38);
              local_108 = local_2c;
              local_100._0_1_ = local_res18 == (longlong *)0x0;
              local_f8._0_1_ = 1;
              FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0x24,0,local_30);
              local_108 = local_24;
              local_100 = CONCAT71(local_100._1_7_,local_res18 == (longlong *)0x0);
              local_f8 = CONCAT31(local_f8._1_3_,1);
              FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0x14,8,local_28);
            }
            else {
              local_108 = (undefined1 *)((longlong)&local_38 + 4);
              local_100._0_1_ = local_res18 == (longlong *)0x0;
              local_f8._0_1_ = 1;
              FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0x14,0x18,&local_38);
              local_108 = local_2c;
              local_100._0_1_ = local_res18 == (longlong *)0x0;
              local_f8._0_1_ = 1;
              FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0x24,0x20,local_30);
              local_108 = local_24;
              local_100 = CONCAT71(local_100._1_7_,local_res18 == (longlong *)0x0);
              local_f8 = CONCAT31(local_f8._1_3_,1);
              FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0x14,0x28,local_28);
            }
          }
          else if (sVar2 == 0x19d) {
            if (local_7c == 1) {
              local_108 = (undefined1 *)((longlong)&local_38 + 4);
              local_100._0_1_ = local_res18 == (longlong *)0x0;
              local_f8._0_1_ = 1;
              FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0x14,0xffffffe8,&local_38);
              local_108 = local_2c;
              local_100._0_1_ = local_res18 == (longlong *)0x0;
              local_f8._0_1_ = 1;
              FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0x24,0xfffffff0,local_30);
              local_108 = local_24;
              local_100 = CONCAT71(local_100._1_7_,local_res18 == (longlong *)0x0);
              local_f8 = CONCAT31(local_f8._1_3_,1);
              FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0x14,0xfffffff8,local_28);
            }
            else {
              local_108 = (undefined1 *)((longlong)&local_38 + 4);
              local_100._0_1_ = local_res18 == (longlong *)0x0;
              local_f8._0_1_ = 1;
              FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0x14,0x10,&local_38);
              local_108 = local_2c;
              local_100._0_1_ = local_res18 == (longlong *)0x0;
              local_f8._0_1_ = 1;
              FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0x24,8,local_30);
              local_108 = local_24;
              local_100 = CONCAT71(local_100._1_7_,local_res18 == (longlong *)0x0);
              local_f8 = CONCAT31(local_f8._1_3_,1);
              FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0x24,0x18,local_28);
            }
          }
          if (param_2 != (longlong *)0x0) {
            uVar3 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2a8))
                              (*(longlong **)(param_1 + 0x28),param_2);
            (**(code **)(*param_2 + 0xb8))(param_2,uVar3);
            if ((*(char *)(param_1 + 9) == '\0') && (*(char *)(param_1 + 8) == '\0')) {
              if (*(int *)(local_c0 + 0x28) == 0) {
                *(undefined4 *)(local_c0 + 0x28) = *(undefined4 *)(local_c0 + 0x18);
              }
              if (*(char *)(local_c0 + 1) == '\0') {
                local_3c = FUN_01a9e0e0(*(undefined4 *)(local_c0 + 0x28),0x3fe8000000000000);
              }
              else {
                local_3c = FUN_01a9e0e0(*(undefined4 *)(local_c0 + 0x28),0x3ff4000000000000);
              }
              uVar3 = FUN_005fbf20(local_3c);
              (**(code **)(*param_2 + 200))(param_2,uVar3);
            }
            else {
              uVar3 = (**(code **)(*param_2 + 0xd0))(param_2,0);
              (**(code **)(*param_2 + 200))(param_2,uVar3);
            }
            FUN_01a99ff0(param_2,&local_38,2);
          }
          if (local_res18 != (longlong *)0x0) {
            if (*(int *)(local_c0 + 0x28) == 0) {
              *(undefined4 *)(local_c0 + 0x28) = *(undefined4 *)(local_c0 + 0x18);
            }
            if (*(char *)(param_1 + 8) == '\0') {
              uVar4 = FUN_01b23db0(local_7c + -1);
              uVar4 = FUN_01b27510(uVar4);
              local_20 = (longlong *)FUN_01b27660(uVar4);
              while (cVar1 = thunk_FUN_01b277d3(local_20), cVar1 != '\0') {
                local_98 = FUN_01b276b0(local_20);
                FUN_01a9dd40(&local_9f,local_98,0x3fe999999999999a);
                local_c1 = local_9d;
                local_c2 = local_9e;
                local_3c = (uint)CONCAT12(local_9f,CONCAT11(local_9e,local_9d));
                if (*(char *)(local_c0 + 1) == '\0') {
                  local_3c = FUN_01a9e0e0(local_3c,0x3fe8000000000000);
                }
                else {
                  local_3c = FUN_01a9e0e0(local_3c,0x3ff4000000000000);
                }
                local_108 = (undefined1 *)CONCAT44(local_108._4_4_,2);
                local_100 = CONCAT44(local_100._4_4_,1);
                local_f8 = 0x8000;
                local_f0 = local_3c;
                FUN_01244360(&local_a8,local_res18,local_res20,&local_38);
                uVar4 = FUN_01b23db0(local_7c + -1);
                FUN_01b263d0(uVar4,&local_e0,local_98);
                FUN_00416ba0(&local_d8,&LAB_017439bc,local_e0);
                (**(code **)(*local_a8 + 0x108))(local_a8,L"showif",local_d8);
              }
              if (local_20 != (longlong *)0x0) {
                (**(code **)(*local_20 + -0x20))(local_20,1);
              }
            }
            else {
              local_108 = (undefined1 *)CONCAT44(local_108._4_4_,2);
              local_100 = CONCAT44(local_100._4_4_,1);
              local_f8 = 0x8000;
              local_f0 = 0xffffff;
              FUN_01244360(&local_a8,local_res18,local_res20,&local_38);
            }
          }
          if (((*(char *)(param_1 + 0xb) != '\0') && (*(char *)(param_1 + 8) != '\0')) &&
             ((*PTR_DAT_020052b8 == '\0' || (*PTR_DAT_020023b0 == '\0')))) {
            FUN_0173d380(param_1,param_2,local_res18,local_res20);
          }
          local_7c = local_7c + 1;
          local_e4 = local_e4 + -1;
        } while (local_e4 != 0);
      }
    }
    else {
      uVar4 = FUN_01d06fb0(lVar5,*(undefined1 *)(lVar5 + 0xd1));
      *(undefined8 *)(param_1 + 200) = uVar4;
      if (((*(longlong *)(param_1 + 200) != 0) &&
          (cVar1 = FUN_01d07320(*(undefined8 *)(param_1 + 0x28)), -1 < cVar1)) &&
         (cVar1 = FUN_00c3d380(*(undefined8 *)(param_1 + 200),&local_70,&local_65), cVar1 != '\0'))
      {
        local_74 = FUN_00c3c520(local_61,local_60,local_5f);
        local_78 = FUN_00c3c540(local_61,local_60,local_5f,local_5e);
        local_90 = 0.0;
        local_80 = 0;
        local_9c = 0;
        iVar6 = *(int *)(param_1 + 0xd0);
        local_7c = 1;
        if (0 < iVar6) {
          do {
            local_b8 = param_1 + 8 + (longlong)local_7c * 0x30;
            if (*(int *)(local_b8 + 0x28) == 0) {
              *(undefined4 *)(local_b8 + 0x28) = *(undefined4 *)(local_b8 + 0x18);
            }
            if (*(char *)(local_b8 + 1) == '\0') {
              if (*(int *)(param_1 + 0xd0) == 1) {
                local_9c = FUN_01a9e1e0(local_9c,*(undefined4 *)(local_b8 + 0x18),0x3ff0000000000000
                                        ,0x3fe8000000000000);
              }
            }
            else {
              local_90 = local_90 + *(double *)(local_b8 + 0x20);
              local_80 = local_80 + 1;
              local_9c = FUN_01a9e1e0(local_9c,*(undefined4 *)(local_b8 + 0x18),0x3ff0000000000000,
                                      0x3ff4000000000000);
            }
            local_7c = local_7c + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        if (*(char *)(param_1 + 8) == '\0') {
          cVar1 = FUN_01d07320(*(undefined8 *)(param_1 + 0x28));
          *(int *)(param_1 + 0x10) = local_74 + cVar1;
        }
        else {
          cVar1 = FUN_01d07320(*(undefined8 *)(param_1 + 0x28));
          *(int *)(param_1 + 0x10) = local_78 + cVar1;
        }
        if (param_2 != (longlong *)0x0) {
          FUN_01a9d8b0(param_2,*(undefined1 *)(param_1 + 0x10));
          FUN_01a9a720(param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0xc),
                       *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x10));
          uVar3 = FUN_0173cca0(*(undefined8 *)(param_1 + 0x28),param_5,param_6);
          FUN_01a9a770(param_2,uVar3);
          FUN_01a9a780(param_2,*(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0xd1),
                       *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0xd3));
        }
        local_108 = (undefined1 *)CONCAT44(local_108._4_4_,local_5d);
        local_100 = local_70;
        local_f8 = CONCAT31(local_f8._1_3_,*(undefined1 *)(param_1 + 0x10));
        local_50 = (undefined1 *)FUN_01a9f060(local_61,local_60,local_5f,local_5e);
        if ((local_5e == '\0') && (*(char *)(param_1 + 8) != '\0')) {
          local_81 = '\x04';
          FUN_01a9e8f0(local_50,4,0);
        }
        else {
          if ((local_80 == 0) && (1 < *(int *)(param_1 + 0xd0))) {
            local_9c = 0xc0c0c0;
          }
          local_81 = '\x06';
          FUN_01a9e8f0(local_50,6,local_9c);
        }
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))
                  (*(longlong **)(param_1 + 0x20),local_50);
        if (((*(int *)(param_1 + 0x14) == *(int *)(param_1 + 0x10)) &&
            (local_81 == *(char *)(param_1 + 0x18))) &&
           (lVar5 = FUN_0040c770(local_90), *(int *)(param_1 + 0xd4) == lVar5)) {
          FUN_00410f20(local_50);
        }
        else {
          if (param_2 != (longlong *)0x0) {
            local_108 = local_50;
            local_100 = 0;
            local_f8 = CONCAT31(local_f8._1_3_,1);
            FUN_01a9f420(param_2,(longlong)local_65,(longlong)local_63,local_55);
          }
          *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
          *(char *)(param_1 + 0x18) = local_81;
        }
      }
    }
  }
  FUN_00414560(&local_e0,2);
  FUN_0041b800(&local_a8);
  FUN_00414480(&local_48);
  FUN_0041b800(&local_res18);
  FUN_0041b800(&local_res20);
  return;
}

