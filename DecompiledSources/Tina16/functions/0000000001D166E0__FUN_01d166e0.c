/* Ghidra address: 01d166e0 */
/* Ghidra symbol: FUN_01d166e0 */


void FUN_01d166e0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,int param_5,
                 int param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  double dVar12;
  longlong local_res20;
  undefined1 auStack_118 [32];
  int *local_f8;
  int *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  int local_9c;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined1 local_71;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  
  local_d0 = auStack_118;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_80 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_res20 = param_4;
  if (*(char *)(param_1 + 0x98) != '\0') {
    local_88 = 0;
    local_8c = 0;
    if (param_4 == 0) {
      local_d0 = auStack_118;
      dVar12 = (double)FUN_01d11750(param_1);
      iVar1 = FUN_005fdfd0(param_2,&DAT_01d187ec);
      local_54 = FUN_0040c770(dVar12 * (double)iVar1);
    }
    else {
      local_54 = FUN_01d13560(param_1,param_2,param_4);
    }
    uVar2 = FUN_0040c840((double)local_54 / 2.0);
    local_8c = FUN_01d120a0(local_8c,uVar2);
    local_44 = 0;
    while( true ) {
      iVar1 = FUN_01d11780(local_res20);
      if (iVar1 <= local_44) break;
      if ((*(short *)(local_res20 + (longlong)local_44 * 2) == 0x5c) &&
         (*(short *)(local_res20 + (longlong)(local_44 + 1) * 2) == 0x5c)) {
        local_44 = local_44 + 1;
      }
      if (*(short *)(local_res20 + (longlong)local_44 * 2) == 0x5c) {
        uVar7 = *(short *)(local_res20 + (longlong)(local_44 + 1) * 2) - 0x60;
        if (uVar7 < 0x10) {
          bVar11 = ((int)CONCAT62((int6)((ulonglong)local_res20 >> 0x10),1) << ((byte)uVar7 & 0x1f)
                   & 0x8220U) != 0;
        }
        else {
          bVar11 = false;
        }
        if (!bVar11) goto LAB_01d16939;
        local_f8 = (int *)&local_70;
        local_f0 = &local_58;
        FUN_01d12460(param_1,local_res20,local_44 + 2,&local_68);
        local_44 = local_44 + local_58 + 1;
      }
      else {
LAB_01d16939:
        if ((*(short *)(local_res20 + (longlong)local_44 * 2) == 0x5c) &&
           (*(short *)(local_res20 + (longlong)(local_44 + 1) * 2) == 0x66)) {
          local_f8 = (int *)&local_70;
          local_f0 = &local_58;
          FUN_01d12460(param_1,local_res20,local_44 + 2,&local_68);
          iVar1 = FUN_01d13670(param_1,param_2,local_68);
          iVar9 = FUN_0040c840((*(double *)(param_1 + 0x28) * (double)local_54) / 2.0);
          local_8c = FUN_01d120a0(local_8c,iVar1 + iVar9);
          break;
        }
      }
      local_44 = local_44 + 1;
    }
    local_44 = 0;
    while( true ) {
      iVar1 = FUN_01d11780(local_res20);
      if (iVar1 <= local_44) break;
      if ((*(short *)(local_res20 + (longlong)local_44 * 2) == 0x5c) &&
         (*(short *)(local_res20 + (longlong)(local_44 + 1) * 2) == 0x5c)) {
        local_44 = local_44 + 1;
      }
      if (*(short *)(local_res20 + (longlong)local_44 * 2) == 0x5c) {
        uVar7 = *(short *)(local_res20 + (longlong)(local_44 + 1) * 2) - 0x60;
        if (uVar7 < 0x10) {
          bVar11 = ((int)CONCAT62((int6)((ulonglong)local_res20 >> 0x10),1) << ((byte)uVar7 & 0x1f)
                   & 0x8240U) != 0;
        }
        else {
          bVar11 = false;
        }
        if (!bVar11) goto LAB_01d16b1c;
        local_f8 = (int *)&local_70;
        local_f0 = &local_58;
        FUN_01d12460(param_1,local_res20,local_44 + 2,&local_68);
        local_44 = local_44 + local_58 + 1;
      }
      else {
LAB_01d16b1c:
        if ((*(short *)(local_res20 + (longlong)local_44 * 2) == 0x5c) &&
           (*(short *)(local_res20 + (longlong)(local_44 + 1) * 2) == 0x65)) {
          local_f8 = (int *)&local_70;
          local_f0 = &local_58;
          FUN_01d12460(param_1,local_res20,local_44 + 2,&local_68);
          local_90 = FUN_01d13670(param_1,param_2,local_68);
          local_9c = FUN_005fce00(*(undefined8 *)(param_2 + 0x70));
          uVar2 = FUN_0040c840(*(double *)(param_1 + 0x18) * (double)local_9c);
          FUN_005fce30(*(undefined8 *)(param_2 + 0x70),uVar2);
          local_94 = FUN_01d13670(param_1,param_2,local_70);
          FUN_005fce30(*(undefined8 *)(param_2 + 0x70),local_9c);
          uVar2 = FUN_0040c840(((double)local_90 / 2.0 + (double)local_94) -
                               *(double *)(param_1 + 8) * (double)local_90);
          local_8c = FUN_01d120a0(local_8c,uVar2);
          local_44 = local_44 + local_58 + 1;
        }
      }
      local_44 = local_44 + 1;
    }
    local_44 = 0;
    while( true ) {
      iVar1 = FUN_01d11780(local_res20);
      if (iVar1 <= local_44) break;
      if ((*(short *)(local_res20 + (longlong)local_44 * 2) == 0x5c) &&
         (*(short *)(local_res20 + (longlong)(local_44 + 1) * 2) == 0x5c)) {
        local_44 = local_44 + 1;
      }
      if (*(short *)(local_res20 + (longlong)local_44 * 2) == 0x5c) {
        uVar7 = *(short *)(local_res20 + (longlong)(local_44 + 1) * 2) - 0x60;
        if (uVar7 < 0x10) {
          bVar11 = ((int)CONCAT62((int6)((ulonglong)local_res20 >> 0x10),1) << ((byte)uVar7 & 0x1f)
                   & 0x260U) != 0;
        }
        else {
          bVar11 = false;
        }
        if (!bVar11) goto LAB_01d16d9d;
        local_f8 = (int *)&local_70;
        local_f0 = &local_58;
        FUN_01d12460(param_1,local_res20,local_44 + 2,&local_68);
        local_44 = local_44 + local_58 + 1;
      }
      else {
LAB_01d16d9d:
        if ((*(short *)(local_res20 + (longlong)local_44 * 2) == 0x5c) &&
           (*(short *)(local_res20 + (longlong)(local_44 + 1) * 2) == 0x6f)) {
          local_f8 = (int *)&local_70;
          local_f0 = &local_58;
          FUN_01d12460(param_1,local_res20,local_44 + 2,&local_68);
          local_90 = FUN_01d13670(param_1,param_2,local_68);
          local_94 = FUN_01d13670(param_1,param_2,local_70);
          uVar2 = FUN_0040c840(((double)local_90 / 2.0 + (double)local_94) -
                               *(double *)(param_1 + 0x30) * (double)local_90);
          local_8c = FUN_01d120a0(local_8c,uVar2);
          local_44 = local_44 + local_58 + 1;
        }
      }
      local_44 = local_44 + 1;
    }
    local_40 = 0;
    local_44 = 0;
LAB_01d186a1:
    do {
      iVar1 = FUN_01d11780(local_res20);
      if (iVar1 <= local_44) goto code_r0x01d186b9;
      if (*(short *)(local_res20 + (longlong)local_44 * 2) == 0x5c) {
        iVar1 = FUN_01d11780(local_res20);
        if ((local_44 + 2 <= iVar1) &&
           (*(short *)(local_res20 + (longlong)(local_44 + 2) * 2) == 0x28)) {
          FUN_01d11790(&local_60,&local_res20,local_40,local_44 - local_40);
          iVar10 = param_6 + local_8c;
          iVar1 = FUN_01d13670(param_1,param_2,local_60);
          uVar2 = FUN_0040c840((double)iVar10 - (double)iVar1 / 2.0);
          FUN_01d15da0(auStack_118,param_5 + local_88,uVar2,local_60);
          iVar1 = FUN_01d12720(param_1,param_2,local_60);
          iVar9 = local_44;
          local_88 = local_88 + iVar1;
          local_40 = local_44;
          iVar1 = local_44 + 1;
          uVar7 = *(ushort *)(local_res20 + (longlong)iVar1 * 2);
          if (uVar7 < 0x65) {
            if (uVar7 == 100) {
              local_40 = local_44 + 2;
              local_f8 = &local_58;
              local_44 = iVar1;
              FUN_01d12360(param_1,local_res20,local_40,&local_60);
              local_44 = local_40 + local_58 + 2;
              local_40 = local_44;
              goto LAB_01d186a1;
            }
            if (uVar7 < 0x54) {
              if (uVar7 == 0x53) {
                local_40 = local_44 + 2;
                local_f8 = (int *)&local_70;
                local_f0 = &local_58;
                local_44 = iVar1;
                FUN_01d12460(param_1,local_res20,local_40,&local_68);
                local_9c = FUN_005fce00(*(undefined8 *)(param_2 + 0x70));
                FUN_004167d0(&local_e8,local_70);
                uVar2 = FUN_0043fc00(local_e8);
                FUN_005fce30(*(undefined8 *)(param_2 + 0x70),uVar2);
                FUN_01d13670(param_1,param_2,local_68);
                local_94 = FUN_01d12720(param_1,param_2,local_68);
                uVar2 = FUN_0040c840((double)(param_6 + local_8c) - (double)local_54 / 2.0);
                local_f8 = (int *)CONCAT44(local_f8._4_4_,param_5 + local_88);
                local_f0 = (int *)CONCAT44(local_f0._4_4_,uVar2);
                FUN_01d166e0(param_1,param_2,param_3,local_68);
                FUN_005fce30(*(undefined8 *)(param_2 + 0x70),local_9c);
                local_44 = local_40 + local_58;
                local_88 = local_88 + local_94;
                local_40 = local_44;
                goto LAB_01d186a1;
              }
              if (uVar7 == 0x42) {
                local_40 = local_44 + 2;
                local_f8 = &local_58;
                local_44 = iVar1;
                FUN_01d12360(param_1,local_res20,local_40,&local_60);
                local_71 = FUN_005fce60(*(undefined8 *)(param_2 + 0x70));
                local_a8 = *(undefined8 *)(param_2 + 0x70);
                uVar4 = FUN_005fce60(local_a8);
                FUN_005fce70(local_a8,uVar4 | 1);
                uVar2 = FUN_0040c840((double)(param_6 + local_8c) - (double)local_54 / 2.0);
                local_f8 = (int *)CONCAT44(local_f8._4_4_,param_5 + local_88);
                local_f0 = (int *)CONCAT44(local_f0._4_4_,uVar2);
                FUN_01d166e0(param_1,param_2,param_3,local_60);
                iVar1 = FUN_01d12720(param_1,param_2,local_60);
                local_88 = local_88 + iVar1;
                FUN_005fce70(*(undefined8 *)(param_2 + 0x70),local_71);
                local_44 = local_40 + local_58 + 2;
                local_40 = local_44;
                goto LAB_01d186a1;
              }
              if (uVar7 == 0x43) {
                local_40 = local_44 + 2;
                local_f8 = (int *)&local_70;
                local_f0 = &local_58;
                local_44 = iVar1;
                FUN_01d12460(param_1,local_res20,local_40,&local_68);
                local_84 = *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x28);
                FUN_004167d0(&local_e0,local_70);
                uVar2 = FUN_00636250(local_e0);
                FUN_005fc860(*(undefined8 *)(param_2 + 0x70),uVar2);
                FUN_01d13670(param_1,param_2,local_68);
                local_94 = FUN_01d12720(param_1,param_2,local_68);
                uVar2 = FUN_0040c840((double)(param_6 + local_8c) - (double)local_54 / 2.0);
                local_f8 = (int *)CONCAT44(local_f8._4_4_,param_5 + local_88);
                local_f0 = (int *)CONCAT44(local_f0._4_4_,uVar2);
                FUN_01d166e0(param_1,param_2,param_3,local_68);
                FUN_005fc860(*(undefined8 *)(param_2 + 0x70),local_84);
                local_44 = local_40 + local_58;
                local_88 = local_88 + local_94;
                local_40 = local_44;
                goto LAB_01d186a1;
              }
              if (uVar7 == 0x49) {
                local_40 = local_44 + 2;
                local_f8 = &local_58;
                local_44 = iVar1;
                FUN_01d12360(param_1,local_res20,local_40,&local_60);
                local_71 = FUN_005fce60(*(undefined8 *)(param_2 + 0x70));
                local_b0 = *(undefined8 *)(param_2 + 0x70);
                uVar4 = FUN_005fce60(local_b0);
                FUN_005fce70(local_b0,uVar4 | 2);
                uVar2 = FUN_0040c840((double)(param_6 + local_8c) - (double)local_54 / 2.0);
                local_f8 = (int *)CONCAT44(local_f8._4_4_,param_5 + local_88);
                local_f0 = (int *)CONCAT44(local_f0._4_4_,uVar2);
                FUN_01d166e0(param_1,param_2,param_3,local_60);
                iVar1 = FUN_01d12720(param_1,param_2,local_60);
                local_88 = local_88 + iVar1;
                FUN_005fce70(*(undefined8 *)(param_2 + 0x70),local_71);
                local_44 = local_40 + local_58 + 2;
                local_40 = local_44;
                goto LAB_01d186a1;
              }
            }
            else {
              if (uVar7 == 0x55) {
                local_40 = local_44 + 2;
                local_f8 = &local_58;
                local_44 = iVar1;
                FUN_01d12360(param_1,local_res20,local_40,&local_60);
                local_71 = FUN_005fce60(*(undefined8 *)(param_2 + 0x70));
                local_b8 = *(undefined8 *)(param_2 + 0x70);
                uVar4 = FUN_005fce60(local_b8);
                FUN_005fce70(local_b8,uVar4 | 4);
                uVar2 = FUN_0040c840((double)(param_6 + local_8c) - (double)local_54 / 2.0);
                local_f8 = (int *)CONCAT44(local_f8._4_4_,param_5 + local_88);
                local_f0 = (int *)CONCAT44(local_f0._4_4_,uVar2);
                FUN_01d166e0(param_1,param_2,param_3,local_60);
                iVar1 = FUN_01d12720(param_1,param_2,local_60);
                local_88 = local_88 + iVar1;
                FUN_005fce70(*(undefined8 *)(param_2 + 0x70),local_71);
                local_44 = local_40 + local_58 + 2;
                local_40 = local_44;
                goto LAB_01d186a1;
              }
              if (uVar7 == 0x5c) {
                iVar10 = iVar1 - local_44;
                local_44 = iVar1;
                FUN_01d11790(&local_60,&local_res20,iVar9,iVar10 + -1);
                uVar2 = FUN_0040c840((double)(param_6 + local_8c) - (double)local_54 / 2.0);
                FUN_01d15da0(auStack_118,param_5 + local_88,uVar2,local_60);
                iVar1 = FUN_01d12720(param_1,param_2,local_60);
                local_88 = local_88 + iVar1;
                local_40 = local_44;
                local_44 = local_44 + 1;
                goto LAB_01d186a1;
              }
              if (uVar7 == 0x61) {
                local_40 = local_44 + 2;
                local_f8 = (int *)&local_70;
                local_f0 = &local_58;
                local_44 = iVar1;
                FUN_01d12460(param_1,local_res20,local_40,&local_68);
                uVar4 = FUN_005fce60(*(undefined8 *)(param_2 + 0x70));
                FUN_005fce70(*(undefined8 *)(param_2 + 0x70),uVar4 | 4);
                FUN_01d13670(param_1,param_2,local_68);
                local_94 = FUN_01d12720(param_1,param_2,local_68);
                if (*(char *)(param_1 + 0x78) == '\x01') {
                  FUN_004167d0(param_1 + 0xb0,local_70);
                }
                uVar2 = FUN_0040c840((double)(param_6 + local_8c) - (double)local_54 / 2.0);
                local_f8 = (int *)CONCAT44(local_f8._4_4_,param_5 + local_88);
                local_f0 = (int *)CONCAT44(local_f0._4_4_,uVar2);
                FUN_01d166e0(param_1,param_2,param_3,local_68);
                FUN_00414480(param_1 + 0xb0);
                uVar5 = FUN_005fce60(*(undefined8 *)(param_2 + 0x70));
                FUN_005fce70(*(undefined8 *)(param_2 + 0x70),uVar5 & 0xfffffffb);
                local_44 = local_40 + local_58;
                local_88 = local_88 + local_94;
                local_40 = local_44;
                goto LAB_01d186a1;
              }
            }
          }
          else if (uVar7 < 0x6d) {
            if (uVar7 == 0x6c) {
              local_40 = local_44 + 2;
              local_f8 = &local_58;
              local_44 = iVar1;
              FUN_01d12360(param_1,local_res20,local_40,&local_60);
              FUN_00442b00(&local_d8,local_60);
              local_3c = FUN_0043fc00(local_d8);
              local_c0 = *(longlong *)(param_2 + 0x70);
              uVar4 = *(uint *)(*(longlong *)(local_c0 + 0x18) + 0x28);
              uVar8 = (int)uVar4 >> 0x1f;
              local_f8 = (int *)CONCAT44(local_f8._4_4_,param_6 + local_8c);
              local_f0 = (int *)CONCAT44(local_f0._4_4_,(uVar4 ^ uVar8) - uVar8);
              FUN_01d1aaa0(param_1,param_2,local_3c,param_5 + local_88);
              local_c8 = *(longlong *)(param_2 + 0x70);
              lVar6 = FUN_0040c770((double)(*(int *)(*(longlong *)(local_c8 + 0x18) + 0x28) * 4));
              if (lVar6 < 0) {
                lVar6 = -lVar6;
              }
              local_88 = local_88 + (int)lVar6;
              local_44 = local_40 + local_58 + 2;
              local_40 = local_44;
              goto LAB_01d186a1;
            }
            if (uVar7 == 0x65) {
              local_40 = local_44 + 2;
              local_f8 = (int *)&local_70;
              local_f0 = &local_58;
              local_44 = iVar1;
              FUN_01d12460(param_1,local_res20,local_40,&local_68);
              local_90 = FUN_01d13670(param_1,param_2,local_68);
              local_94 = FUN_01d12720(param_1,param_2,local_68);
              iVar9 = param_5 + local_88;
              uVar2 = FUN_0040c840((double)(param_6 + local_8c) - (double)local_54 / 2.0);
              local_f8._0_4_ = iVar9;
              local_f0._0_4_ = uVar2;
              FUN_01d166e0(param_1,param_2,param_3,local_68);
              local_9c = FUN_005fce00(*(undefined8 *)(param_2 + 0x70));
              uVar2 = FUN_0040c840(*(double *)(param_1 + 0x18) * (double)local_9c);
              FUN_005fce30(*(undefined8 *)(param_2 + 0x70),uVar2);
              iVar1 = FUN_01d13670(param_1,param_2,local_70);
              uVar2 = FUN_0040c840((((double)(param_6 + local_8c) - (double)local_90 / 2.0) -
                                   (double)iVar1) + *(double *)(param_1 + 8) * (double)local_90);
              local_f8 = (int *)CONCAT44(local_f8._4_4_,iVar9 + local_94);
              local_f0 = (int *)CONCAT44(local_f0._4_4_,uVar2);
              FUN_01d166e0(param_1,param_2,param_3,local_70);
              local_90 = FUN_01d12720(param_1,param_2,local_70);
              FUN_005fce30(*(undefined8 *)(param_2 + 0x70),local_9c);
              local_44 = local_40 + local_58;
              local_88 = local_88 + local_90 + local_94;
              local_40 = local_44;
              goto LAB_01d186a1;
            }
            if (uVar7 == 0x66) {
              local_40 = local_44 + 2;
              local_f8 = (int *)&local_70;
              local_f0 = &local_58;
              local_44 = iVar1;
              FUN_01d12460(param_1,local_res20,local_40,&local_68);
              iVar1 = FUN_01d12720(param_1,param_2,local_68);
              local_48 = FUN_01d12720(param_1,param_2,local_70);
              local_48 = iVar1 - local_48;
              uVar2 = FUN_0040c840((double)local_48 / 2.0);
              uVar4 = FUN_01d12090(uVar2,0);
              local_4c = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
              uVar2 = FUN_0040c840((double)local_48 / 2.0);
              local_50 = FUN_01d120a0(uVar2,0);
              iVar9 = param_5 + local_88;
              iVar1 = FUN_01d13670(param_1,param_2,local_68);
              uVar2 = FUN_0040c840(((double)(param_6 + local_8c) -
                                   (*(double *)(param_1 + 0x28) * (double)local_54) / 2.0) -
                                   (double)iVar1);
              local_f8._0_4_ = iVar9 + local_4c;
              local_f0._0_4_ = uVar2;
              FUN_01d166e0(param_1,param_2,param_3,local_68);
              local_f0._0_4_ =
                   FUN_0040c840((double)(param_6 + local_8c) +
                                (*(double *)(param_1 + 0x28) * (double)local_54) / 2.0);
              local_f8._0_4_ = iVar9 + local_50;
              FUN_01d166e0(param_1,param_2,param_3,local_70);
              uVar2 = FUN_01d12720(param_1,param_2,local_68);
              uVar3 = FUN_01d12720(param_1,param_2,local_70);
              iVar1 = FUN_01d120a0(uVar2,uVar3);
              local_f8 = (int *)CONCAT44(local_f8._4_4_,param_5 + local_88 + iVar1);
              local_f0 = (int *)CONCAT44(local_f0._4_4_,iVar10);
              FUN_01d16380(auStack_118,param_2,iVar9,iVar10);
              local_44 = local_40 + local_58;
              local_40 = local_44;
              uVar2 = FUN_01d12720(param_1,param_2,local_68);
              uVar3 = FUN_01d12720(param_1,param_2,local_70);
              iVar1 = FUN_01d120a0(uVar2,uVar3);
              local_88 = local_88 + iVar1;
              goto LAB_01d186a1;
            }
            if (uVar7 == 0x69) {
              local_40 = local_44 + 2;
              local_f8 = (int *)&local_70;
              local_f0 = &local_58;
              local_44 = iVar1;
              FUN_01d12460(param_1,local_res20,local_40,&local_68);
              local_90 = FUN_01d13670(param_1,param_2,local_68);
              local_94 = FUN_01d12720(param_1,param_2,local_68);
              uVar2 = FUN_0040c840((double)(param_6 + local_8c) - (double)local_54 / 2.0);
              local_f8._0_4_ = param_5 + local_88;
              local_f0._0_4_ = uVar2;
              FUN_01d166e0(param_1,param_2,param_3,local_68);
              local_9c = FUN_005fce00(*(undefined8 *)(param_2 + 0x70));
              uVar2 = FUN_0040c840(*(double *)(param_1 + 0x20) * (double)local_9c);
              FUN_005fce30(*(undefined8 *)(param_2 + 0x70),uVar2);
              uVar2 = FUN_0040c840((((double)(param_6 + local_8c) - (double)local_54 / 2.0) +
                                   (double)local_90) -
                                   *(double *)(param_1 + 0x10) * (double)local_90);
              local_f8 = (int *)CONCAT44(local_f8._4_4_,param_5 + local_88 + local_94);
              local_f0 = (int *)CONCAT44(local_f0._4_4_,uVar2);
              FUN_01d166e0(param_1,param_2,param_3,local_70);
              local_90 = FUN_01d12720(param_1,param_2,local_70);
              FUN_005fce30(*(undefined8 *)(param_2 + 0x70),local_9c);
              local_44 = local_40 + local_58;
              local_88 = local_88 + local_90 + local_94;
              local_40 = local_44;
              goto LAB_01d186a1;
            }
          }
          else {
            if (uVar7 == 0x6f) {
              local_40 = local_44 + 2;
              local_f8 = (int *)&local_70;
              local_f0 = &local_58;
              local_44 = iVar1;
              FUN_01d12460(param_1,local_res20,local_40,&local_68);
              local_90 = FUN_01d12720(param_1,param_2,local_68);
              local_94 = FUN_01d12720(param_1,param_2,local_70);
              local_48 = local_90 - local_94;
              uVar2 = FUN_0040c840((double)local_48 / 2.0);
              uVar4 = FUN_01d12090(uVar2,0);
              local_4c = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
              uVar2 = FUN_0040c840((double)local_48 / 2.0);
              local_50 = FUN_01d120a0(uVar2,0);
              local_90 = FUN_01d13670(param_1,param_2,local_68);
              local_94 = FUN_01d13670(param_1,param_2,local_70);
              uVar2 = FUN_0040c840((double)(param_6 + local_8c) - (double)local_54 / 2.0);
              local_f8._0_4_ = param_5 + local_88 + local_4c;
              local_f0._0_4_ = uVar2;
              FUN_01d166e0(param_1,param_2,param_3,local_68);
              uVar2 = FUN_0040c840((((double)(param_6 + local_8c) - (double)local_54 / 2.0) -
                                   (double)local_94) +
                                   *(double *)(param_1 + 0x30) * (double)local_90);
              local_f8 = (int *)CONCAT44(local_f8._4_4_,param_5 + local_88 + local_50);
              local_f0 = (int *)CONCAT44(local_f0._4_4_,uVar2);
              FUN_01d166e0(param_1,param_2,param_3,local_70);
              local_44 = local_40 + local_58;
              local_40 = local_44;
              local_90 = FUN_01d12720(param_1,param_2,local_68);
              local_94 = FUN_01d12720(param_1,param_2,local_70);
              iVar1 = FUN_01d120a0(local_90,local_94);
              local_88 = local_88 + iVar1;
              goto LAB_01d186a1;
            }
            if (uVar7 == 0x73) {
              local_40 = local_44 + 2;
              local_f8 = &local_58;
              local_44 = iVar1;
              FUN_01d12360(param_1,local_res20,local_40,&local_60);
              FUN_005fccd0(*(undefined8 *)(param_2 + 0x70),&local_80);
              FUN_005fcd80(*(undefined8 *)(param_2 + 0x70),*(undefined8 *)(param_1 + 0x90));
              uVar2 = FUN_0040c840((double)(param_6 + local_8c) - (double)local_54 / 2.0);
              local_f8 = (int *)CONCAT44(local_f8._4_4_,param_5 + local_88);
              local_f0 = (int *)CONCAT44(local_f0._4_4_,uVar2);
              FUN_01d166e0(param_1,param_2,param_3,local_60);
              iVar1 = FUN_01d12720(param_1,param_2,local_60);
              local_88 = local_88 + iVar1;
              FUN_005fcd80(*(undefined8 *)(param_2 + 0x70),local_80);
              local_44 = local_40 + local_58 + 2;
              local_40 = local_44;
              goto LAB_01d186a1;
            }
          }
          iVar10 = iVar1 - local_44;
          local_44 = iVar1;
          FUN_01d11790(&local_60,&local_res20,iVar9,iVar10);
          uVar2 = FUN_0040c840((double)(param_6 + local_8c) - (double)local_54 / 2.0);
          FUN_01d15da0(auStack_118,param_5 + local_88,uVar2,local_60);
          iVar1 = FUN_01d12720(param_1,param_2,local_60);
          local_88 = local_88 + iVar1;
          local_40 = local_44;
          local_44 = local_44 + 1;
          goto LAB_01d186a1;
        }
      }
      local_44 = local_44 + 1;
    } while( true );
  }
  local_d0 = auStack_118;
  FUN_01d15da0(auStack_118,param_5,param_6,param_4);
LAB_01d18761:
  FUN_00414560(&local_e8,3);
  FUN_00414480(&local_80);
  return;
code_r0x01d186b9:
  iVar1 = FUN_01d11780(local_res20);
  if (local_40 < iVar1) {
    FUN_01d11790(&local_60,&local_res20,local_40,local_44 - local_40);
    uVar2 = FUN_0040c840((double)(param_6 + local_8c) - (double)local_54 / 2.0);
    FUN_01d15da0(auStack_118,param_5 + local_88,uVar2,local_60);
  }
  FUN_00442c30(local_60);
  FUN_00442c30(local_68);
  FUN_00442c30(local_70);
  goto LAB_01d18761;
}

