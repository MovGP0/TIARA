/* Ghidra address: 01551ca0 */
/* Ghidra symbol: FUN_01551ca0 */


void FUN_01551ca0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 local_res10 [3];
  undefined1 auStack_178 [32];
  undefined *local_158;
  wchar_t *local_150;
  undefined *local_148;
  undefined8 local_140;
  undefined *local_138;
  undefined8 local_130;
  int local_128;
  int local_124;
  uint local_120;
  int local_11c;
  undefined *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8 [17];
  undefined8 local_50;
  int local_44 [3];
  undefined8 local_38;
  
  local_118 = (undefined *)0x0;
  local_100 = (undefined *)0x0;
  local_108 = 0;
  local_110 = 0;
  local_f8 = (undefined *)0x0;
  local_f0 = (undefined *)0x0;
  local_e8 = 0;
  local_e0 = 0;
  local_50 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x40) + 0x528);
  if (lVar5 != 0) {
    uVar3 = FUN_01d03160(lVar5);
    cVar1 = FUN_01d3d5c0(uVar3);
    if (cVar1 != '\0') {
      uVar2 = FUN_01d03160(lVar5);
      local_120 = (uint)uVar2;
      goto LAB_01551d75;
    }
  }
  local_120 = *(uint *)(*(longlong *)(param_1 + 0x208) + 8);
