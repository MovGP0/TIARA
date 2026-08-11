/* Ghidra address: 01537800 */
/* Ghidra symbol: FUN_01537800 */


char FUN_01537800(byte param_1,longlong param_2,byte param_3,longlong param_4,undefined8 param_5)

{
  char cVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_158 [32];
  undefined1 *local_138;
  undefined1 *local_130;
  ulonglong local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined1 local_110;
  undefined8 local_108;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined1 *local_b0;
  longlong local_a0;
  longlong *local_98;
  ulonglong local_90;
  undefined1 *local_88;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79 [31];
  char local_5a;
  char local_59;
  undefined8 local_58;
  int local_4c;
  undefined8 local_40;
  longlong local_30;
  longlong local_28;
  char local_19;
  
  local_b0 = auStack_158;
  local_d0 = 0;
  local_d8 = 0;
  local_f0 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_88 = (undefined1 *)0x0;
  local_90 = 0;
  local_58 = 0;
  FUN_00414610(param_5);
  local_5a = '\0';
  local_19 = '\0';
  local_59 = 1;
  local_28 = 0;
  if (param_4 == 0) {
    FUN_00414480(&local_90);
  }
  else {
    FUN_00441640(&local_c0,*(undefined8 *)(param_4 + 8));
    FUN_0044f8b0(&local_b8,local_c0);
    FUN_00441920(&local_90,local_b8);
  }
  uVar9 = (ulonglong)param_3;
  local_138 = (undefined1 *)CONCAT71(local_138._1_7_,param_1);
  local_130 = (undefined1 *)CONCAT71(local_130._1_7_,param_3);
  local_128 = local_90;
  local_120 = param_5;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_28 = FUN_01b06050(&PTR_FUN_01535f98,1,param_2,8);
  *(longlong *)(local_28 + 0x1320) = param_4;
  FUN_015365a0(local_28,uVar9);
  puVar8 = (undefined *)CONCAT71((int7)(uVar9 >> 8),10);
  FUN_016f1c10(local_28,puVar8);
  if ((param_1 == 0) && (param_3 == 0)) {
    puVar8 = (undefined *)CONCAT71((int7)((ulonglong)puVar8 >> 8),1);
    local_98 = (longlong *)
               FUN_01535290(&PTR_FUN_01534578,puVar8,*(undefined8 *)PTR_DAT_02004030,local_28);
    iVar5 = (**(code **)(*local_98 + 0x2d0))(local_98);
    local_5a = iVar5 == 2;
    FUN_00410f20(local_98);
  }
  cVar1 = *(char *)(local_28 + 0x9a6);
  if (cVar1 == '\0') {
    puVar8 = &DAT_0153859c;
    FUN_00414ad0(local_28 + 0x13a0,&DAT_0153859c);
  }
  else if (cVar1 == '\x01') {
    puVar8 = &DAT_015385ac;
    FUN_00414ad0(local_28 + 0x13a0,&DAT_015385ac);
  }
  else if (cVar1 == '\x02') {
    puVar8 = &DAT_015385bc;
    FUN_00414ad0(local_28 + 0x13a0,&DAT_015385bc);
  }
  else if (cVar1 == '\x03') {
    puVar8 = &DAT_015385cc;
    FUN_00414ad0(local_28 + 0x13a0,&DAT_015385cc);
  }
  if (local_5a == '\0') {
    if (param_4 == 0) {
      FUN_00414480(&local_88);
    }
    else {
      puVar8 = *(undefined **)(param_4 + 8);
      FUN_00441640(&local_88,puVar8);
    }
    uVar7 = CONCAT71((int7)((ulonglong)puVar8 >> 8),10);
    FUN_017d18e0(local_28,uVar7);
    uVar7 = CONCAT71((int7)((ulonglong)uVar7 >> 8),6);
    local_138 = local_88;
    local_130 = (undefined1 *)CONCAT71(local_130._1_7_,1);
    local_128 = local_128 & 0xffffffffffffff00;
    FUN_017cc620(local_28,uVar7,param_1 == 1,*(undefined8 *)(param_2 + 0x360));
    *(ushort *)(*(longlong *)(local_28 + 0xb0) + 0x1a) = (ushort)*(byte *)(local_28 + 0x9a6);
    local_a0 = local_28 + 0x5d8;
    bVar2 = *(byte *)(local_28 + 0x5db);
    if (bVar2 < 8) {
      bVar10 = ((int)CONCAT71((int7)((ulonglong)uVar7 >> 8),1) << (bVar2 & 0x1f) & 0xdeU) != 0;
    }
    else {
      bVar10 = false;
    }
    if (bVar10) {
      if (bVar2 == 1) {
        local_40 = *(undefined8 *)(local_28 + 0x6a0);
      }
      else if (bVar2 == 2) {
        if (*(int *)(*(longlong *)(*(longlong *)(local_28 + 0xa0) + 0x470) + 0x10) < 2) {
          if (((*(longlong *)(local_28 + 0xa09) == 0) && (*(char *)(local_28 + 0xa15) == '\0')) ||
             (*(int *)(*(longlong *)(*(longlong *)(local_28 + 0xa0) + 0x470) + 0x10) == 0)) {
            FUN_01b04ef0(0x10e,0x1588,*(undefined8 *)(local_28 + 0x1310),0);
          }
          if (*(longlong *)(local_a0 + 0x431) == 0) {
            FUN_004169a0(&local_c8,local_a0 + 0x43d);
            plVar3 = *(longlong **)(*(longlong *)(local_28 + 0xa0) + 0x438);
            local_4c = (**(code **)(*plVar3 + 0xb8))(plVar3,local_c8);
            if (local_4c == -1) {
              FUN_01b04ef0(0x10e,0x1588,*(undefined8 *)(local_28 + 0x1310),0);
            }
            FUN_004b5390(*(undefined8 *)(*(longlong *)(local_28 + 0xa0) + 0x438),&local_58,local_4c)
            ;
          }
          else {
            iVar5 = FUN_01b07e10(local_28,*(longlong *)(local_a0 + 0x431));
            uVar7 = *(undefined8 *)(*(longlong *)(local_28 + 0x2b0) + -8 + (longlong)iVar5 * 8);
            *(undefined8 *)(local_28 + 5000) = uVar7;
            local_138 = &local_7b;
            local_130 = local_79;
            puVar6 = (undefined8 *)
                     FUN_01b05ad0(uVar7,*(undefined1 *)(local_a0 + 0x439),
                                  *(undefined1 *)(local_a0 + 0x43a),&local_7a);
            *(undefined8 **)(local_28 + 0x1390) = puVar6;
            local_40 = *puVar6;
            FUN_012b4370(local_28,*(undefined8 *)(local_28 + 5000),*(char *)(local_a0 + 0x439) + -1,
                         *(char *)(local_a0 + 0x43a) + -1);
          }
        }
        else {
          uVar7 = FUN_012b4460(&DAT_012b4088,1,local_28,8);
          *(undefined8 *)(local_28 + 0x588) = uVar7;
        }
      }
      else if ((byte)(bVar2 - 3) < 2) {
        uVar7 = FUN_0114ee90(&DAT_0114e878,1,local_28);
        *(undefined8 *)(local_28 + 0x590) = uVar7;
      }
    }
    FUN_01af2a70(*(undefined8 *)(local_28 + 0xf10),FUN_01536610);
    lVar4 = *(longlong *)(local_28 + 0xf10);
    *(double *)(lVar4 + 0x18) =
         (double)*(ushort *)(local_28 + 0x993) * *(double *)(local_28 + 0x695);
    FUN_01af29b0(lVar4,*(undefined1 *)(local_28 + 0x5dc));
    lVar4 = *(longlong *)(local_28 + 0xf10);
    *(longlong *)(lVar4 + 0x30) = param_4;
    FUN_00414ad0(lVar4 + 0x28,param_5);
    if (param_3 == 4) {
      FUN_01af29d0(*(undefined8 *)(local_28 + 0xf10),4);
    }
    else {
      FUN_01af29d0(*(undefined8 *)(local_28 + 0xf10),1);
    }
    if (*(byte *)(local_28 + 0x5db) < 8) {
      bVar10 = ((int)CONCAT71((int7)((ulonglong)local_28 >> 8),1) <<
                (*(byte *)(local_28 + 0x5db) & 0x1f) & 0x21U) != 0;
    }
    else {
      bVar10 = false;
    }
    if (bVar10) {
      FUN_01af25b0(*(undefined8 *)(local_28 + 0xf10),0,&DAT_015385d2,0);
    }
    else {
      FUN_01af25b0(*(undefined8 *)(local_28 + 0xf10),0,&DAT_015385d4,1);
    }
    if ((param_1 == 0) && (param_3 != 4)) {
      FUN_01af2ae0(*(undefined8 *)(local_28 + 0xf10));
    }
    local_19 = '\x01';
    puVar8 = (undefined *)(ulonglong)param_1;
    FUN_01536620(local_28,puVar8,param_3);
    *(undefined8 *)(*(longlong *)(local_28 + 0xb0) + 0x20) = *(undefined8 *)(local_28 + 0x1398);
  }
  local_59 = '\0';
  if ((local_19 != '\0') && (local_28 != 0)) {
    local_30 = local_28 + 0x5d8;
    bVar2 = *(byte *)(local_28 + 0x5db);
    if (bVar2 < 8) {
      bVar10 = ((int)CONCAT71((int7)((ulonglong)puVar8 >> 8),1) << (bVar2 & 0x1f) & 0xdeU) != 0;
    }
    else {
      bVar10 = false;
    }
    if (bVar10) {
      if (bVar2 == 1) {
        *(undefined8 *)(local_28 + 0x6a0) = local_40;
      }
      else if (bVar2 == 2) {
        if (*(int *)(*(longlong *)(*(longlong *)(local_28 + 0xa0) + 0x470) + 0x10) < 2) {
          if (*(longlong *)(local_28 + 0xa09) == 0) {
            FUN_004b5450(*(undefined8 *)(*(longlong *)(local_28 + 0xa0) + 0x438),local_4c,local_58);
            FUN_01440040(*(undefined8 *)(local_28 + 0xa0),*(undefined8 *)(local_28 + 0x1310),0);
            FUN_019af810(*(undefined8 *)(local_28 + 0xa0),8);
          }
          else {
            **(undefined8 **)(local_28 + 0x1390) = local_40;
          }
        }
        else {
          FUN_00410f20(*(undefined8 *)(local_28 + 0x588));
        }
      }
      else if ((byte)(bVar2 - 3) < 2) {
        FUN_00410f20(*(undefined8 *)(local_28 + 0x590));
      }
    }
  }
  if (local_59 != '\0') {
    if (local_28 != 0) {
      FUN_017cc920(local_28);
    }
    local_5a = '\x01';
  }
  FUN_00410f20(local_28);
  FUN_00414480(&local_f0);
  FUN_00414520(&local_e8);
  FUN_00414590(&local_e0,2);
  FUN_00414560(&local_d0,4);
  FUN_00414560(&local_90,2);
  FUN_00414480(&local_58);
  FUN_00414480(&param_5);
  return local_5a;
}

