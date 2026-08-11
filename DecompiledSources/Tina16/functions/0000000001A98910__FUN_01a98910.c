/* Ghidra address: 01a98910 */
/* Ghidra symbol: FUN_01a98910 */


void FUN_01a98910(longlong *param_1,undefined4 param_2,undefined4 param_3,char param_4,char param_5,
                 byte param_6,undefined8 param_7,double param_8,undefined4 param_9,int param_10,
                 undefined4 param_11,undefined1 param_12,char param_13,undefined8 param_14,
                 longlong param_15,longlong param_16,undefined8 *param_17,char param_18,int param_19
                 ,int param_20,char param_21)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  float fVar11;
  undefined4 *puVar12;
  int local_124;
  int local_120;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong local_d0;
  int local_c8 [2];
  int local_c0;
  int local_b8;
  byte abStack_8c [51];
  byte local_59;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_d8 = 0;
  FUN_00414610(param_14);
  FUN_00414610(param_15);
  FUN_00414610(param_16);
  if ((param_15 != 0) || (param_16 != 0)) {
    (**(code **)(*param_1 + 0xb8))(param_1,param_9);
    FUN_01a98380(param_1,param_2,param_3,&local_30,&local_34);
    fVar11 = (float)FUN_01a9a6d0(param_1);
    uVar2 = FUN_0040c770((double)param_10 * (double)fVar11);
    iVar3 = thunk_FUN_03f3ed25(uVar2,(int)param_1[0xf],0x48);
    uVar2 = FUN_0040c770((double)-iVar3 * param_8);
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    if ((param_6 == 1) || (param_6 == 3)) {
      *(undefined4 *)(param_1 + 0x15) = 900;
      if (*(char *)((longlong)param_1 + 0x12e) != '\0') {
        uVar2 = FUN_0040c770((double)(int)param_1[0x14]);
        *(undefined4 *)(param_1 + 0x14) = uVar2;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x15) = 0;
    }
    *(undefined4 *)(param_1 + 0x16) = param_11;
    *(undefined1 *)((longlong)param_1 + 0xb4) = param_12;
    FUN_00442620((longlong)param_1 + 0xbc,param_14);
    uVar6 = thunk_FUN_041a15ee(param_1 + 0x14);
    FUN_01a9a6f0(param_1,param_1[0x29],uVar6);
    local_59 = 0;
    if (param_21 == '\0') {
      if (param_13 == '\0') {
        FUN_01cfb2c0(param_15,abStack_8c + 1,&local_59);
      }
      FUN_01cfb3a0(&param_15);
    }
    if (param_16 == 0) {
      FUN_00b0d0a0(&local_d0,param_15,*(undefined4 *)PTR_DAT_02004b18);
      uVar9 = 0;
      if (local_d0 != 0) {
        uVar9 = *(uint *)(local_d0 + -4) >> 1;
      }
      uVar6 = FUN_00415f70(local_d0);
      local_48 = FUN_00b94d60(param_1[0x29],uVar6,uVar9);
      local_2c = local_48;
    }
    else {
      (**(code **)(*(longlong *)param_1[0x35] + 0x90))((longlong *)param_1[0x35]);
      if (param_15 == 0) {
        FUN_00416e20(&param_16,1,1);
      }
      FUN_00416ba0(&local_e0,param_15,param_16);
      (**(code **)(*(longlong *)param_1[0x35] + 0x60))((longlong *)param_1[0x35],local_e0);
      local_48 = 0;
      iVar3 = (**(code **)(*(longlong *)param_1[0x35] + 0x28))();
      iVar8 = 0;
      if (-1 < iVar3 + -1) {
        do {
          (**(code **)(*(longlong *)param_1[0x35] + 0x18))
                    ((longlong *)param_1[0x35],&local_e8,iVar8);
          FUN_00b0d0a0(&local_d0,local_e8,*(undefined4 *)PTR_DAT_02004b18);
          uVar9 = 0;
          if (local_d0 != 0) {
            uVar9 = *(uint *)(local_d0 + -4) >> 1;
          }
          uVar6 = FUN_00415f70(local_d0);
          local_2c = FUN_00b94d60(param_1[0x29],uVar6,uVar9);
          uVar1 = FUN_00b905e0((longlong)(short)local_48,(longlong)(short)local_2c);
          local_48 = CONCAT22(local_48._2_2_ + local_2c._2_2_,uVar1);
          iVar8 = iVar8 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    thunk_FUN_04172119(param_1[0x29],local_c8);
    if (param_6 == 0) {
      if (param_4 == '\x01') {
        local_30 = local_30 - (int)(short)local_48 / 2;
      }
      else if (param_4 == '\x02') {
        local_30 = local_30 - (short)local_48;
      }
      if (param_5 == '\x01') {
        local_34 = local_34 - (int)local_48._2_2_ / 2;
      }
      else if (param_5 == '\x02') {
        local_34 = local_34 - local_48._2_2_;
      }
      local_38 = local_30;
      local_40 = local_30 + (short)local_48;
      local_3c = local_34;
      local_44 = local_34 + local_48._2_2_;
    }
    else if (param_6 == 1) {
      if (param_4 == '\x01') {
        local_34 = local_34 + (int)(short)local_48 / 2;
      }
      else if (param_4 == '\x02') {
        local_34 = local_34 + (short)local_48;
      }
      if (param_5 == '\x01') {
        local_30 = local_30 - (int)local_48._2_2_ / 2;
      }
      else if (param_5 == '\x02') {
        local_30 = local_30 - local_48._2_2_;
      }
      local_38 = local_30;
      local_40 = local_30 + local_48._2_2_;
      local_3c = local_34 - (short)local_48;
      local_44 = local_34;
    }
    else if (param_6 == 2) {
      if (param_4 == '\0') {
        local_30 = local_30 - (short)local_48;
      }
      else if (param_4 == '\x01') {
        local_30 = local_30 - (int)(short)local_48 / 2;
      }
      if (param_5 == '\0') {
        local_34 = local_34 - local_48._2_2_;
      }
      else if (param_5 == '\x01') {
        local_34 = local_34 - (int)local_48._2_2_ / 2;
      }
      local_38 = local_30;
      local_40 = local_30 + (short)local_48;
      local_3c = local_34;
      local_44 = local_34 + local_48._2_2_;
    }
    else if (param_6 == 3) {
      if (param_4 == '\0') {
        local_34 = local_34 + (short)local_48;
      }
      else if (param_4 == '\x01') {
        local_34 = local_34 + (int)(short)local_48 / 2;
      }
      if (param_5 == '\0') {
        local_30 = local_30 - local_48._2_2_;
      }
      else if (param_5 == '\x01') {
        local_30 = local_30 - (int)local_48._2_2_ / 2;
      }
      local_38 = local_30;
      local_40 = local_30 + local_48._2_2_;
      local_3c = local_34 - (short)local_48;
      local_44 = local_34;
    }
    FUN_01a982d0(param_1,local_38,local_3c,&local_4c,&local_50);
    puVar12 = &local_58;
    FUN_01a982d0(param_1,local_40,local_44,&local_54,puVar12);
    uVar6 = CONCAT44((int)((ulonglong)puVar12 >> 0x20),local_58);
    FUN_00498350(&local_f8,local_4c,local_50,local_54,uVar6);
    uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
    *param_17 = local_f8;
    param_17[1] = uStack_f0;
    if (param_18 == '\0') {
      if (*(char *)((longlong)param_1 + 0x12d) == '\0') {
        if (param_13 == '\0') {
          if (param_19 != 0x1fffffff) {
            uVar4 = (**(code **)(*param_1 + 0xd8))(param_1,param_19);
            uVar6 = CONCAT44(uVar2,local_58);
            (**(code **)(*param_1 + 0x60))(param_1,local_4c,local_50,local_54,uVar6,uVar4);
          }
          uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
          if (param_20 != 0x1fffffff) {
            (**(code **)(*param_1 + 0xe0))(param_1,0);
            (**(code **)(*param_1 + 0xd8))(param_1,param_20);
            uVar6 = CONCAT44(uVar2,local_58);
            (**(code **)(*param_1 + 0x58))(param_1,local_4c,local_50,local_54,uVar6);
          }
          (**(code **)(*param_1 + 0xb8))(param_1,param_9);
          uVar2 = thunk_FUN_03b994b9(param_1[0x29]);
          uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
          if (param_16 == 0) {
            FUN_00b0d0a0(&local_d0,param_15,*(undefined4 *)PTR_DAT_02004b18);
            uVar9 = 0;
            if (local_d0 != 0) {
              uVar9 = *(uint *)(local_d0 + -4) >> 1;
            }
            uVar6 = FUN_00415f70(local_d0);
            thunk_FUN_04193d0c(param_1[0x29],local_30 - (int)param_1[0x31],
                               local_34 - *(int *)((longlong)param_1 + 0x18c),uVar6,
                               CONCAT44(uVar4,uVar9));
          }
          else {
            local_124 = local_30 - (int)param_1[0x31];
            local_120 = local_34 - *(int *)((longlong)param_1 + 0x18c);
            iVar3 = (**(code **)(*(longlong *)param_1[0x35] + 0x28))();
            iVar8 = 0;
            if (-1 < iVar3 + -1) {
              do {
                uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
                (**(code **)(*(longlong *)param_1[0x35] + 0x18))
                          ((longlong *)param_1[0x35],&local_100,iVar8);
                FUN_00b0d0a0(&local_d0,local_100,*(undefined4 *)PTR_DAT_02004b18);
                uVar9 = 0;
                if (local_d0 != 0) {
                  uVar9 = *(uint *)(local_d0 + -4) >> 1;
                }
                uVar7 = FUN_00415f70(local_d0);
                uVar6 = CONCAT44(uVar4,uVar9);
                uVar7 = thunk_FUN_04193d0c(param_1[0x29],local_124,local_120,uVar7,uVar6);
                if (param_6 < 8) {
                  bVar10 = ((int)CONCAT71((int7)((ulonglong)uVar7 >> 8),1) << (param_6 & 0x1f) & 10U
                           ) != 0;
                }
                else {
                  bVar10 = false;
                }
                if (bVar10) {
                  local_124 = local_124 + local_c8[0] + local_b8;
                }
                else {
                  local_120 = local_120 + local_c8[0] + local_b8;
                }
                iVar8 = iVar8 + 1;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
          }
          if ((local_59 != 0) && ((uint)local_59 % 2 == 0)) {
            local_c0 = 0;
            for (iVar3 = 1; iVar3 <= (int)(uint)local_59; iVar3 = iVar3 + 2) {
              FUN_00416dc0(&local_108,param_15,1,abStack_8c[iVar3] - 1);
              FUN_00b0d0a0(&local_d0,local_108,*(undefined4 *)PTR_DAT_02004b18);
              uVar6 = FUN_00415f70(local_d0);
              local_2c = FUN_00b94d60(param_1[0x29],uVar6,abStack_8c[iVar3] - 1);
              local_48 = local_2c;
              uVar4 = local_48;
              if ((int)(abStack_8c[iVar3] - 1) < 1) {
                if (param_6 == 0) {
LAB_01a99607:
                  local_124 = local_30;
                  local_120 = local_34 - local_c0;
                }
                else {
                  if (param_6 != 1) {
                    if (param_6 == 2) goto LAB_01a99607;
                    if (param_6 != 3) goto LAB_01a99639;
                  }
                  local_124 = local_30 - local_c0;
                  local_120 = local_34;
                }
              }
              else {
                local_48._0_2_ = (short)local_2c;
                if (param_6 == 0) {
LAB_01a9959b:
                  local_124 = local_30 + (short)local_48;
                  local_120 = local_34 - local_c0;
                }
                else if (param_6 == 1) {
LAB_01a995bf:
                  local_124 = local_30 - local_c0;
                  local_120 = local_34 - (short)local_48;
                }
                else {
                  if (param_6 == 2) goto LAB_01a9959b;
                  if (param_6 == 3) goto LAB_01a995bf;
                }
              }
LAB_01a99639:
              local_48 = uVar4;
              FUN_00b94cb0(param_1[0x29],local_124 - (int)param_1[0x31],
                           local_120 - *(int *)((longlong)param_1 + 0x18c));
              FUN_00416dc0(&local_110,param_15,1,abStack_8c[iVar3 + 1]);
              FUN_00b0d0a0(&local_d0,local_110,*(undefined4 *)PTR_DAT_02004b18);
              uVar6 = FUN_00415f70(local_d0);
              local_48 = FUN_00b94d60(param_1[0x29],uVar6,abStack_8c[iVar3 + 1]);
              if (param_6 == 0) {
LAB_01a99704:
                local_124 = local_30 + (short)local_48;
              }
              else if (param_6 == 1) {
LAB_01a99719:
                local_120 = local_34 - (short)local_48;
              }
              else {
                if (param_6 == 2) goto LAB_01a99704;
                if (param_6 == 3) goto LAB_01a99719;
              }
              local_2c = local_48;
              thunk_FUN_04151b0d(param_1[0x29],local_124 - (int)param_1[0x31],
                                 local_120 - *(int *)((longlong)param_1 + 0x18c));
            }
          }
          thunk_FUN_03b994b9(param_1[0x29],uVar2);
        }
        else {
          uVar4 = FUN_01a99be0(param_1);
          uVar5 = FUN_01a99b30(param_1);
          (**(code **)(*param_1 + 0xf0))(param_1,1);
          (**(code **)(*param_1 + 0xe0))(param_1,2);
          (**(code **)(*param_1 + 0x58))
                    (param_1,local_4c,local_50,local_54,CONCAT44(uVar2,local_58));
          (**(code **)(*param_1 + 0xe0))(param_1,uVar5);
          (**(code **)(*param_1 + 0xf0))(param_1,uVar4);
        }
      }
      else {
        FUN_01a98380(param_1,local_4c,local_50,&local_38,&local_3c);
        FUN_01a98380(param_1,local_54,local_58,&local_40,&local_44);
      }
    }
  }
  FUN_00414560(&local_110,3);
  FUN_00414560(&local_e8,3);
  FUN_00414520(&local_d0);
  FUN_00414560(&param_14,3);
  return;
}