LAB_01551d75:
  local_128 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x28) + 0x10);
  if (local_120 == 0x8f) {
    local_124 = 5;
  }
  else if (local_120 == 0x34) {
    local_124 = 3;
  }
  else if (local_120 == 0x3b) {
    local_124 = 4;
  }
  else {
    cVar1 = FUN_01d3f310(local_120,local_44);
    if (cVar1 == '\0') {
      if (local_120 == 0x5dd) {
        local_124 = 5;
      }
      else {
        local_124 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x28) + 0x10);
      }
    }
    else {
      local_124 = local_44[0] * 2 + 1;
    }
  }
  FUN_0154b550(local_d8,local_120);
  puVar8 = local_d8;
  puVar10 = (undefined8 *)(param_1 + 0x18c);
  for (lVar5 = 0xf; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined4 *)puVar10 = *(undefined4 *)puVar8;
  local_11c = 0;
  iVar7 = local_124;
  if (-1 < local_124 + -1) {
    do {
      if (local_128 + -1 < local_11c) {
        *(undefined8 *)(param_1 + 0x180) = 0;
      }
      else {
        uVar4 = FUN_01571ee0(*(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x28),
                             *(int *)(param_1 + 0x18c + (longlong)(local_11c + 1) * 4) + -1);
        *(undefined8 *)(param_1 + 0x180) = uVar4;
      }
      if (*(longlong *)(param_1 + 0x180) == 0) {
        if ((local_120 == 0x34) || (local_120 == 0x3b)) {
          local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x40);
          if (*(int *)(param_1 + 0x17c) == 0) {
            FUN_01551930(auStack_178,0,&DAT_0155252c);
          }
          FUN_017ff4a0(local_38,&local_f0);
          local_158 = &DAT_01552518;
          local_150 = L"eTr0_";
          local_148 = local_f0;
          FUN_00416cd0(param_1 + 0x228,5,*(undefined8 *)(param_1 + 0x228),&DAT_01552540);
        }
        else if (local_120 == 0x8f) {
          local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x40);
          if (*(int *)(param_1 + 0x17c) == 0) {
            FUN_01551930(auStack_178,0,&DAT_01552568);
          }
          FUN_017ff4a0(local_38,&local_f8);
          local_158 = &DAT_01552518;
          local_150 = L"key0_";
          local_148 = local_f8;
          FUN_00416cd0(param_1 + 0x228,5,*(undefined8 *)(param_1 + 0x228),&DAT_01552568);
        }
        else {
          cVar1 = FUN_01d3f310(local_120,local_44);
          if (cVar1 == '\0') {
            if (local_120 == 0x5dd) {
              local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x40);
              if (*(int *)(param_1 + 0x17c) == 0) {
                FUN_01551930(auStack_178,0,&DAT_015525b4);
              }
              FUN_017ff4a0(local_38,&local_118);
              local_158 = &DAT_01552518;
              local_150 = L"eHk0_";
              local_148 = local_118;
              FUN_00416cd0(param_1 + 0x228,5,*(undefined8 *)(param_1 + 0x228),&DAT_015525c8);
            }
          }
          else {
            local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0x40);
            iVar6 = 0;
            iVar9 = local_44[0];
            if (-1 < local_44[0] + -1) {
              do {
                if (*(int *)(param_1 + 0x17c) == 0) {
                  FUN_01551930(auStack_178,iVar6,&DAT_0155252c);
                }
                iVar6 = iVar6 + 1;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
            iVar6 = 0;
            iVar9 = local_44[0];
            if (-1 < local_44[0] + -1) {
              do {
                FUN_01d43440(&local_100,iVar6);
                FUN_01d43440(&local_108,iVar6);
                FUN_017ff4a0(local_38,&local_110);
                local_158 = local_100;
                local_150 = L"=>";
                local_148 = &DAT_0155252c;
                local_140 = local_108;
                local_138 = &DAT_01552594;
                local_130 = local_110;
                FUN_00416cd0(param_1 + 0x228,8,*(undefined8 *)(param_1 + 0x228),&DAT_01552540);
                if (iVar6 < local_44[0] + -1) {
                  FUN_00416ad0(param_1 + 0x228,&DAT_015525a4);
                }
                iVar6 = iVar6 + 1;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
          }
        }
      }
      else {
        uVar4 = FUN_01571ef0(*(undefined8 *)(*(longlong *)(param_1 + 0x270) + 0x750),
                             *(undefined4 *)(*(longlong *)(param_1 + 0x180) + 0x30));
        *(undefined8 *)(*(longlong *)(param_1 + 0x270) + 0x28) = uVar4;
        if ((*(longlong *)(*(longlong *)(param_1 + 0x270) + 0x28) == 0) ||
           (*(char *)(*(longlong *)(param_1 + 0x180) + 0x99) == '\0')) {
          FUN_01550c40(*(undefined8 *)(param_1 + 0x270),&local_e8,*(undefined8 *)(param_1 + 0x180));
          FUN_00414b50(param_1 + 0x218,local_e8);
        }
        else {
          FUN_01571a60(*(undefined8 *)(param_1 + 0x180),&local_e0);
          FUN_00414b50(param_1 + 0x218,local_e0);
        }
        if (*(int *)(param_1 + 0x17c) == 0) {
          FUN_01575810(*(undefined8 *)(*(longlong *)(param_1 + 0x270) + 0x8d0),
                       *(undefined4 *)(*(longlong *)(param_1 + 0x180) + 0x30),
                       *(undefined8 *)(param_1 + 0x218));
        }
        (**(code **)(**(longlong **)(param_1 + 0x170) + 0x18))
                  (*(longlong **)(param_1 + 0x170),&local_50,local_11c);
        if ((*(longlong *)(*(longlong *)(param_1 + 0x180) + 0x28) == 0) ||
           (cVar1 = FUN_0154f5b0(*(undefined8 *)(param_1 + 0x270)), cVar1 == '\0')) {
          local_158 = &DAT_01552518;
          local_150 = *(wchar_t **)(param_1 + 0x218);
          FUN_00416cd0(param_1 + 0x228,4,*(undefined8 *)(param_1 + 0x228),local_50);
        }
        else {
          local_158 = &DAT_01552518;
          local_150 = *(wchar_t **)(*(longlong *)(param_1 + 0x180) + 0x28);
          FUN_00416cd0(param_1 + 0x228,4,*(undefined8 *)(param_1 + 0x228),local_50);
        }
      }
      if (local_11c < local_124 + -1) {
        FUN_00416ad0(param_1 + 0x228);
      }
      local_11c = local_11c + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_00414560(&local_118,8);
  FUN_00414480(&local_50);
  FUN_00414480(local_res10);
  return;
}

