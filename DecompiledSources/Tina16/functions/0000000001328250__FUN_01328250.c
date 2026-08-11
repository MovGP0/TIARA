/* Ghidra address: 01328250 */
/* Ghidra symbol: FUN_01328250 */


char FUN_01328250(longlong param_1,byte param_2,longlong param_3,undefined8 param_4)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
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
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  longlong local_98;
  longlong *local_90;
  ulonglong local_88;
  undefined1 *local_80;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71 [15];
  char local_62;
  char local_61;
  undefined8 local_60;
  int local_54;
  undefined8 local_48;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  char local_19;
  
  local_a0 = auStack_148;
  local_c8 = 0;
  local_d0 = 0;
  local_e8 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_80 = (undefined1 *)0x0;
  local_88 = 0;
  local_60 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  local_62 = '\0';
  local_19 = '\0';
  local_61 = 1;
  local_28 = 0;
  if (param_3 == 0) {
    FUN_00414480(&local_88);
  }
  else {
    FUN_00441640(&local_b0,*(undefined8 *)(param_3 + 8));
    FUN_0044f8b0(&local_a8,local_b0);
    FUN_00441920(&local_88,local_a8);
  }
  uVar7 = (ulonglong)param_2;
  local_128 = (undefined1 *)0x0;
  FUN_015fc970(&local_b8,param_3,local_res20,0);
  local_128 = (undefined1 *)((ulonglong)local_128 & 0xffffffffffffff00);
  local_120 = (undefined1 *)CONCAT71(local_120._1_7_,param_2);
  local_118 = local_88;
  local_110 = local_res20;
  local_108 = 0;
  local_100 = 1;
  local_f8 = local_b8;
  local_28 = FUN_0131dba0(&PTR_FUN_0131cd18,1,param_1,1);
  *(longlong *)(local_28 + 0x1320) = param_3;
  FUN_01320320(0,uVar7,local_28);
  uVar6 = CONCAT71((int7)(uVar7 >> 8),6);
  FUN_016f1c10(local_28,uVar6);
  if (param_2 == 0) {
    uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    local_90 = (longlong *)
               FUN_012b3c00(&PTR_FUN_012b33d8,uVar6,*(undefined8 *)PTR_DAT_02004030,local_28);
    iVar4 = (**(code **)(*local_90 + 0x2d0))(local_90);
    local_62 = iVar4 == 2;
    FUN_00410f20(local_90);
  }
  if (local_62 == '\0') {
    *(undefined8 **)(local_28 + 5000) = (undefined8 *)(local_28 + 0x6a0);
    local_30 = *(undefined8 *)(local_28 + 0x6a0);
    if (param_3 == 0) {
      FUN_00414480(&local_80);
    }
    else {
      uVar6 = *(undefined8 *)(param_3 + 8);
      FUN_00441640(&local_80,uVar6);
    }
    uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    FUN_017d18e0(local_28,uVar6);
    uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),2);
    local_128 = local_80;
    local_120 = (undefined1 *)CONCAT71(local_120._1_7_,1);
    local_118 = local_118 & 0xffffffffffffff00;
    FUN_017cc620(local_28,uVar6,0,*(undefined8 *)(param_1 + 0x360));
    local_98 = local_28 + 0x5d8;
    bVar1 = *(byte *)(local_28 + 0x5db);
    if (bVar1 < 8) {
      bVar8 = ((int)CONCAT71((int7)((ulonglong)uVar6 >> 8),1) << (bVar1 & 0x1f) & 0xdeU) != 0;
    }
    else {
      bVar8 = false;
    }
    if (bVar8) {
      if (bVar1 == 1) {
        local_48 = *(undefined8 *)(local_28 + 0x6a0);
      }
      else if (bVar1 == 2) {
        if (*(int *)(*(longlong *)(*(longlong *)(local_28 + 0xa0) + 0x470) + 0x10) < 2) {
          if (((*(longlong *)(local_28 + 0xa09) == 0) && (*(char *)(local_28 + 0xa15) == '\0')) ||
             (*(int *)(*(longlong *)(*(longlong *)(local_28 + 0xa0) + 0x470) + 0x10) == 0)) {
            FUN_01b04ef0(0x10e,0x1588,*(undefined8 *)(local_28 + 0x1310),0);
          }
          if (*(longlong *)(local_98 + 0x431) == 0) {
            FUN_004169a0(&local_c0,local_98 + 0x43d);
            plVar2 = *(longlong **)(*(longlong *)(local_28 + 0xa0) + 0x438);
            local_54 = (**(code **)(*plVar2 + 0xb8))(plVar2,local_c0);
            if (local_54 == -1) {
              FUN_01b04ef0(0x10e,0x1588,*(undefined8 *)(local_28 + 0x1310),0);
            }
            FUN_004b5390(*(undefined8 *)(*(longlong *)(local_28 + 0xa0) + 0x438),&local_60,local_54)
            ;
          }
          else {
            iVar4 = FUN_01b07e10(local_28,*(longlong *)(local_98 + 0x431));
            uVar6 = *(undefined8 *)(*(longlong *)(local_28 + 0x2b0) + -8 + (longlong)iVar4 * 8);
            *(undefined8 *)(local_28 + 0x1410) = uVar6;
            local_128 = &local_72;
            local_120 = &local_73;
            puVar5 = (undefined8 *)
                     FUN_01b05ad0(uVar6,*(undefined1 *)(local_98 + 0x439),
                                  *(undefined1 *)(local_98 + 0x43a),local_71);
            *(undefined8 **)(local_28 + 0x1390) = puVar5;
            local_48 = *puVar5;
            FUN_012b4370(local_28,*(undefined8 *)(local_28 + 0x1410),
                         *(char *)(local_98 + 0x439) + -1,*(char *)(local_98 + 0x43a) + -1);
          }
        }
        else {
          uVar6 = FUN_012b4460(&DAT_012b4088,1,local_28,1);
          *(undefined8 *)(local_28 + 0x588) = uVar6;
        }
      }
      else if ((byte)(bVar1 - 3) < 2) {
        uVar6 = FUN_0114ee90(&DAT_0114e878,1,local_28);
        *(undefined8 *)(local_28 + 0x590) = uVar6;
      }
    }
    FUN_01af2a70(*(undefined8 *)(local_28 + 0xf10),FUN_01320550);
    lVar3 = *(longlong *)(local_28 + 0xf10);
    *(double *)(lVar3 + 0x18) =
         (double)*(ushort *)(local_28 + 0x870) * *(double *)(local_28 + 0x695);
    FUN_01af29b0(lVar3,*(undefined1 *)(local_28 + 0x5dc));
    lVar3 = *(longlong *)(local_28 + 0xf10);
    *(longlong *)(lVar3 + 0x30) = param_3;
    uVar6 = FUN_00414ad0(lVar3 + 0x28,local_res20);
    if (param_2 < 8) {
      bVar8 = ((int)CONCAT71((int7)((ulonglong)uVar6 >> 8),1) << (param_2 & 0x1f) & 0x30U) != 0;
    }
    else {
      bVar8 = false;
    }
    if (bVar8) {
      FUN_01af29d0(*(undefined8 *)(local_28 + 0xf10),4);
    }
    else if (param_2 == 2) {
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
      if (*(char *)(local_28 + 0x325) == '\0') {
        uVar6 = 0;
        FUN_01af25b0(*(undefined8 *)(local_28 + 0xf10),0,&DAT_01328f56,3);
      }
      else {
        uVar6 = 0;
        FUN_01af25b0(*(undefined8 *)(local_28 + 0xf10),0,&DAT_01328f54,0);
      }
    }
    else if (*(char *)(local_28 + 0x325) == '\0') {
      uVar6 = 0;
      FUN_01af25b0(*(undefined8 *)(local_28 + 0xf10),0,&DAT_01328f62,4);
    }
    else {
      uVar6 = 0;
      FUN_01af25b0(*(undefined8 *)(local_28 + 0xf10),0,&DAT_01328f5e,1);
    }
    if (param_2 != 4) {
      FUN_01af2ae0(*(undefined8 *)(local_28 + 0xf10));
    }
    local_19 = '\x01';
    FUN_013279a0(local_28);
  }
  local_61 = '\0';
  if ((local_19 != '\0') && (local_28 != 0)) {
    **(undefined8 **)(local_28 + 5000) = local_30;
    local_38 = local_28 + 0x5d8;
    bVar1 = *(byte *)(local_28 + 0x5db);
    if (bVar1 < 8) {
      bVar8 = ((int)CONCAT71((int7)((ulonglong)uVar6 >> 8),1) << (bVar1 & 0x1f) & 0xdeU) != 0;
    }
    else {
      bVar8 = false;
    }
    if (bVar8) {
      if (bVar1 == 1) {
        *(undefined8 *)(local_28 + 0x6a0) = local_48;
      }
      else if (bVar1 == 2) {
        if (*(int *)(*(longlong *)(*(longlong *)(local_28 + 0xa0) + 0x470) + 0x10) < 2) {
          if (*(longlong *)(local_28 + 0xa09) == 0) {
            FUN_004b5450(*(undefined8 *)(*(longlong *)(local_28 + 0xa0) + 0x438),local_54,local_60);
            FUN_01440040(*(undefined8 *)(local_28 + 0xa0),*(undefined8 *)(local_28 + 0x1310),0);
            FUN_019af810(*(undefined8 *)(local_28 + 0xa0),1);
          }
          else {
            **(undefined8 **)(local_28 + 0x1390) = local_48;
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
  if (local_61 != '\0') {
    if (local_28 != 0) {
      FUN_017cc920(local_28);
    }
    local_62 = '\x01';
  }
  FUN_00f51380(local_28,1);
  FUN_00414480(&local_e8);
  FUN_00414520(&local_e0);
  FUN_00414590(&local_d8,2);
  FUN_00414560(&local_c8,5);
  FUN_00414560(&local_88,2);
  FUN_00414480(&local_60);
  FUN_00414480(&local_res20);
  return local_62;
}

