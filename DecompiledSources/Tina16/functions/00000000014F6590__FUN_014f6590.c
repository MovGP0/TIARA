/* Ghidra address: 014f6590 */
/* Ghidra symbol: FUN_014f6590 */


char FUN_014f6590(longlong param_1,byte param_2,longlong param_3,undefined8 param_4)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined8 local_res20;
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  undefined1 *local_120;
  ulonglong local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  longlong local_90;
  longlong *local_88;
  ulonglong local_80;
  undefined1 *local_78;
  undefined1 local_6a;
  undefined1 local_69 [15];
  char local_5a;
  char local_59;
  undefined8 local_58;
  int local_4c;
  undefined8 local_40;
  longlong local_30;
  longlong local_28;
  char local_19;
  
  local_a0 = auStack_148;
  local_c0 = 0;
  local_c8 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_78 = (undefined1 *)0x0;
  local_80 = 0;
  local_58 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  local_5a = '\0';
  local_19 = '\0';
  local_59 = 1;
  local_28 = 0;
  if (param_3 == 0) {
    FUN_00414480(&local_80);
  }
  else {
    FUN_00441640(&local_b0,*(undefined8 *)(param_3 + 8));
    FUN_0044f8b0(&local_a8,local_b0);
    FUN_00441920(&local_80,local_a8);
  }
  uVar7 = (ulonglong)param_2;
  local_128 = (undefined1 *)((ulonglong)local_128 & 0xffffffffffffff00);
  local_120 = (undefined1 *)CONCAT71(local_120._1_7_,param_2);
  local_118 = local_80;
  local_110 = local_res20;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_28 = FUN_01b06050(&PTR_FUN_014f4f88,1,param_1,0xc);
  *(longlong *)(local_28 + 0x1320) = param_3;
  FUN_014f54e0(local_28,uVar7);
  uVar7 = CONCAT71((int7)(uVar7 >> 8),0xc);
  FUN_016f1c10(local_28,uVar7);
  if (param_2 == 0) {
    uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
    local_88 = (longlong *)
               FUN_014f4d70(&PTR_FUN_014f4788,uVar7,*(undefined8 *)PTR_DAT_02004030,local_28);
    iVar4 = (**(code **)(*local_88 + 0x2d0))(local_88);
    local_5a = iVar4 == 2;
    FUN_00410f20(local_88);
  }
  if (local_5a == '\0') {
    uVar5 = FUN_00409570((longlong)(*(int *)(local_28 + 0x691) * 8));
    *(undefined8 *)(local_28 + 0x13b8) = uVar5;
    if (param_3 == 0) {
      FUN_00414480(&local_78);
    }
    else {
      uVar7 = *(ulonglong *)(param_3 + 8);
      FUN_00441640(&local_78,uVar7);
    }
    uVar5 = CONCAT71((int7)(uVar7 >> 8),0xc);
    FUN_017d18e0(local_28,uVar5);
    uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),7);
    local_128 = local_78;
    local_120 = (undefined1 *)CONCAT71(local_120._1_7_,1);
    local_118 = local_118 & 0xffffffffffffff00;
    FUN_017cc620(local_28,uVar5,0,*(undefined8 *)(param_1 + 0x360));
    *(undefined8 *)(*(longlong *)(local_28 + 0xb0) + 0x30) = *(undefined8 *)(local_28 + 0x98a);
    local_90 = local_28 + 0x5d8;
    bVar1 = *(byte *)(local_28 + 0x5db);
    if (bVar1 < 8) {
      bVar8 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) << (bVar1 & 0x1f) & 0xdeU) != 0;
    }
    else {
      bVar8 = false;
    }
    if (bVar8) {
      if (bVar1 == 1) {
        local_40 = *(undefined8 *)(local_28 + 0x6a0);
      }
      else if (bVar1 == 2) {
        if (*(int *)(*(longlong *)(*(longlong *)(local_28 + 0xa0) + 0x470) + 0x10) < 2) {
          if (((*(longlong *)(local_28 + 0xa09) == 0) && (*(char *)(local_28 + 0xa15) == '\0')) ||
             (*(int *)(*(longlong *)(*(longlong *)(local_28 + 0xa0) + 0x470) + 0x10) == 0)) {
            FUN_01b04ef0(0x10e,0x1588,*(undefined8 *)(local_28 + 0x1310),0);
          }
          if (*(longlong *)(local_90 + 0x431) == 0) {
            FUN_004169a0(&local_b8,local_90 + 0x43d);
            plVar2 = *(longlong **)(*(longlong *)(local_28 + 0xa0) + 0x438);
            local_4c = (**(code **)(*plVar2 + 0xb8))(plVar2,local_b8);
            if (local_4c == -1) {
              FUN_01b04ef0(0x10e,0x1588,*(undefined8 *)(local_28 + 0x1310),0);
            }
            FUN_004b5390(*(undefined8 *)(*(longlong *)(local_28 + 0xa0) + 0x438),&local_58,local_4c)
            ;
          }
          else {
            iVar4 = FUN_01b07e10(local_28,*(longlong *)(local_90 + 0x431));
            uVar5 = *(undefined8 *)(*(longlong *)(local_28 + 0x2b0) + -8 + (longlong)iVar4 * 8);
            *(undefined8 *)(local_28 + 0x13c0) = uVar5;
            local_128 = &local_6a;
            local_120 = local_69;
            puVar6 = (undefined8 *)
                     FUN_01b05ad0(uVar5,*(undefined1 *)(local_90 + 0x439),
                                  *(undefined1 *)(local_90 + 0x43a),local_28 + 0x13c8);
            *(undefined8 **)(local_28 + 0x13d0) = puVar6;
            local_40 = *puVar6;
            FUN_012b4370(local_28,*(undefined8 *)(local_28 + 0x13c0),
                         *(char *)(local_90 + 0x439) + -1,*(char *)(local_90 + 0x43a) + -1);
          }
        }
        else {
          uVar5 = FUN_012b4460(&DAT_012b4088,1,local_28,0xc);
          *(undefined8 *)(local_28 + 0x588) = uVar5;
        }
      }
      else if ((byte)(bVar1 - 3) < 2) {
        uVar5 = FUN_0114ee90(&DAT_0114e878,1,local_28);
        *(undefined8 *)(local_28 + 0x590) = uVar5;
      }
    }
    FUN_01af2a70(*(undefined8 *)(local_28 + 0xf10),FUN_014f5840);
    lVar3 = *(longlong *)(local_28 + 0xf10);
    *(double *)(lVar3 + 0x18) =
         (double)*(ushort *)(local_28 + 0x978) * *(double *)(local_28 + 0x695);
    FUN_01af29b0(lVar3,*(undefined1 *)(local_28 + 0x5dc));
    lVar3 = *(longlong *)(local_28 + 0xf10);
    *(longlong *)(lVar3 + 0x30) = param_3;
    uVar5 = FUN_00414ad0(lVar3 + 0x28,local_res20);
    if (param_2 < 8) {
      bVar8 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) << (param_2 & 0x1f) & 0x30U) != 0;
    }
    else {
      bVar8 = false;
    }
    if (bVar8) {
      FUN_01af29d0(*(undefined8 *)(local_28 + 0xf10),4);
    }
    else if ((param_2 == 2) || (param_2 == 6)) {
      FUN_01af29d0(*(undefined8 *)(local_28 + 0xf10),0);
    }
    else {
      FUN_01af29d0(*(undefined8 *)(local_28 + 0xf10),1);
    }
    if (*(byte *)(local_28 + 0x5db) < 8) {
      bVar8 = ((int)CONCAT71((int7)((ulonglong)local_28 >> 8),1) <<
               (*(byte *)(local_28 + 0x5db) & 0x1f) & 0x21U) != 0;
    }
    else {
      bVar8 = false;
    }
    if (bVar8) {
      FUN_01af25b0(*(undefined8 *)(local_28 + 0xf10),0,&DAT_014f7234,0);
    }
    else {
      FUN_01af25b0(*(undefined8 *)(local_28 + 0xf10),0,&DAT_014f7236,1);
    }
    if (param_2 != 4) {
      FUN_01af2ae0(*(undefined8 *)(local_28 + 0xf10));
    }
    local_19 = '\x01';
    uVar7 = (ulonglong)param_2;
    FUN_014f5850(local_28,uVar7);
  }
  local_59 = '\0';
  if ((local_19 != '\0') && (local_28 != 0)) {
    local_30 = local_28 + 0x5d8;
    bVar1 = *(byte *)(local_28 + 0x5db);
    if (bVar1 < 8) {
      bVar8 = ((int)CONCAT71((int7)(uVar7 >> 8),1) << (bVar1 & 0x1f) & 0xdeU) != 0;
    }
    else {
      bVar8 = false;
    }
    if (bVar8) {
      if (bVar1 == 1) {
        *(undefined8 *)(local_28 + 0x6a0) = local_40;
      }
      else if (bVar1 == 2) {
        if (*(int *)(*(longlong *)(*(longlong *)(local_28 + 0xa0) + 0x470) + 0x10) < 2) {
          if (*(longlong *)(local_28 + 0xa09) == 0) {
            FUN_004b5450(*(undefined8 *)(*(longlong *)(local_28 + 0xa0) + 0x438),local_4c,local_58);
            FUN_01440040(*(undefined8 *)(local_28 + 0xa0),*(undefined8 *)(local_28 + 0x1310),0);
            FUN_019af810(*(undefined8 *)(local_28 + 0xa0),0xc);
          }
          else {
            **(undefined8 **)(local_28 + 0x13d0) = local_40;
          }
        }
        else {
          FUN_00410f20(*(undefined8 *)(local_28 + 0x588));
        }
      }
      else if ((byte)(bVar1 - 3) < 2) {
        FUN_00410f20(*(undefined8 *)(local_28 + 0x590));
      }
    }
  }
  if (local_28 != 0) {
    FUN_014f5300(local_28);
  }
  if (local_59 != '\0') {
    if (local_28 != 0) {
      FUN_017cc920(local_28);
    }
    local_5a = '\x01';
  }
  FUN_00410f20(local_28);
  FUN_00414480(&local_e0);
  FUN_00414520(&local_d8);
  FUN_00414590(&local_d0,2);
  FUN_00414560(&local_c0,4);
  FUN_00414560(&local_80,2);
  FUN_00414480(&local_58);
  FUN_00414480(&local_res20);
  return local_5a;
}

