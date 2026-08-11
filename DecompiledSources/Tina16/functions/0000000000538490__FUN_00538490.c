/* Ghidra address: 00538490 */
/* Ghidra symbol: FUN_00538490 */


undefined8 FUN_00538490(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  char cVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined1 *local_a0;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  double local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_a0 = auStack_108;
  local_e0 = 0;
  local_c8 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  cVar3 = FUN_005360d0(param_1);
  if (cVar3 != '\0') {
    FUN_00414ad0(param_2,L"(empty)");
    goto LAB_00538da5;
  }
  pbVar6 = (byte *)*param_1;
  uVar5 = (ulonglong)*pbVar6;
  if (0xc < uVar5) {
    if (uVar5 < 0x13) {
      if (uVar5 == 0x12) goto LAB_00538ab0;
      if (0xf < uVar5) {
        if (uVar5 == 0x10) {
          local_58 = (longlong *)FUN_00589390(pbVar6);
          if (local_58[1] < *local_58) {
            FUN_0043f7e0(param_2,param_1[2]);
          }
          else {
            FUN_0043f780(param_2,param_1[2]);
          }
        }
        else if (uVar5 == 0x11) {
          FUN_00414ad0(param_2,L"(dynamic array)");
        }
        goto LAB_00538da5;
      }
      if (uVar5 == 0xf) {
        puVar8 = (undefined8 *)(**(code **)(*(longlong *)param_1[1] + 0x30))((longlong *)param_1[1])
        ;
        local_d8 = *puVar8;
        local_d0 = 5;
        FUN_00442f70(param_2,L"(interface @ %p)",&local_d8,0);
        goto LAB_00538da5;
      }
      if (uVar5 == 0xd) {
        FUN_00414ad0(param_2,L"(array)");
        goto LAB_00538da5;
      }
      if (uVar5 != 0xe) goto LAB_00538da5;
    }
    else {
      if (uVar5 == 0x13) {
        if (param_1[2] == 0) {
          FUN_00414ad0(param_2,L"(empty)");
        }
        else {
          FUN_00410ae0(param_1[2],&local_e0);
          local_c0 = local_e0;
          local_b8 = 0x11;
          local_b0 = param_1[2];
          local_a8 = 5;
          FUN_00442f70(param_2,L"(class \'%s\' @ %p)",&local_c0,1);
        }
        goto LAB_00538da5;
      }
      if (uVar5 == 0x14) {
        local_d8 = param_1[2];
        local_d0 = 5;
        FUN_00442f70(param_2,L"(pointer @ %p)",&local_d8,0);
        goto LAB_00538da5;
      }
      if (uVar5 == 0x15) {
        local_d8 = param_1[2];
        local_d0 = 5;
        FUN_00442f70(param_2,L"(procedure @ %p)",&local_d8,0);
        goto LAB_00538da5;
      }
      if (uVar5 != 0x16) goto LAB_00538da5;
    }
    FUN_00414ad0(param_2,L"(record)");
    goto LAB_00538da5;
  }
  if (uVar5 == 0xc) {
    FUN_00414ad0(param_2,L"(variant)");
    goto LAB_00538da5;
  }
  if (uVar5 < 6) {
    if (uVar5 != 5) {
      if (2 < uVar5) {
        if (uVar5 == 3) {
          FUN_005894c0(param_2,pbVar6,*(undefined4 *)(param_1 + 2));
        }
        else if (uVar5 == 4) {
          pbVar6 = (byte *)FUN_00589390(pbVar6);
          bVar1 = *pbVar6;
          if (bVar1 < 3) {
            if (bVar1 == 2) {
              FUN_00414480(&local_48);
              local_88 = param_1[2];
              FUN_00448450(&local_48,local_88,PTR_DAT_02004830);
              FUN_00414ad0(param_2,local_48);
              FUN_00414480(&local_48);
            }
            else if (bVar1 == 0) {
              FUN_00414480(local_20);
              local_60 = (double)*(float *)(param_1 + 2);
              FUN_00448450(local_20,local_60,PTR_DAT_02004830);
              FUN_00414ad0(param_2,local_20[0]);
              FUN_00414480(local_20);
            }
            else if (bVar1 == 1) {
              puVar2 = (undefined *)*param_1;
              if (puVar2 == &DAT_00403aa0) {
                FUN_00414480(&local_28);
                local_68 = param_1[2];
                FUN_0044a2b0(&local_28,local_68,PTR_DAT_02004830);
                FUN_00414ad0(param_2,local_28);
                FUN_00414480(&local_28);
              }
              else if (puVar2 == &DAT_00403ab8) {
                FUN_00414480(&local_30);
                local_70 = param_1[2];
                FUN_0044a300(&local_30,local_70,PTR_DAT_02004830);
                FUN_00414ad0(param_2,local_30);
                FUN_00414480(&local_30);
              }
              else if (puVar2 == &DAT_00403a88) {
                FUN_00414480(&local_38);
                local_78 = param_1[2];
                FUN_0044a350(&local_38,local_78,PTR_DAT_02004830);
                FUN_00414ad0(param_2,local_38);
                FUN_00414480(&local_38);
              }
              else {
                FUN_00414480(&local_40);
                local_80 = param_1[2];
                FUN_00448450(&local_40,local_80,PTR_DAT_02004830);
                FUN_00414ad0(param_2,local_40);
                FUN_00414480(&local_40);
              }
            }
          }
          else if (bVar1 == 3) {
            FUN_0043f780(param_2,param_1[2]);
          }
          else if (bVar1 == 4) {
            FUN_00414480(&local_50);
            local_90 = param_1[2];
            FUN_004484b0(&local_50,local_90,PTR_DAT_02004830);
            FUN_00414ad0(param_2,local_50);
            FUN_00414480(&local_50);
          }
        }
        goto LAB_00538da5;
      }
      if (uVar5 == 2) {
        uVar4 = FUN_005605c0(param_1,1);
        FUN_00416760(param_2,uVar4);
        goto LAB_00538da5;
      }
      if (uVar5 == 0) {
        FUN_00414ad0(param_2,L"(unknown)");
        goto LAB_00538da5;
      }
      if (uVar5 != 1) goto LAB_00538da5;
      pbVar6 = (byte *)FUN_00589390(pbVar6);
      bVar1 = *pbVar6;
      if (bVar1 < 4) {
        if (bVar1 != 3) {
          if (bVar1 != 0) {
            if (bVar1 == 1) goto LAB_0053871d;
            if (bVar1 != 2) goto LAB_00538da5;
          }
LAB_005386fd:
          uVar7 = FUN_00537870(param_1);
          FUN_0043f780(param_2,uVar7);
          goto LAB_00538da5;
        }
      }
      else {
        if (bVar1 == 4) goto LAB_005386fd;
        if (bVar1 != 5) goto LAB_00538da5;
      }
LAB_0053871d:
      uVar7 = FUN_00560380(param_1,1);
      FUN_0043f7e0(param_2,uVar7);
      goto LAB_00538da5;
    }
  }
  else {
    if (uVar5 < 9) {
      if (uVar5 == 8) {
        local_c0 = param_1[2];
        local_b8 = 5;
        local_b0 = param_1[3];
        local_a8 = 5;
        FUN_00442f70(param_2,L"(method code=%p, data=%p)",&local_c0,1);
      }
      else if (uVar5 == 6) {
        uVar7 = FUN_00538390(param_1);
        FUN_0058c3d0(param_2,pbVar6,uVar7,1);
      }
      else if (uVar5 == 7) {
        if (param_1[2] == 0) {
          FUN_00414ad0(param_2,L"(empty)");
        }
        else {
          puVar8 = (undefined8 *)FUN_00536e10(param_1);
          FUN_00410ae0(*puVar8,&local_c8);
          local_c0 = local_c8;
          local_b8 = 0x11;
          local_b0 = FUN_00536e10(param_1);
          local_a8 = 5;
          FUN_00442f70(param_2,L"(%s @ %p)",&local_c0,1);
        }
      }
      goto LAB_00538da5;
    }
    if (uVar5 == 9) {
      uVar4 = FUN_00560610(param_1,1);
      FUN_00416780(param_2,uVar4);
      goto LAB_00538da5;
    }
    if (1 < uVar5 - 10) goto LAB_00538da5;
  }
LAB_00538ab0:
  FUN_00560430(param_1,param_2,1);
LAB_00538da5:
  FUN_00414480(&local_e0);
  FUN_00414480(&local_c8);
  FUN_00414560(&local_50,7);
  return param_2;
}

