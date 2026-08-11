/* Ghidra address: 01d18800 */
/* Ghidra symbol: FUN_01d18800 */


undefined8
FUN_01d18800(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,int param_5,
            int param_6,int param_7,int param_8,longlong *param_9)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  double dVar11;
  longlong local_res20;
  undefined1 auStack_128 [32];
  int *local_108;
  int *local_100;
  int local_f8;
  int local_f0;
  longlong *local_e8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  int *local_98;
  int *local_90;
  int local_84;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  local_c0 = auStack_128;
  local_d0 = 0;
  local_c8 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_res20 = param_4;
  if (*(char *)(param_1 + 0x98) != '\0') {
    local_70 = 0;
    local_74 = 0;
    if (param_4 == 0) {
      local_c0 = auStack_128;
      dVar11 = (double)FUN_01d11750(param_1);
      iVar1 = FUN_005fdfd0(param_3,&DAT_01d1aa2c);
      local_40 = FUN_0040c770(dVar11 * (double)iVar1);
    }
    else {
      local_40 = FUN_01d13560(param_1,param_3,param_4);
    }
    uVar2 = FUN_0040c840((double)local_40 / 2.0);
    local_74 = FUN_01d120a0(local_74,uVar2);
    local_30 = 0;
    while( true ) {
      iVar1 = FUN_01d11780(local_res20);
      if (iVar1 <= local_30) break;
      if ((*(short *)(local_res20 + (longlong)local_30 * 2) == 0x5c) &&
         (*(short *)(local_res20 + (longlong)(local_30 + 1) * 2) == 0x5c)) {
        local_30 = local_30 + 1;
      }
      if (*(short *)(local_res20 + (longlong)local_30 * 2) == 0x5c) {
        uVar7 = *(short *)(local_res20 + (longlong)(local_30 + 1) * 2) - 0x60;
        if (uVar7 < 0x10) {
          bVar10 = ((int)CONCAT62((int6)((ulonglong)local_res20 >> 0x10),1) << ((byte)uVar7 & 0x1f)
                   & 0x8220U) != 0;
        }
        else {
          bVar10 = false;
        }
        if (!bVar10) goto LAB_01d18a65;
        local_108 = (int *)&local_60;
        local_100 = &local_44;
        FUN_01d12460(param_1,local_res20,local_30 + 2,&local_58);
        local_30 = local_30 + local_44 + 1;
      }
      else {
LAB_01d18a65:
        if ((*(short *)(local_res20 + (longlong)local_30 * 2) == 0x5c) &&
           (*(short *)(local_res20 + (longlong)(local_30 + 1) * 2) == 0x66)) {
          local_108 = (int *)&local_60;
          local_100 = &local_44;
          FUN_01d12460(param_1,local_res20,local_30 + 2,&local_58);
          iVar1 = FUN_01d13670(param_1,param_3,local_58);
          iVar8 = FUN_0040c840((*(double *)(param_1 + 0x28) * (double)local_40) / 2.0);
          local_74 = FUN_01d120a0(local_74,iVar1 + iVar8);
          local_30 = local_30 + local_44 + 1;
        }
      }
      local_30 = local_30 + 1;
    }
    local_30 = 0;
    while( true ) {
      iVar1 = FUN_01d11780(local_res20);
      if (iVar1 <= local_30) break;
      if ((*(short *)(local_res20 + (longlong)local_30 * 2) == 0x5c) &&
         (*(short *)(local_res20 + (longlong)(local_30 + 1) * 2) == 0x5c)) {
        local_30 = local_30 + 1;
      }
      if (*(short *)(local_res20 + (longlong)local_30 * 2) == 0x5c) {
        uVar7 = *(short *)(local_res20 + (longlong)(local_30 + 1) * 2) - 0x60;
        if (uVar7 < 0x10) {
          bVar10 = ((int)CONCAT62((int6)((ulonglong)local_res20 >> 0x10),1) << ((byte)uVar7 & 0x1f)
                   & 0x8240U) != 0;
        }
        else {
          bVar10 = false;
        }
        if (!bVar10) goto LAB_01d18c5a;
        local_108 = (int *)&local_60;
        local_100 = &local_44;
        FUN_01d12460(param_1,local_res20,local_30 + 2,&local_58);
        local_30 = local_30 + local_44 + 1;
      }
      else {
LAB_01d18c5a:
        if ((*(short *)(local_res20 + (longlong)local_30 * 2) == 0x5c) &&
           (*(short *)(local_res20 + (longlong)(local_30 + 1) * 2) == 0x65)) {
          local_108 = (int *)&local_60;
          local_100 = &local_44;
          FUN_01d12460(param_1,local_res20,local_30 + 2,&local_58);
          local_78 = FUN_01d13670(param_1,param_3,local_58);
          local_84 = FUN_005fce00(*(undefined8 *)(param_3 + 0x70));
          uVar2 = FUN_0040c840(*(double *)(param_1 + 0x18) * (double)local_84);
          FUN_005fce30(*(undefined8 *)(param_3 + 0x70),uVar2);
          local_7c = FUN_01d13670(param_1,param_3,local_60);
          FUN_005fce30(*(undefined8 *)(param_3 + 0x70),local_84);
          uVar2 = FUN_0040c840(((double)local_78 / 2.0 + (double)local_7c) -
                               *(double *)(param_1 + 8) * (double)local_78);
          local_74 = FUN_01d120a0(local_74,uVar2);
          local_30 = local_30 + local_44 + 1;
        }
      }
      local_30 = local_30 + 1;
    }
    local_30 = 0;
    while( true ) {
      iVar1 = FUN_01d11780(local_res20);
      if (iVar1 <= local_30) break;
      if ((*(short *)(local_res20 + (longlong)local_30 * 2) == 0x5c) &&
         (*(short *)(local_res20 + (longlong)(local_30 + 1) * 2) == 0x5c)) {
        local_30 = local_30 + 1;
      }
      if (*(short *)(local_res20 + (longlong)local_30 * 2) == 0x5c) {
        uVar7 = *(short *)(local_res20 + (longlong)(local_30 + 1) * 2) - 0x60;
        if (uVar7 < 0x10) {
          bVar10 = ((int)CONCAT62((int6)((ulonglong)local_res20 >> 0x10),1) << ((byte)uVar7 & 0x1f)
                   & 0x260U) != 0;
        }
        else {
          bVar10 = false;
        }
        if (!bVar10) goto LAB_01d18ee4;
        local_108 = (int *)&local_60;
        local_100 = &local_44;
        FUN_01d12460(param_1,local_res20,local_30 + 2,&local_58);
        local_30 = local_30 + local_44 + 1;
      }
      else {
LAB_01d18ee4:
        if ((*(short *)(local_res20 + (longlong)local_30 * 2) == 0x5c) &&
           (*(short *)(local_res20 + (longlong)(local_30 + 1) * 2) == 0x6f)) {
          local_108 = (int *)&local_60;
          local_100 = &local_44;
          FUN_01d12460(param_1,local_res20,local_30 + 2,&local_58);
          local_78 = FUN_01d13670(param_1,param_3,local_58);
          local_7c = FUN_01d13670(param_1,param_3,local_60);
          uVar2 = FUN_0040c840(((double)local_78 / 2.0 + (double)local_7c) -
                               *(double *)(param_1 + 0x30) * (double)local_78);
          local_74 = FUN_01d120a0(local_74,uVar2);
          local_30 = local_30 + local_44 + 1;
        }
      }
      local_30 = local_30 + 1;
    }
    local_2c = 0;
    local_30 = 0;
LAB_01d1a926:
    do {
      iVar1 = FUN_01d11780(local_res20);
      if (iVar1 <= local_30) goto code_r0x01d1a93e;
      if (*(short *)(local_res20 + (longlong)local_30 * 2) == 0x5c) {
        iVar1 = FUN_01d11780(local_res20);
        if ((local_30 + 2 <= iVar1) &&
           (*(short *)(local_res20 + (longlong)(local_30 + 2) * 2) == 0x28)) {
          FUN_01d11790(&local_50,&local_res20,local_2c,local_30 - local_2c);
          iVar1 = FUN_01d12720(param_1,param_3,local_50);
          iVar8 = local_30;
          local_70 = local_70 + iVar1;
          local_2c = local_30;
          iVar1 = local_30 + 1;
          uVar7 = *(ushort *)(local_res20 + (longlong)iVar1 * 2);
          if (uVar7 < 0x65) {
            if (uVar7 == 100) {
              local_2c = local_30 + 2;
              local_108 = &local_44;
              local_30 = iVar1;
              FUN_01d12360(param_1,local_res20,local_2c,&local_50);
              local_30 = local_2c + local_44 + 2;
              local_2c = local_30;
              goto LAB_01d1a926;
            }
            if (uVar7 < 0x54) {
              if (uVar7 == 0x53) {
                local_2c = local_30 + 2;
                local_108 = (int *)&local_60;
                local_100 = &local_44;
                local_30 = iVar1;
                FUN_01d12460(param_1,local_res20,local_2c,&local_58);
                local_84 = FUN_005fce00(*(undefined8 *)(param_3 + 0x70));
                FUN_004167d0(&local_d0,local_60);
                uVar2 = FUN_0043fc00(local_d0);
                FUN_005fce30(*(undefined8 *)(param_3 + 0x70),uVar2);
                iVar1 = FUN_01d13670(param_1,param_3,local_58);
                uVar2 = FUN_0040c840((double)(param_6 + local_74) - (double)iVar1 / 2.0);
                local_108 = (int *)CONCAT44(local_108._4_4_,param_5 + local_70);
                local_100 = (int *)CONCAT44(local_100._4_4_,uVar2);
                local_f8 = param_7;
                local_f0 = param_8;
                local_e8 = param_9;
                FUN_01d18800(param_1,param_2,param_3,local_58);
                iVar1 = FUN_01d12720(param_1,param_3,local_50);
                local_70 = local_70 + iVar1;
                FUN_005fce30(*(undefined8 *)(param_3 + 0x70),local_84);
                local_30 = local_2c + local_44;
                local_2c = local_30;
                goto LAB_01d1a926;
              }
              if (uVar7 == 0x42) {
                local_2c = local_30 + 2;
                local_108 = &local_44;
                local_30 = iVar1;
                FUN_01d12360(param_1,local_res20,local_2c,&local_50);
                local_69 = FUN_005fce60(*(undefined8 *)(param_3 + 0x70));
                local_a0 = *(undefined8 *)(param_3 + 0x70);
                uVar4 = FUN_005fce60(local_a0);
                FUN_005fce70(local_a0,uVar4 | 1);
                iVar1 = FUN_01d13670(param_1,param_3,local_50);
                uVar2 = FUN_0040c840((double)(param_6 + local_74) - (double)iVar1 / 2.0);
                local_108 = (int *)CONCAT44(local_108._4_4_,param_5 + local_70);
                local_100 = (int *)CONCAT44(local_100._4_4_,uVar2);
                local_f8 = param_7;
                local_f0 = param_8;
                local_e8 = param_9;
                FUN_01d18800(param_1,param_2,param_3,local_50);
                iVar1 = FUN_01d12720(param_1,param_3,local_50);
                local_70 = local_70 + iVar1;
                FUN_005fce70(*(undefined8 *)(param_3 + 0x70),local_69);
                local_30 = local_2c + local_44 + 2;
                local_2c = local_30;
                goto LAB_01d1a926;
              }
              if (uVar7 == 0x43) {
                local_2c = local_30 + 2;
                local_108 = &local_44;
                local_30 = iVar1;
                FUN_01d12360(param_1,local_res20,local_2c,&local_50);
                iVar1 = FUN_01d13670(param_1,param_3,local_50);
                uVar2 = FUN_0040c840((double)(param_6 + local_74) - (double)iVar1 / 2.0);
                local_108 = (int *)CONCAT44(local_108._4_4_,param_5 + local_70);
                local_100 = (int *)CONCAT44(local_100._4_4_,uVar2);
                local_f8 = param_7;
                local_f0 = param_8;
                local_e8 = param_9;
                FUN_01d18800(param_1,param_2,param_3,local_50);
                iVar1 = FUN_01d12720(param_1,param_3,local_50);
                local_70 = local_70 + iVar1;
                local_30 = local_2c + local_44 + 2;
                local_2c = local_30;
                goto LAB_01d1a926;
              }
              if (uVar7 == 0x49) {
                local_2c = local_30 + 2;
                local_108 = &local_44;
                local_30 = iVar1;
                FUN_01d12360(param_1,local_res20,local_2c,&local_50);
                local_69 = FUN_005fce60(*(undefined8 *)(param_3 + 0x70));
                local_a8 = *(undefined8 *)(param_3 + 0x70);
                uVar4 = FUN_005fce60(local_a8);
                FUN_005fce70(local_a8,uVar4 | 2);
                iVar1 = FUN_01d13670(param_1,param_3,local_50);
                uVar2 = FUN_0040c840((double)(param_6 + local_74) - (double)iVar1 / 2.0);
                local_108 = (int *)CONCAT44(local_108._4_4_,param_5 + local_70);
                local_100 = (int *)CONCAT44(local_100._4_4_,uVar2);
                local_f8 = param_7;
                local_f0 = param_8;
                local_e8 = param_9;
                FUN_01d18800(param_1,param_2,param_3,local_50);
                iVar1 = FUN_01d12720(param_1,param_3,local_50);
                local_70 = local_70 + iVar1;
                FUN_005fce70(*(undefined8 *)(param_3 + 0x70),local_69);
                local_30 = local_2c + local_44 + 2;
                local_2c = local_30;
                goto LAB_01d1a926;
              }
            }
            else {
              if (uVar7 == 0x55) {
                local_2c = local_30 + 2;
                local_108 = &local_44;
                local_30 = iVar1;
                FUN_01d12360(param_1,local_res20,local_2c,&local_50);
                local_69 = FUN_005fce60(*(undefined8 *)(param_3 + 0x70));
                local_b0 = *(undefined8 *)(param_3 + 0x70);
                uVar4 = FUN_005fce60(local_b0);
                FUN_005fce70(local_b0,uVar4 | 4);
                iVar1 = FUN_01d13670(param_1,param_3,local_50);
                uVar2 = FUN_0040c840((double)(param_6 + local_74) - (double)iVar1 / 2.0);
                local_108 = (int *)CONCAT44(local_108._4_4_,param_5 + local_70);
                local_100 = (int *)CONCAT44(local_100._4_4_,uVar2);
                local_f8 = param_7;
                local_f0 = param_8;
                local_e8 = param_9;
                FUN_01d18800(param_1,param_2,param_3,local_50);
                iVar1 = FUN_01d12720(param_1,param_3,local_50);
                local_70 = local_70 + iVar1;
                FUN_005fce70(*(undefined8 *)(param_3 + 0x70),local_69);
                local_30 = local_2c + local_44 + 2;
                local_2c = local_30;
                goto LAB_01d1a926;
              }
              if (uVar7 == 0x5c) {
                iVar9 = iVar1 - local_30;
                local_30 = iVar1;
                FUN_01d11790(&local_50,&local_res20,iVar8,iVar9 + -1);
                iVar1 = FUN_01d12720(param_1,param_3,local_50);
                local_70 = local_70 + iVar1;
                local_2c = local_30;
                local_30 = local_30 + 1;
                goto LAB_01d1a926;
              }
              if (uVar7 == 0x61) {
                local_2c = local_30 + 2;
                local_108 = (int *)&local_60;
                local_100 = &local_44;
                local_30 = iVar1;
                FUN_01d12460(param_1,local_res20,local_2c,&local_58);
                uVar4 = FUN_005fce60(*(undefined8 *)(param_3 + 0x70));
                FUN_005fce70(*(undefined8 *)(param_3 + 0x70),uVar4 | 4);
                local_78 = FUN_01d13670(param_1,param_3,local_58);
                local_7c = FUN_01d12720(param_1,param_3,local_58);
                uVar5 = FUN_005fce60(*(undefined8 *)(param_3 + 0x70));
                FUN_005fce70(*(undefined8 *)(param_3 + 0x70),uVar5 & 0xfffffffb);
                if (*param_9 != 0) {
                  local_98 = (int *)FUN_00418560(0x20,&DAT_01d10758);
                  local_90 = local_98;
                  iVar1 = FUN_005fce00(*(undefined8 *)(param_1 + 0x80));
                  *local_98 = param_5 + local_70 + iVar1 / 2;
                  local_98[2] = *local_98 + local_7c;
                  iVar1 = FUN_0040c840((double)(param_6 + local_74) - (double)local_40 / 2.0,
                                       (longlong)iVar1 % 2 & 0xffffffff);
                  local_98[1] = iVar1;
                  local_98[3] = local_98[1] + local_78;
                  FUN_004167d0(local_98 + 4,local_58);
                  FUN_004167d0(local_98 + 6,local_60);
                  FUN_004ae7e0(*param_9,local_90);
                }
                if ((param_5 + local_70 <= param_7) && (param_7 <= param_5 + local_70 + local_7c)) {
                  lVar6 = FUN_0040c840((double)(param_6 + local_74) - (double)local_40 / 2.0);
                  if (lVar6 <= param_8) {
                    lVar6 = FUN_0040c840((double)(param_6 + local_74) - (double)local_40 / 2.0);
                    if ((longlong)param_8 <= lVar6 + local_78) {
                      FUN_004167d0(param_2,local_60);
                    }
                  }
                }
                local_30 = local_2c + local_44;
                local_70 = local_70 + local_7c;
                local_2c = local_30;
                goto LAB_01d1a926;
              }
            }
          }
          else if (uVar7 < 0x6d) {
            if (uVar7 == 0x6c) {
              local_2c = local_30 + 2;
              local_108 = &local_44;
              local_30 = iVar1;
              FUN_01d12360(param_1,local_res20,local_2c,&local_50);
              FUN_00442b00(&local_c8,local_50);
              FUN_0043fc00(local_c8);
              local_b8 = *(longlong *)(param_3 + 0x70);
              lVar6 = FUN_0040c770((double)(*(int *)(*(longlong *)(local_b8 + 0x18) + 0x28) * 4));
              if (lVar6 < 0) {
                lVar6 = -lVar6;
              }
              local_70 = local_70 + (int)lVar6;
              local_30 = local_2c + local_44 + 2;
              local_2c = local_30;
              goto LAB_01d1a926;
            }
            if (uVar7 == 0x65) {
              local_2c = local_30 + 2;
              local_108 = (int *)&local_60;
              local_100 = &local_44;
              local_30 = iVar1;
              FUN_01d12460(param_1,local_res20,local_2c,&local_58);
              local_78 = FUN_01d13670(param_1,param_3,local_58);
              local_7c = FUN_01d12720(param_1,param_3,local_58);
              uVar2 = FUN_0040c840((double)(param_6 + local_74) - (double)local_40 / 2.0);
              local_f8 = param_7;
              local_f0 = param_8;
              local_e8 = param_9;
              local_108._0_4_ = param_5 + local_70;
              local_100._0_4_ = uVar2;
              FUN_01d18800(param_1,param_2,param_3,local_58);
              local_84 = FUN_005fce00(*(undefined8 *)(param_3 + 0x70));
              uVar2 = FUN_0040c840(*(double *)(param_1 + 0x18) * (double)local_84);
              FUN_005fce30(*(undefined8 *)(param_3 + 0x70),uVar2);
              iVar1 = FUN_01d13670(param_1,param_3,local_60);
              uVar2 = FUN_0040c840((((double)(param_6 + local_74) - (double)local_78 / 2.0) -
                                   (double)iVar1) + *(double *)(param_1 + 8) * (double)local_78);
              local_108 = (int *)CONCAT44(local_108._4_4_,param_5 + local_70 + local_7c);
              local_100 = (int *)CONCAT44(local_100._4_4_,uVar2);
              local_f8 = param_7;
              local_f0 = param_8;
              local_e8 = param_9;
              FUN_01d18800(param_1,param_2,param_3,local_60);
              local_78 = FUN_01d12720(param_1,param_3,local_60);
              FUN_005fce30(*(undefined8 *)(param_3 + 0x70),local_84);
              local_30 = local_2c + local_44;
              local_70 = local_70 + local_78 + local_7c;
              local_2c = local_30;
              goto LAB_01d1a926;
            }
            if (uVar7 == 0x66) {
              local_2c = local_30 + 2;
              local_108 = (int *)&local_60;
              local_100 = &local_44;
              local_30 = iVar1;
              FUN_01d12460(param_1,local_res20,local_2c,&local_58);
              iVar1 = FUN_01d12720(param_1,param_3,local_58);
              local_34 = FUN_01d12720(param_1,param_3,local_60);
              local_34 = iVar1 - local_34;
              uVar2 = FUN_0040c840((double)local_34 / 2.0);
              uVar4 = FUN_01d12090(uVar2,0);
              local_38 = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
              uVar2 = FUN_0040c840((double)local_34 / 2.0);
              local_3c = FUN_01d120a0(uVar2,0);
              iVar8 = param_5 + local_70;
              iVar1 = FUN_01d13670(param_1,param_3,local_58);
              uVar2 = FUN_0040c840(((double)(param_6 + local_74) -
                                   (*(double *)(param_1 + 0x28) * (double)local_40) / 2.0) -
                                   (double)iVar1);
              local_f8 = param_7;
              local_f0 = param_8;
              local_e8 = param_9;
              local_108._0_4_ = iVar8 + local_38;
              local_100._0_4_ = uVar2;
              FUN_01d18800(param_1,param_2,param_3,local_58);
              uVar2 = FUN_0040c840((double)(param_6 + local_74) +
                                   (*(double *)(param_1 + 0x28) * (double)local_40) / 2.0);
              local_108 = (int *)CONCAT44(local_108._4_4_,iVar8 + local_3c);
              local_100 = (int *)CONCAT44(local_100._4_4_,uVar2);
              local_f8 = param_7;
              local_f0 = param_8;
              local_e8 = param_9;
              FUN_01d18800(param_1,param_2,param_3,local_60);
              local_30 = local_2c + local_44;
              local_2c = local_30;
              uVar2 = FUN_01d12720(param_1,param_3,local_58);
              uVar3 = FUN_01d12720(param_1,param_3,local_60);
              iVar1 = FUN_01d120a0(uVar2,uVar3);
              local_70 = local_70 + iVar1;
              goto LAB_01d1a926;
            }
            if (uVar7 == 0x69) {
              local_2c = local_30 + 2;
              local_108 = (int *)&local_60;
              local_100 = &local_44;
              local_30 = iVar1;
              FUN_01d12460(param_1,local_res20,local_2c,&local_58);
              local_78 = FUN_01d13670(param_1,param_3,local_58);
              local_7c = FUN_01d12720(param_1,param_3,local_58);
              uVar2 = FUN_0040c840((double)(param_6 + local_74) - (double)local_40 / 2.0);
              local_f8 = param_7;
              local_f0 = param_8;
              local_e8 = param_9;
              local_108._0_4_ = param_5 + local_70;
              local_100._0_4_ = uVar2;
              FUN_01d18800(param_1,param_2,param_3,local_58);
              local_84 = FUN_005fce00(*(undefined8 *)(param_3 + 0x70));
              uVar2 = FUN_0040c840(*(double *)(param_1 + 0x20) * (double)local_84);
              FUN_005fce30(*(undefined8 *)(param_3 + 0x70),uVar2);
              uVar2 = FUN_0040c840((((double)(param_6 + local_74) - (double)local_40 / 2.0) +
                                   (double)local_78) -
                                   *(double *)(param_1 + 0x10) * (double)local_78);
              local_108 = (int *)CONCAT44(local_108._4_4_,param_5 + local_70 + local_7c);
              local_100 = (int *)CONCAT44(local_100._4_4_,uVar2);
              local_f8 = param_7;
              local_f0 = param_8;
              local_e8 = param_9;
              FUN_01d18800(param_1,param_2,param_3,local_60);
              local_78 = FUN_01d12720(param_1,param_3,local_60);
              FUN_005fce30(*(undefined8 *)(param_3 + 0x70),local_84);
              local_30 = local_2c + local_44;
              local_70 = local_70 + local_78 + local_7c;
              local_2c = local_30;
              goto LAB_01d1a926;
            }
          }
          else {
            if (uVar7 == 0x6f) {
              local_2c = local_30 + 2;
              local_108 = (int *)&local_60;
              local_100 = &local_44;
              local_30 = iVar1;
              FUN_01d12460(param_1,local_res20,local_2c,&local_58);
              local_78 = FUN_01d12720(param_1,param_3,local_58);
              local_7c = FUN_01d12720(param_1,param_3,local_60);
              local_34 = local_78 - local_7c;
              uVar2 = FUN_0040c840((double)local_34 / 2.0);
              uVar4 = FUN_01d12090(uVar2,0);
              local_38 = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
              uVar2 = FUN_0040c840((double)local_34 / 2.0);
              local_3c = FUN_01d120a0(uVar2,0);
              local_78 = FUN_01d13670(param_1,param_3,local_58);
              local_7c = FUN_01d13670(param_1,param_3,local_60);
              uVar2 = FUN_0040c840((double)(param_6 + local_74) - (double)local_40 / 2.0);
              local_f8 = param_7;
              local_f0 = param_8;
              local_e8 = param_9;
              local_108._0_4_ = param_5 + local_70 + local_38;
              local_100._0_4_ = uVar2;
              FUN_01d18800(param_1,param_2,param_3,local_58);
              uVar2 = FUN_0040c840((((double)(param_6 + local_74) - (double)local_40 / 2.0) -
                                   (double)local_7c) +
                                   *(double *)(param_1 + 0x30) * (double)local_78);
              local_108 = (int *)CONCAT44(local_108._4_4_,param_5 + local_70 + local_3c);
              local_100 = (int *)CONCAT44(local_100._4_4_,uVar2);
              local_f8 = param_7;
              local_f0 = param_8;
              local_e8 = param_9;
              FUN_01d18800(param_1,param_2,param_3,local_60);
              local_30 = local_2c + local_44;
              local_2c = local_30;
              local_78 = FUN_01d12720(param_1,param_3,local_58);
              local_7c = FUN_01d12720(param_1,param_3,local_60);
              iVar1 = FUN_01d120a0(local_78,local_7c);
              local_70 = local_70 + iVar1;
              goto LAB_01d1a926;
            }
            if (uVar7 == 0x73) {
              local_2c = local_30 + 2;
              local_108 = &local_44;
              local_30 = iVar1;
              FUN_01d12360(param_1,local_res20,local_2c,&local_50);
              FUN_005fccd0(*(undefined8 *)(param_3 + 0x70),&local_68);
              FUN_005fcd80(*(undefined8 *)(param_3 + 0x70),*(undefined8 *)(param_1 + 0x90));
              iVar1 = FUN_01d13670(param_1,param_3,local_50);
              uVar2 = FUN_0040c840((double)(param_6 + local_74) - (double)iVar1 / 2.0);
              local_108 = (int *)CONCAT44(local_108._4_4_,param_5 + local_70);
              local_100 = (int *)CONCAT44(local_100._4_4_,uVar2);
              local_f8 = param_7;
              local_f0 = param_8;
              local_e8 = param_9;
              FUN_01d18800(param_1,param_2,param_3,local_50);
              iVar1 = FUN_01d12720(param_1,param_3,local_50);
              local_70 = local_70 + iVar1;
              FUN_005fcd80(*(undefined8 *)(param_3 + 0x70),local_68);
              local_30 = local_2c + local_44 + 2;
              local_2c = local_30;
              goto LAB_01d1a926;
            }
          }
          iVar9 = iVar1 - local_30;
          local_30 = iVar1;
          FUN_01d11790(&local_50,&local_res20,iVar8,iVar9);
          iVar1 = FUN_01d12720(param_1,param_3,local_50);
          local_70 = local_70 + iVar1;
          local_2c = local_30;
          local_30 = local_30 + 1;
          goto LAB_01d1a926;
        }
      }
      local_30 = local_30 + 1;
    } while( true );
  }
  local_c0 = auStack_128;
  FUN_00414480(param_2);
LAB_01d1a99f:
  FUN_00414560(&local_d0,2);
  FUN_00414480(&local_68);
  return param_2;
code_r0x01d1a93e:
  iVar1 = FUN_01d11780(local_res20);
  if (local_2c < iVar1) {
    FUN_01d11790(&local_50,&local_res20,local_2c,local_30 - local_2c);
  }
  FUN_00442c30(local_50);
  FUN_00442c30(local_58);
  FUN_00442c30(local_60);
  goto LAB_01d1a99f;
}

