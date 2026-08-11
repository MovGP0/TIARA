/* Ghidra address: 01d13670 */
/* Ghidra symbol: FUN_01d13670 */


undefined4 FUN_01d13670(longlong param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  double dVar10;
  longlong local_res18 [2];
  undefined1 auStack_108 [32];
  int *local_e8;
  int *local_e0;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_80;
  undefined1 local_71;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_c0 = auStack_108;
  local_d0 = 0;
  local_c8 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_80 = 0;
  local_res18[0] = param_3;
  if (*(char *)(param_1 + 0x98) == '\0') {
    local_c0 = auStack_108;
    iVar4 = FUN_01d13560(param_1,param_2,param_3);
    local_30 = FUN_0040c770((double)iVar4);
  }
  else {
    local_34 = 0;
    local_3c = 0;
    local_40 = 0;
    puVar3 = auStack_108;
    if (*(char *)(param_1 + 0x88) == '\0') {
LAB_01d14d3a:
      do {
        local_c0 = puVar3;
        iVar4 = FUN_01d11780(local_res18[0]);
        if (iVar4 <= local_40) goto code_r0x01d14d52;
        if (*(short *)(local_res18[0] + (longlong)local_40 * 2) == 0x5c) {
          iVar4 = FUN_01d11780(local_res18[0]);
          if ((local_40 + 2 <= iVar4) &&
             (*(short *)(local_res18[0] + (longlong)(local_40 + 2) * 2) == 0x28)) {
            local_40 = local_40 + 1;
            iVar4 = FUN_01d11780(local_res18[0]);
            if (local_40 < iVar4) {
              uVar1 = *(ushort *)(local_res18[0] + (longlong)local_40 * 2);
              if (uVar1 < 0x65) {
                if (uVar1 == 100) {
                  FUN_01d11790(&local_58,local_res18,local_3c,(local_40 - local_3c) + -1);
                  if (local_58 == 0) {
                    FUN_01d11830(&local_58,&DAT_01d14eac);
                  }
                  FUN_01d13560(param_1,param_2,local_58);
                  local_3c = local_40 + 1;
                  local_e8 = &local_38;
                  FUN_01d12360(param_1,local_res18[0],local_3c,&local_58);
                  local_40 = local_3c + local_38 + 2;
                  puVar3 = local_c0;
                  local_3c = local_40;
                  goto LAB_01d14d3a;
                }
                if (uVar1 < 0x54) {
                  if (uVar1 == 0x53) {
                    FUN_01d11790(&local_58,local_res18,local_3c,(local_40 - local_3c) + -1);
                    if (local_58 == 0) {
                      FUN_01d11830(&local_58,&DAT_01d14eac);
                    }
                    local_44 = FUN_01d13560(param_1,param_2,local_58);
                    local_34 = FUN_01d120a0(local_34,local_44);
                    local_3c = local_40 + 1;
                    local_e8 = (int *)&local_68;
                    local_e0 = &local_38;
                    FUN_01d12460(param_1,local_res18[0],local_3c,&local_60);
                    local_40 = local_3c + local_38;
                    local_3c = local_40;
                    local_50 = FUN_005fce00(*(undefined8 *)(param_2 + 0x70));
                    local_b0 = *(undefined8 *)(param_2 + 0x70);
                    FUN_004167d0(&local_d0,local_68);
                    uVar8 = FUN_0043fc00(local_d0);
                    FUN_005fce30(local_b0,uVar8);
                    uVar8 = FUN_01d13670(param_1,param_2,local_60);
                    local_34 = FUN_01d120a0(local_34,uVar8);
                    FUN_005fce30(*(undefined8 *)(param_2 + 0x70),local_50);
                    puVar3 = local_c0;
                    goto LAB_01d14d3a;
                  }
                  if (uVar1 == 0x42) {
                    FUN_01d11790(&local_58,local_res18,local_3c,(local_40 - local_3c) + -1);
                    if (local_58 == 0) {
                      FUN_01d11830(&local_58,&DAT_01d14eac);
                    }
                    local_44 = FUN_01d13560(param_1,param_2,local_58);
                    local_34 = FUN_01d120a0(local_34,local_44);
                    local_3c = local_40 + 1;
                    local_e8 = &local_38;
                    FUN_01d12360(param_1,local_res18[0],local_3c,&local_58);
                    local_40 = local_3c + local_38 + 2;
                    local_3c = local_40;
                    local_71 = FUN_005fce60(*(undefined8 *)(param_2 + 0x70));
                    local_98 = *(undefined8 *)(param_2 + 0x70);
                    uVar7 = FUN_005fce60(local_98);
                    FUN_005fce70(local_98,uVar7 | 1);
                    uVar8 = FUN_01d13670(param_1,param_2,local_58);
                    local_34 = FUN_01d120a0(local_34,uVar8);
                    FUN_005fce70(*(undefined8 *)(param_2 + 0x70),local_71);
                    puVar3 = local_c0;
                    goto LAB_01d14d3a;
                  }
                  if (uVar1 == 0x43) {
                    FUN_01d11790(&local_58,local_res18,local_3c,(local_40 - local_3c) + -1);
                    if (local_58 == 0) {
                      FUN_01d11830(&local_58,&DAT_01d14eac);
                    }
                    local_44 = FUN_01d13560(param_1,param_2,local_58);
                    local_34 = FUN_01d120a0(local_34,local_44);
                    local_3c = local_40 + 1;
                    local_e8 = (int *)&local_68;
                    local_e0 = &local_38;
                    FUN_01d12460(param_1,local_res18[0],local_3c,&local_60);
                    local_40 = local_3c + local_38;
                    local_3c = local_40;
                    local_48 = FUN_01d13670(param_1,param_2,local_60);
                    local_34 = FUN_01d120a0(local_34,local_48);
                    puVar3 = local_c0;
                    goto LAB_01d14d3a;
                  }
                  if (uVar1 == 0x49) {
                    FUN_01d11790(&local_58,local_res18,local_3c,(local_40 - local_3c) + -1);
                    if (local_58 == 0) {
                      FUN_01d11830(&local_58,&DAT_01d14eac);
                    }
                    local_44 = FUN_01d13560(param_1,param_2,local_58);
                    local_34 = FUN_01d120a0(local_34,local_44);
                    local_3c = local_40 + 1;
                    local_e8 = &local_38;
                    FUN_01d12360(param_1,local_res18[0],local_3c,&local_58);
                    local_40 = local_3c + local_38 + 2;
                    local_3c = local_40;
                    local_71 = FUN_005fce60(*(undefined8 *)(param_2 + 0x70));
                    local_a0 = *(undefined8 *)(param_2 + 0x70);
                    uVar7 = FUN_005fce60(local_a0);
                    FUN_005fce70(local_a0,uVar7 | 2);
                    uVar8 = FUN_01d13670(param_1,param_2,local_58);
                    local_34 = FUN_01d120a0(local_34,uVar8);
                    FUN_005fce70(*(undefined8 *)(param_2 + 0x70),local_71);
                    puVar3 = local_c0;
                    goto LAB_01d14d3a;
                  }
                }
                else {
                  if (uVar1 == 0x55) {
                    FUN_01d11790(&local_58,local_res18,local_3c,(local_40 - local_3c) + -1);
                    if (local_58 == 0) {
                      FUN_01d11830(&local_58,&DAT_01d14eac);
                    }
                    local_44 = FUN_01d13560(param_1,param_2,local_58);
                    local_34 = FUN_01d120a0(local_34,local_44);
                    local_3c = local_40 + 1;
                    local_e8 = &local_38;
                    FUN_01d12360(param_1,local_res18[0],local_3c,&local_58);
                    local_40 = local_3c + local_38 + 2;
                    local_3c = local_40;
                    local_71 = FUN_005fce60(*(undefined8 *)(param_2 + 0x70));
                    local_a8 = *(undefined8 *)(param_2 + 0x70);
                    uVar7 = FUN_005fce60(local_a8);
                    FUN_005fce70(local_a8,uVar7 | 4);
                    uVar8 = FUN_01d13670(param_1,param_2,local_58);
                    local_34 = FUN_01d120a0(local_34,uVar8);
                    FUN_005fce70(*(undefined8 *)(param_2 + 0x70),local_71);
                    puVar3 = local_c0;
                    goto LAB_01d14d3a;
                  }
                  if (uVar1 == 0x5c) {
                    FUN_01d11790(&local_58,local_res18,local_3c,(local_40 - local_3c) + -1);
                    if (local_58 == 0) {
                      FUN_01d11830(&local_58,&DAT_01d14eac);
                    }
                    local_44 = FUN_01d13560(param_1,param_2,local_58);
                    local_34 = FUN_01d120a0(local_34,local_44);
                    local_3c = local_40;
                    puVar3 = local_c0;
                    goto LAB_01d14d3a;
                  }
                  if (uVar1 == 0x61) {
                    FUN_01d11790(&local_58,local_res18,local_3c,(local_40 - local_3c) + -1);
                    if (local_58 == 0) {
                      FUN_01d11830(&local_58,&DAT_01d14eac);
                    }
                    local_44 = FUN_01d13560(param_1,param_2,local_58);
                    local_34 = FUN_01d120a0(local_34,local_44);
                    local_3c = local_40 + 1;
                    local_e8 = (int *)&local_68;
                    local_e0 = &local_38;
                    FUN_01d12460(param_1,local_res18[0],local_3c,&local_60);
                    local_40 = local_3c + local_38;
                    uVar2 = *(undefined8 *)(param_2 + 0x70);
                    local_3c = local_40;
                    uVar7 = FUN_005fce60(uVar2);
                    FUN_005fce70(uVar2,uVar7 | 4);
                    local_48 = FUN_01d13670(param_1,param_2,local_60);
                    uVar2 = *(undefined8 *)(param_2 + 0x70);
                    uVar9 = FUN_005fce60(uVar2);
                    FUN_005fce70(uVar2,uVar9 & 0xfffffffb);
                    local_34 = FUN_01d120a0(local_34,local_48);
                    puVar3 = local_c0;
                    goto LAB_01d14d3a;
                  }
                }
              }
              else if (uVar1 < 0x6d) {
                if (uVar1 == 0x6c) {
                  FUN_01d11790(&local_58,local_res18,local_3c,(local_40 - local_3c) + -1);
                  if (local_58 == 0) {
                    FUN_01d11830(&local_58,&DAT_01d14eac);
                  }
                  local_44 = FUN_01d13560(param_1,param_2,local_58);
                  local_34 = FUN_01d120a0(local_34,local_44);
                  local_3c = local_40 + 1;
                  local_e8 = &local_38;
                  FUN_01d12360(param_1,local_res18[0],local_3c,&local_58);
                  local_40 = local_3c + local_38 + 2;
                  local_3c = local_40;
                  FUN_005fccd0(*(undefined8 *)(param_2 + 0x70),&local_70);
                  FUN_005fcd80(*(undefined8 *)(param_2 + 0x70),*(undefined8 *)(param_1 + 0x90));
                  FUN_00442b00(&local_c8,local_58);
                  local_2c = FUN_0043fc00(local_c8);
                  if ((*(longlong *)PTR_DAT_02001e00 != 0) &&
                     (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0) != 0)) {
                    uVar8 = FUN_01ceefd0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),
                                         local_2c);
                    local_34 = FUN_01d120a0(local_34,uVar8);
                  }
                  dVar10 = (double)FUN_01d11750(param_1);
                  iVar4 = FUN_005fdfd0(param_2,&DAT_01d14ec0);
                  uVar8 = FUN_0040c770(dVar10 * (double)iVar4);
                  local_34 = FUN_01d120a0(local_34,uVar8);
                  FUN_005fcd80(*(undefined8 *)(param_2 + 0x70),local_70);
                  puVar3 = local_c0;
                  goto LAB_01d14d3a;
                }
                if (uVar1 == 0x65) {
                  FUN_01d11790(&local_58,local_res18,local_3c,(local_40 - local_3c) + -1);
                  if (local_58 == 0) {
                    FUN_01d11830(&local_58,&DAT_01d14eac);
                  }
                  local_44 = FUN_01d13560(param_1,param_2,local_58);
                  local_34 = FUN_01d120a0(local_34,local_44);
                  local_3c = local_40 + 1;
                  local_e8 = (int *)&local_68;
                  local_e0 = &local_38;
                  FUN_01d12460(param_1,local_res18[0],local_3c,&local_60);
                  local_40 = local_3c + local_38;
                  local_3c = local_40;
                  local_48 = FUN_01d13670(param_1,param_2,local_60);
                  local_50 = FUN_005fce00(*(undefined8 *)(param_2 + 0x70));
                  uVar8 = FUN_0040c840(*(double *)(param_1 + 0x18) * (double)local_50);
                  FUN_005fce30(*(undefined8 *)(param_2 + 0x70),uVar8);
                  local_4c = FUN_01d13670(param_1,param_2,local_68);
                  FUN_005fce30(*(undefined8 *)(param_2 + 0x70),local_50);
                  uVar8 = FUN_0040c840((1.0 - *(double *)(param_1 + 8)) * (double)local_48 +
                                       (double)local_4c);
                  local_34 = FUN_01d120a0(local_34,uVar8);
                  local_34 = FUN_01d120a0(local_34,local_48);
                  local_34 = FUN_01d120a0(local_34,local_4c);
                  puVar3 = local_c0;
                  goto LAB_01d14d3a;
                }
                if (uVar1 == 0x66) {
                  FUN_01d11790(&local_58,local_res18,local_3c,(local_40 - local_3c) + -1);
                  if (local_58 == 0) {
                    FUN_01d11830(&local_58,&DAT_01d14eac);
                  }
                  iVar4 = FUN_01d13560(param_1,param_2,local_58);
                  local_44 = FUN_0040c770((double)iVar4);
                  local_34 = FUN_01d120a0(local_34,local_44);
                  local_3c = local_40 + 1;
                  local_e8 = (int *)&local_68;
                  local_e0 = &local_38;
                  FUN_01d12460(param_1,local_res18[0],local_3c,&local_60);
                  local_40 = local_3c + local_38;
                  local_3c = local_40;
                  iVar4 = FUN_0040c840(*(double *)(param_1 + 0x28) * (double)local_44);
                  iVar5 = FUN_01d13670(param_1,param_2,local_60);
                  iVar6 = FUN_01d13670(param_1,param_2,local_68);
                  iVar5 = FUN_0040c770((double)(iVar5 + iVar6));
                  local_34 = FUN_01d120a0(local_34,iVar4 + iVar5);
                  puVar3 = local_c0;
                  goto LAB_01d14d3a;
                }
                if (uVar1 == 0x69) {
                  FUN_01d11790(&local_58,local_res18,local_3c,(local_40 - local_3c) + -1);
                  if (local_58 == 0) {
                    FUN_01d11830(&local_58,&DAT_01d14eac);
                  }
                  local_44 = FUN_01d13560(param_1,param_2,local_58);
                  local_34 = FUN_01d120a0(local_34,local_44);
                  local_3c = local_40 + 1;
                  local_e8 = (int *)&local_68;
                  local_e0 = &local_38;
                  FUN_01d12460(param_1,local_res18[0],local_3c,&local_60);
                  local_40 = local_3c + local_38;
                  local_3c = local_40;
                  local_48 = FUN_01d13670(param_1,param_2,local_60);
                  local_50 = FUN_005fce00(*(undefined8 *)(param_2 + 0x70));
                  uVar8 = FUN_0040c840(*(double *)(param_1 + 0x20) * (double)local_50);
                  FUN_005fce30(*(undefined8 *)(param_2 + 0x70),uVar8);
                  local_4c = FUN_01d13670(param_1,param_2,local_68);
                  FUN_005fce30(*(undefined8 *)(param_2 + 0x70),local_50);
                  uVar8 = FUN_0040c840((1.0 - *(double *)(param_1 + 0x10)) * (double)local_48 +
                                       (double)local_4c);
                  local_34 = FUN_01d120a0(local_34,uVar8);
                  local_34 = FUN_01d120a0(local_34,local_48);
                  local_34 = FUN_01d120a0(local_34,local_4c);
                  puVar3 = local_c0;
                  goto LAB_01d14d3a;
                }
              }
              else {
                if (uVar1 == 0x6f) {
                  FUN_01d11790(&local_58,local_res18,local_3c,(local_40 - local_3c) + -1);
                  if (local_58 == 0) {
                    FUN_01d11830(&local_58,&DAT_01d14eac);
                  }
                  local_44 = FUN_01d13560(param_1,param_2,local_58);
                  local_34 = FUN_01d120a0(local_34,local_44);
                  local_3c = local_40 + 1;
                  local_e8 = (int *)&local_68;
                  local_e0 = &local_38;
                  FUN_01d12460(param_1,local_res18[0],local_3c,&local_60);
                  local_40 = local_3c + local_38;
                  local_3c = local_40;
                  local_48 = FUN_01d13670(param_1,param_2,local_60);
                  local_4c = FUN_01d13670(param_1,param_2,local_68);
                  uVar8 = FUN_0040c840((1.0 - *(double *)(param_1 + 0x30)) * (double)local_48 +
                                       (double)local_4c);
                  local_34 = FUN_01d120a0(local_34,uVar8);
                  local_34 = FUN_01d120a0(local_34,local_48);
                  local_34 = FUN_01d120a0(local_34,local_4c);
                  puVar3 = local_c0;
                  goto LAB_01d14d3a;
                }
                if (uVar1 == 0x73) {
                  FUN_01d11790(&local_58,local_res18,local_3c,(local_40 - local_3c) + -1);
                  if (local_58 == 0) {
                    FUN_01d11830(&local_58,&DAT_01d14eac);
                  }
                  local_44 = FUN_01d13560(param_1,param_2,local_58);
                  local_34 = FUN_01d120a0(local_34,local_44);
                  local_3c = local_40 + 1;
                  local_e8 = &local_38;
                  FUN_01d12360(param_1,local_res18[0],local_3c,&local_58);
                  local_40 = local_3c + local_38 + 2;
                  local_3c = local_40;
                  FUN_005fccd0(*(undefined8 *)(param_2 + 0x70),&local_70);
                  FUN_005fcd80(*(undefined8 *)(param_2 + 0x70),*(undefined8 *)(param_1 + 0x90));
                  uVar8 = FUN_01d13670(param_1,param_2,local_58);
                  local_34 = FUN_01d120a0(local_34,uVar8);
                  FUN_005fcd80(*(undefined8 *)(param_2 + 0x70),local_70);
                  puVar3 = local_c0;
                  goto LAB_01d14d3a;
                }
              }
              FUN_01d11790(&local_58,local_res18,local_3c,local_40 - local_3c);
              if (local_58 == 0) {
                FUN_01d11830(&local_58,&DAT_01d14eac);
              }
              local_44 = FUN_01d13560(param_1,param_2,local_58);
              local_34 = FUN_01d120a0(local_34,local_44);
              local_3c = local_40;
              puVar3 = local_c0;
              goto LAB_01d14d3a;
            }
            FUN_01d120b0(param_1);
            puVar3 = local_c0;
            goto LAB_01d14d3a;
          }
        }
        local_40 = local_40 + 1;
        puVar3 = local_c0;
      } while( true );
    }
    iVar4 = FUN_01d12610(param_1,param_2,param_3);
    local_30 = FUN_0040c770((double)iVar4);
  }
LAB_01d14e1f:
  FUN_00414560(&local_d0,2);
  FUN_00414480(&local_70);
  return local_30;
code_r0x01d14d52:
  iVar4 = FUN_01d11780(local_res18[0]);
  if (local_3c < iVar4) {
    FUN_01d11790(&local_58,local_res18,local_3c,local_40 - local_3c);
    if (local_58 == 0) {
      FUN_01d11830(&local_58,&DAT_01d14eac);
    }
    local_44 = FUN_01d13560(param_1,param_2,local_58);
    local_34 = FUN_01d120a0(local_34,local_44);
  }
  local_30 = local_34;
  FUN_00442c30(local_58);
  FUN_00442c30(local_60);
  FUN_00442c30(local_68);
  FUN_00442c30(local_80);
  goto LAB_01d14e1f;
}

