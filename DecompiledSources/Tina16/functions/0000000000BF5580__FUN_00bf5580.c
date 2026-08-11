/* Ghidra address: 00bf5580 */
/* Ghidra symbol: FUN_00bf5580 */


void FUN_00bf5580(longlong param_1,ulonglong *param_2,int param_3,int param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined *local_140;
  undefined4 local_138;
  undefined8 local_130;
  int local_124;
  undefined8 local_120 [2];
  undefined1 *local_110;
  undefined8 local_104;
  undefined8 uStack_fc;
  undefined4 uStack_f4;
  longlong local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  longlong local_d0;
  longlong local_c8;
  longlong *local_c0;
  uint local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  undefined8 local_80;
  undefined8 local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  longlong local_58;
  char local_49;
  undefined8 local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  longlong local_30;
  
  local_110 = auStack_168;
  local_58 = 0;
  local_5c = FUN_00c11080(param_1,param_3);
  local_60 = FUN_00c11080(param_1,param_4);
  local_78 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x490));
  if (*(char *)(*(longlong *)(param_1 + 0x610) + 0x5c) != '\0') {
    uVar4 = FUN_0064d120(param_1);
    local_148 = (undefined8 *)CONCAT44(local_148._4_4_,uVar4);
    FUN_00498350(local_120,0,0,*(undefined4 *)(param_1 + 0x910));
    local_148 = local_120;
    local_140 = (undefined *)CONCAT71(local_140._1_7_,1);
    FUN_00bcc620(*(undefined8 *)(param_1 + 0x490),
                 *(undefined4 *)(*(longlong *)(param_1 + 0x610) + 0x60),
                 *(undefined4 *)(*(longlong *)(param_1 + 0x610) + 100),
                 *(undefined4 *)(*(longlong *)(param_1 + 0x610) + 0x68));
  }
  FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x80),
               *(undefined4 *)(*(longlong *)(param_1 + 0x610) + 0x10));
  if (*(char *)(*(longlong *)(param_1 + 0x610) + 0x1c) == '\0') {
    if (*(char *)(*(longlong *)(param_1 + 0x610) + 0x5c) == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x490) + 0xa8))
                (*(longlong **)(param_1 + 0x490),param_2);
    }
    if ((*(char *)(*(longlong *)(param_1 + 0x610) + 0x1d) != '\0') &&
       (local_34 = local_5c, local_5c <= local_60)) {
      iVar8 = (local_60 - local_5c) + 1;
      do {
        iVar5 = FUN_00c11030(param_1,local_34);
        local_6c = (iVar5 - *(int *)(param_1 + 0x534)) * *(int *)(param_1 + 0x52c);
        cVar3 = FUN_00bcfb20(*(undefined8 *)(param_1 + 0x4e8),local_34 + -1);
        if (cVar3 == '\x01') {
          FUN_00bf5400(auStack_168,*(undefined4 *)(*(longlong *)(param_1 + 0x610) + 0x70),local_6c,
                       local_6c + *(int *)(param_1 + 0x52c));
        }
        else if (cVar3 == '\x02') {
          FUN_00bf5400(auStack_168,*(undefined4 *)(*(longlong *)(param_1 + 0x610) + 0x74),local_6c,
                       local_6c + *(int *)(param_1 + 0x52c));
        }
        local_34 = local_34 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  else {
    if (*(char *)(*(longlong *)(param_1 + 0x610) + 0x4b) == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x620) + 0x60))(*(longlong **)(param_1 + 0x620),0);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x620) + 0x50))
                (*(longlong **)(param_1 + 0x620),*(undefined8 *)(*(longlong *)(param_1 + 0x610) + 8)
                );
    }
    (**(code **)(**(longlong **)(param_1 + 0x620) + 0x30))(*(longlong **)(param_1 + 0x620),local_78)
    ;
    if (*(char *)(*(longlong *)(param_1 + 0x610) + 0x4b) == '\0') {
      lVar6 = FUN_00bf2c10(param_1);
      (**(code **)(**(longlong **)(param_1 + 0x620) + 0x68))
                (*(longlong **)(param_1 + 0x620),*(undefined4 *)(lVar6 + 0x28));
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x620) + 0x68))
                (*(longlong **)(param_1 + 0x620),
                 *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x610) + 8) + 0x28));
    }
    (**(code **)(**(longlong **)(param_1 + 0x620) + 0x70))
              (*(longlong **)(param_1 + 0x620),
               *(undefined4 *)(*(longlong *)(param_1 + 0x610) + 0x10));
    uVar2 = *param_2;
    local_40 = (int)param_2[1];
    local_d4 = local_40;
    local_d8 = *(int *)(param_1 + 0x910) + -2;
    local_dc = local_d8;
    if (local_d8 < local_40) {
      local_dc = local_40;
    }
    local_48._4_4_ = (int)(uVar2 >> 0x20);
    _local_40 = CONCAT44(local_48._4_4_,local_dc);
    local_34 = local_5c;
    local_48 = uVar2;
    if (local_5c <= local_60) {
      iVar8 = (local_60 - local_5c) + 1;
      do {
        if (*(char *)(param_1 + 0x498) == '\0') {
LAB_00bf58c2:
          iVar5 = FUN_00c11030(param_1,local_34);
          local_6c = (iVar5 - *(int *)(param_1 + 0x534)) * *(int *)(param_1 + 0x52c);
          cVar3 = FUN_00c10e70(param_1);
          uVar2 = local_48;
          if ((cVar3 != '\0') && (*(char *)(*(longlong *)(param_1 + 0x610) + 0x5c) == '\0')) {
            iVar5 = local_3c;
            local_48 = CONCAT44(local_3c,(undefined4)local_48);
            _local_40 = CONCAT44(local_6c,local_40);
            local_148 = &local_48;
            local_140 = &DAT_00bf6d4e;
            local_138 = 0;
            (**(code **)(**(longlong **)(param_1 + 0x620) + 0x48))
                      (*(longlong **)(param_1 + 0x620),uVar2 & 0xffffffff,iVar5,1);
          }
          local_48 = CONCAT44(local_6c,(undefined4)local_48);
          _local_40 = CONCAT44(local_6c + *(int *)(param_1 + 0x52c),local_40);
          FUN_00bbab40(*(undefined8 *)(param_1 + 0x610),&local_58,local_34);
          if (*(longlong *)(param_1 + 0x7a0) != 0) {
            (**(code **)(param_1 + 0x7a0))
                      (*(undefined8 *)(param_1 + 0x7a8),param_1,local_34,&local_58);
          }
          local_e0 = 0;
          if (local_58 != 0) {
            local_e0 = *(undefined4 *)(local_58 + -4);
          }
          uVar7 = FUN_00416740(local_58);
          local_80 = FUN_00bd1940(local_78,uVar7,local_e0);
          lVar6 = *(longlong *)(param_1 + 0x610);
          local_70 = ((*(int *)(param_1 + 0x910) - *(int *)(lVar6 + 0x2c)) - *(int *)(lVar6 + 0x30))
                     - (int)local_80;
          if (*(char *)(lVar6 + 0x1d) != '\0') {
            local_70 = local_70 - *(int *)(lVar6 + 0x6c);
          }
          if (*(char *)(lVar6 + 0x5c) == '\0') {
            local_e8 = 0;
            if (local_58 != 0) {
              local_e8 = *(undefined4 *)(local_58 + -4);
            }
            local_140 = (undefined *)FUN_00416740(local_58);
            local_148 = &local_48;
            local_138 = local_e8;
            local_130 = 0;
            thunk_FUN_03e58493(local_78,local_70,
                               local_48._4_4_ + (*(int *)(param_1 + 0x52c) - local_80._4_4_) / 2,2);
          }
          else {
            thunk_FUN_03b994b9(local_78,1);
            local_e4 = 0;
            if (local_58 != 0) {
              local_e4 = *(undefined4 *)(local_58 + -4);
            }
            local_140 = (undefined *)FUN_00416740(local_58);
            local_148 = &local_48;
            local_138 = local_e4;
            local_130 = 0;
            thunk_FUN_03e58493(local_78,local_70,
                               local_48._4_4_ + (*(int *)(param_1 + 0x52c) - local_80._4_4_) / 2,0);
            thunk_FUN_03b994b9(local_78,2);
          }
          if (*(char *)(*(longlong *)(param_1 + 0x610) + 0x1d) != '\0') {
            cVar3 = FUN_00bcfb20(*(undefined8 *)(param_1 + 0x4e8),local_34 + -1);
            if (cVar3 == '\x01') {
              FUN_00bf5400(auStack_168,*(undefined4 *)(*(longlong *)(param_1 + 0x610) + 0x70),
                           local_48._4_4_,local_3c);
            }
            else if (cVar3 == '\x02') {
              FUN_00bf5400(auStack_168,*(undefined4 *)(*(longlong *)(param_1 + 0x610) + 0x74),
                           local_48._4_4_,local_3c);
            }
          }
        }
        else {
          cVar3 = FUN_00be0900(*(undefined8 *)(param_1 + 0x4a8),local_34,&local_b4);
          if (cVar3 == '\0') goto LAB_00bf58c2;
        }
        local_34 = local_34 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    uVar2 = local_48;
    iVar8 = local_3c;
    if ((local_3c < *(int *)((longlong)param_2 + 0xc)) &&
       (*(char *)(*(longlong *)(param_1 + 0x610) + 0x5c) == '\0')) {
      local_48 = CONCAT44(local_3c,(undefined4)local_48);
      _local_40 = CONCAT44(*(undefined4 *)((longlong)param_2 + 0xc),local_40);
      local_148 = &local_48;
      local_140 = &DAT_00bf6d4e;
      local_138 = 0;
      (**(code **)(**(longlong **)(param_1 + 0x620) + 0x48))
                (*(longlong **)(param_1 + 0x620),uVar2 & 0xffffffff,iVar8,1);
    }
    (**(code **)(**(longlong **)(param_1 + 0x620) + 0x38))(*(longlong **)(param_1 + 0x620));
    if (*(char *)(*(longlong *)(param_1 + 0x610) + 0x4b) != '\0') {
      uVar7 = FUN_00bf2c10(param_1);
      (**(code **)(**(longlong **)(param_1 + 0x620) + 0x50))(*(longlong **)(param_1 + 0x620),uVar7);
    }
  }
  if (*(char *)(*(longlong *)(param_1 + 0x610) + 0x5c) != '\0') {
    FUN_005fdcb0(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x80),1);
  }
  cVar3 = FUN_00c10e70(param_1);
  if (((cVar3 != '\0') && (*(char *)(*(longlong *)(param_1 + 0x600) + 8) != '\0')) &&
     (local_34 = param_3, param_3 <= param_4)) {
    iVar8 = (param_4 - param_3) + 1;
    do {
      uVar4 = FUN_00c11080(param_1,local_34);
      iVar5 = FUN_00c11030(param_1,uVar4);
      if (iVar5 != local_34) {
        iVar5 = FUN_00bbb920(*(undefined8 *)(param_1 + 0x600));
        local_148 = (undefined8 *)CONCAT44(local_148._4_4_,*(undefined4 *)(param_1 + 0x52c));
        FUN_00bbb700(*(undefined8 *)(param_1 + 0x600),*(undefined8 *)(param_1 + 0x490),
                     ((*(int *)(param_1 + 0x910) - *(int *)(*(longlong *)(param_1 + 0x610) + 0x2c))
                     - iVar5) + -2,
                     (local_34 - *(int *)(param_1 + 0x534)) * *(int *)(param_1 + 0x52c));
      }
      local_34 = local_34 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if (*(char *)(*(longlong *)(param_1 + 0x610) + 0x5c) != '\0') {
    FUN_005fdcb0(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x80),0);
  }
  if ((*(char *)(param_1 + 0x498) != '\0') &&
     (local_124 = param_4, local_88 = param_3, param_3 <= param_4)) {
    local_124 = (param_4 - param_3) + 1;
    do {
      local_84 = FUN_00c11080(param_1,local_88);
      iVar8 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x28))
                        (*(longlong **)(param_1 + 0x4e8));
      if ((iVar8 < local_84) &&
         (iVar8 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x28))
                            (*(longlong **)(param_1 + 0x4e8)), iVar8 != 0)) break;
      FUN_00bfcf50(param_1,&local_98,local_88);
      FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x78),
                   *(undefined4 *)(*(longlong *)(param_1 + 0x4a0) + 0x10));
      cVar3 = FUN_00be0d70(*(undefined8 *)(param_1 + 0x4a8),local_84,&local_b4);
      if (cVar3 == '\0') {
        cVar3 = FUN_00be0860(*(undefined8 *)(param_1 + 0x4a8),local_84,&local_b4);
        if (cVar3 != '\0') {
          local_9c = local_98 + (local_90 - local_98) / 2;
          (**(code **)(**(longlong **)(param_1 + 0x490) + 200))
                    (*(longlong **)(param_1 + 0x490),local_9c,
                     (local_88 - *(int *)(param_1 + 0x534)) * *(int *)(param_1 + 0x52c));
          (**(code **)(**(longlong **)(param_1 + 0x490) + 0xc0))
                    (*(longlong **)(param_1 + 0x490),local_9c,local_94 + (local_8c - local_94) / 2);
          (**(code **)(**(longlong **)(param_1 + 0x490) + 0xc0))
                    (*(longlong **)(param_1 + 0x490),local_90,local_94 + (local_8c - local_94) / 2);
        }
        cVar3 = FUN_00be07c0(*(undefined8 *)(param_1 + 0x4a8),local_84,&local_b4);
        if (cVar3 != '\0') {
          local_9c = local_98 + (local_90 - local_98) / 2;
          (**(code **)(**(longlong **)(param_1 + 0x490) + 200))
                    (*(longlong **)(param_1 + 0x490),local_9c,
                     (local_88 - *(int *)(param_1 + 0x534)) * *(int *)(param_1 + 0x52c));
          (**(code **)(**(longlong **)(param_1 + 0x490) + 0xc0))
                    (*(longlong **)(param_1 + 0x490),local_9c,
                     ((local_88 - *(int *)(param_1 + 0x534)) + 1) * *(int *)(param_1 + 0x52c));
        }
      }
      else {
        local_f0 = *(longlong *)(*(longlong *)(param_1 + 0x4a8) + 0x10);
        if (*(uint *)(local_f0 + 0x10) <= local_b4) {
          FUN_00594f90();
        }
        puVar1 = (undefined8 *)(*(longlong *)(local_f0 + 8) + (longlong)(int)local_b4 * 0x14);
        local_104 = *puVar1;
        uStack_fc = puVar1[1];
        uStack_f4 = *(undefined4 *)(puVar1 + 2);
        local_b0 = local_104;
        uStack_a8 = uStack_fc;
        local_a0 = uStack_f4;
        FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x80),
                     *(undefined4 *)(*(longlong *)(param_1 + 0x4a0) + 0x10));
        (**(code **)(**(longlong **)(param_1 + 0x490) + 0xb8))
                  (*(longlong **)(param_1 + 0x490),&local_98);
        FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x78),
                     *(undefined4 *)(*(longlong *)(param_1 + 0x4a0) + 0x10));
        iVar5 = local_94;
        iVar8 = local_98;
        (**(code **)(**(longlong **)(param_1 + 0x490) + 200))
                  (*(longlong **)(param_1 + 0x490),local_98 + 2,local_94 + (local_8c - local_94) / 2
                  );
        (**(code **)(**(longlong **)(param_1 + 0x490) + 0xc0))
                  (*(longlong **)(param_1 + 0x490),local_90 + -2,iVar5 + (local_8c - iVar5) / 2);
        if ((char)local_a0 == '\0') {
          local_9c = iVar8 + (local_90 - iVar8) / 2;
          (**(code **)(**(longlong **)(param_1 + 0x490) + 200))
                    (*(longlong **)(param_1 + 0x490),local_9c,local_8c);
          (**(code **)(**(longlong **)(param_1 + 0x490) + 0xc0))
                    (*(longlong **)(param_1 + 0x490),local_9c,
                     ((local_88 - *(int *)(param_1 + 0x534)) + 1) * *(int *)(param_1 + 0x52c));
        }
        else {
          local_9c = iVar8 + (local_90 - iVar8) / 2;
          (**(code **)(**(longlong **)(param_1 + 0x490) + 200))
                    (*(longlong **)(param_1 + 0x490),local_9c,iVar5 + 2);
          (**(code **)(**(longlong **)(param_1 + 0x490) + 0xc0))
                    (*(longlong **)(param_1 + 0x490),local_9c,local_8c + -2);
        }
      }
      local_88 = local_88 + 1;
      local_124 = local_124 + -1;
    } while (local_124 != 0);
  }
  if ((*(char *)(*(longlong *)(param_1 + 0x610) + 0x54) != '\0') &&
     (*(int *)(param_1 + 0x910) + -2 <= (int)param_2[1])) {
    local_c0 = *(longlong **)(param_1 + 0x490);
    FUN_005fd4e0(local_c0[0xf],*(undefined4 *)(*(longlong *)(param_1 + 0x610) + 0x14));
    FUN_005fd6d0(local_c0[0xf],1);
    if (*(char *)(*(longlong *)(param_1 + 0x610) + 0x54) == '\x01') {
      (**(code **)(*local_c0 + 200))
                (local_c0,*(int *)(param_1 + 0x910) + -2,*(undefined4 *)((longlong)param_2 + 4));
      (**(code **)(*local_c0 + 0xc0))
                (local_c0,*(int *)(param_1 + 0x910) + -2,*(undefined4 *)((longlong)param_2 + 0xc));
      FUN_005fd4e0(local_c0[0xf],*(undefined4 *)(*(longlong *)(param_1 + 0x610) + 0x10));
    }
    (**(code **)(*local_c0 + 200))
              (local_c0,*(int *)(param_1 + 0x910) + -1,*(undefined4 *)((longlong)param_2 + 4));
    (**(code **)(*local_c0 + 0xc0))
              (local_c0,*(int *)(param_1 + 0x910) + -1,*(undefined4 *)((longlong)param_2 + 0xc));
  }
  if (((*(char *)(*(longlong *)(param_1 + 0x5b8) + 0x12) == '\0') ||
      (*(int *)(*(longlong *)(param_1 + 0x5e8) + 0x10) < 1)) || (local_60 < local_5c)) {
    if ((*(longlong *)(param_1 + 0x7b0) != 0) && (local_34 = local_5c, local_5c <= local_60)) {
      iVar8 = (local_60 - local_5c) + 1;
      do {
        local_68 = FUN_00c11030(param_1,local_34);
        local_148 = (undefined8 *)
                    CONCAT44(local_148._4_4_,
                             (local_68 - *(int *)(param_1 + 0x534)) * *(int *)(param_1 + 0x52c));
        (**(code **)(param_1 + 0x7b0))(*(undefined8 *)(param_1 + 0x7b8),param_1,local_34,0);
        local_34 = local_34 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  else {
    local_30 = FUN_00409570((longlong)(((param_4 - param_3) + 1) * 4));
    local_49 = '\0';
    iVar8 = *(int *)(*(longlong *)(param_1 + 0x5e8) + 0x10);
    local_38 = 0;
    if (-1 < iVar8 + -1) {
      do {
        local_c8 = FUN_00c11460(*(undefined8 *)(param_1 + 0x5e8),local_38);
        if ((((*(char *)(local_c8 + 0x20) != '\0') && (local_5c <= *(int *)(local_c8 + 8))) &&
            ((*(int *)(local_c8 + 8) <= local_60 &&
             (iVar5 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x28))
                                (*(longlong **)(param_1 + 0x4e8)), *(int *)(local_c8 + 8) <= iVar5))
            )) && ((*(char *)(param_1 + 0x498) == '\0' ||
                   (cVar3 = FUN_00be0900(*(undefined8 *)(param_1 + 0x4a8),
                                         *(undefined4 *)(local_c8 + 8),&local_b4), cVar3 == '\0'))))
        {
          cVar3 = FUN_00c11270(local_c8);
          if (cVar3 == *(char *)(*(longlong *)(param_1 + 0x5b8) + 0x10)) {
            local_64 = FUN_00c11030(param_1,*(undefined4 *)(local_c8 + 8));
            if (param_3 <= local_64) {
              uVar7 = FUN_00c11460(*(undefined8 *)(param_1 + 0x5e8),local_38);
              FUN_00bf5150(auStack_168,uVar7,local_30 + (longlong)(local_64 - param_3) * 4,local_64)
              ;
            }
          }
          else {
            local_49 = '\x01';
          }
        }
        local_38 = local_38 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    if (local_49 != '\0') {
      iVar8 = *(int *)(*(longlong *)(param_1 + 0x5e8) + 0x10);
      local_38 = 0;
      if (-1 < iVar8 + -1) {
        do {
          local_d0 = FUN_00c11460(*(undefined8 *)(param_1 + 0x5e8),local_38);
          if ((((((*(char *)(local_d0 + 0x20) != '\0') &&
                 (cVar3 = FUN_00c11270(local_d0),
                 cVar3 != *(char *)(*(longlong *)(param_1 + 0x5b8) + 0x10))) &&
                (local_5c <= *(int *)(local_d0 + 8))) &&
               ((*(int *)(local_d0 + 8) <= local_60 &&
                (iVar5 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x28))
                                   (*(longlong **)(param_1 + 0x4e8)),
                *(int *)(local_d0 + 8) <= iVar5)))) &&
              ((*(char *)(param_1 + 0x498) == '\0' ||
               (cVar3 = FUN_00be0900(*(undefined8 *)(param_1 + 0x4a8),*(undefined4 *)(local_d0 + 8),
                                     &local_b4), cVar3 == '\0')))) &&
             (local_64 = FUN_00c11030(param_1,*(undefined4 *)(local_d0 + 8)), param_3 <= local_64))
          {
            uVar7 = FUN_00c11460(*(undefined8 *)(param_1 + 0x5e8),local_38);
            FUN_00bf5150(auStack_168,uVar7,local_30 + (longlong)(local_64 - param_3) * 4,local_64);
          }
          local_38 = local_38 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
    if ((*(longlong *)(param_1 + 0x7b0) != 0) && (local_34 = local_5c, local_5c <= local_60)) {
      iVar8 = (local_60 - local_5c) + 1;
      do {
        local_68 = FUN_00c11030(param_1,local_34);
        local_148 = (undefined8 *)
                    CONCAT44(local_148._4_4_,
                             (local_68 - *(int *)(param_1 + 0x534)) * *(int *)(param_1 + 0x52c));
        (**(code **)(param_1 + 0x7b0))
                  (*(undefined8 *)(param_1 + 0x7b8),param_1,local_34,
                   *(undefined4 *)(local_30 + (longlong)(local_68 - param_3) * 4));
        local_34 = local_34 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    FUN_004095f0(local_30);
  }
  FUN_00414480(&local_58);
  return;
}

