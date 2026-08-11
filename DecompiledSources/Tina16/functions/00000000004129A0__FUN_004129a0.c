/* Ghidra address: 004129a0 */
/* Ghidra symbol: FUN_004129a0 */


undefined4 FUN_004129a0(uint *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  uint local_108;
  int local_104;
  undefined1 *local_100;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 local_d8 [4];
  byte local_b5;
  int local_b4;
  code *local_b0;
  int *local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  ulonglong local_78;
  int local_6c;
  uint *local_68;
  undefined8 local_60;
  ulonglong local_58;
  longlong local_50;
  undefined4 local_44;
  uint *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  
  local_100 = auStack_138;
  local_44 = 1;
  local_a8 = (int *)param_4[7];
  local_50 = param_4[1];
  local_58 = *param_4 - local_50;
  if ((param_1[1] & 0x66) == 0) {
    iVar5 = *local_a8;
    local_6c = 0;
    local_100 = auStack_138;
    if (-1 < iVar5 + -1) {
      do {
        local_38 = (uint *)(local_a8 + (longlong)local_6c * 4 + 1);
        if (((*local_38 <= local_58) && (local_58 < local_38[1])) && (local_38[2] != 0)) {
          FUN_00410a80();
          if (local_38[2] < 3) {
            if (local_38[2] == 1) {
              local_b0 = (code *)(local_50 + (ulonglong)local_38[1]);
            }
            else {
              local_b0 = (code *)(local_50 + (ulonglong)local_38[3]);
            }
          }
          else {
            if (*param_1 == 0xeedfade) {
              local_88 = **(longlong **)(param_1 + 10);
            }
            else if ((PTR_FUN_02006020 == (undefined *)0x0) ||
                    (local_88 = (*(code *)PTR_FUN_02006020)(param_1), local_88 == 0))
            goto LAB_00412d89;
            local_a0 = local_50 + (ulonglong)local_38[2];
            local_98 = FUN_004128b0(param_4,local_88,local_a0);
            if (local_98 == 0) goto LAB_00412d89;
            local_b0 = (code *)(local_50 + (ulonglong)*(uint *)(local_98 + 4));
          }
          if (*param_1 == 0xeedfade) {
            local_80 = *(longlong *)(param_1 + 10);
            local_90 = *(undefined8 *)(param_1 + 8);
            local_b5 = 1;
          }
          else {
            if ((PTR_FUN_02006028 == (undefined *)0x0) ||
               (local_80 = (*(code *)PTR_FUN_02006028)(param_1), local_80 == 0)) goto LAB_00412d89;
            local_90 = *(undefined8 *)(param_1 + 4);
            local_b5 = 1;
            if ((*param_1 & 0xfffffffe) == 0xe36c6700) {
              FUN_00412760(local_80,param_3);
              local_b5 = 0;
            }
          }
          if (((DAT_01db9053 <= local_b5) || (DAT_01db9052 != '\0')) ||
             (local_68 = param_1, local_60 = param_3, local_b4 = thunk_FUN_03ab0e75(&local_68),
             local_b4 != 0)) {
            param_1[1] = param_1[1] | 2;
            if (local_38[2] < 2) {
              local_28 = local_d8;
            }
            else {
              local_28 = (undefined8 *)FUN_004096a0();
            }
            local_28[1] = local_90;
            local_28[2] = local_80;
            local_e8 = local_28;
            lVar4 = FUN_0041f930();
            local_f0 = (undefined8 *)(lVar4 + 0x208);
            *local_e8 = *local_f0;
            *local_f0 = local_e8;
            local_118 = param_4[5];
            local_110 = param_4[8];
            FUN_00406e90(param_2,local_b0,param_1,local_80);
          }
        }
LAB_00412d89:
        local_6c = local_6c + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else {
    local_78 = param_4[4] - local_50;
    local_104 = *local_a8;
    local_6c = 0;
    if (-1 < local_104 + -1) {
      do {
        local_38 = (uint *)(local_a8 + (longlong)local_6c * 4 + 1);
        if ((*local_38 <= local_58) && (local_58 < local_38[1])) {
          if ((*local_38 <= local_78) && ((local_78 < local_38[1] && ((param_1[1] & 0x20) != 0)))) {
            return local_44;
          }
          local_108 = local_38[2];
          if (local_108 < 2) {
            lVar4 = FUN_0041f930();
            local_30 = *(undefined8 **)(lVar4 + 0x208);
            if (local_108 == 0) {
              *param_4 = local_50 + (ulonglong)local_38[1];
              local_b0 = (code *)(local_50 + (ulonglong)local_38[3]);
              FUN_00412810(local_b0);
              local_68 = param_1;
              local_60 = param_3;
              (*local_b0)(&local_68,param_2);
              uVar3 = FUN_0040a140();
              *(undefined4 *)(param_4[5] + 0x34) = uVar3;
              uVar2 = FUN_0040a0c0();
              *(undefined2 *)(param_4[5] + 0x100) = uVar2;
            }
            else if (local_108 == 1) {
              local_b0 = (code *)(local_50 + (ulonglong)local_38[3]);
              *param_4 = local_50 + (ulonglong)local_38[1];
              local_80 = local_30[2];
              local_90 = local_30[1];
              local_68 = param_1;
              local_60 = param_3;
              local_b0 = (code *)(*local_b0)(&local_68,param_2,local_80,local_90);
              *param_4 = (longlong)local_b0;
              if (local_30[2] != 0) {
                FUN_00410f20(local_30[2]);
                local_30[2] = 0;
              }
            }
            local_20 = (undefined8 *)0x0;
            lVar4 = FUN_0041f930();
            puVar1 = *(undefined8 **)(lVar4 + 0x208);
            while (local_28 = puVar1, local_28 != (undefined8 *)0x0) {
              if (local_28 == local_30) {
                if ((local_20 != (undefined8 *)0x0) || (local_38[2] == 1)) {
                  if (local_20 == (undefined8 *)0x0) {
                    lVar4 = FUN_0041f930();
                    *(undefined8 *)(lVar4 + 0x208) = 0;
                  }
                  else {
                    *local_20 = *local_28;
                  }
                  if (local_28[2] != 0) {
                    FUN_00410f20(local_28[2]);
                    local_28[2] = 0;
                  }
                  FUN_00409750(local_28);
                }
                break;
              }
              local_20 = local_28;
              puVar1 = (undefined8 *)*local_28;
            }
          }
          else if ((param_1[1] & 0x20) != 0) {
            local_b0 = (code *)0x0;
            if (local_108 == 2) {
              local_b0 = (code *)(local_50 + (ulonglong)local_38[3]);
            }
            else {
              if (*param_1 == 0xeedfade) {
                local_88 = **(longlong **)(param_1 + 10);
              }
              else if (PTR_FUN_02006020 == (undefined *)0x0) {
                local_88 = 0;
              }
              else {
                local_88 = (*(code *)PTR_FUN_02006020)(param_1);
              }
              if (local_88 != 0) {
                local_a0 = local_50 + (ulonglong)local_38[2];
                local_98 = FUN_004128b0(param_4,local_88,local_a0);
                if (local_98 != 0) {
                  local_b0 = (code *)(local_50 + (ulonglong)*(uint *)(local_98 + 4));
                }
              }
            }
            if ((local_b0 != (code *)0x0) && (local_b0 == (code *)param_4[4])) {
              if (local_38[2] == 2) {
                FUN_004127f0(local_b0);
                return local_44;
              }
              FUN_004127d0(local_b0);
              return local_44;
            }
          }
        }
        local_6c = local_6c + 1;
        local_104 = local_104 + -1;
      } while (local_104 != 0);
    }
  }
  return local_44;
}

