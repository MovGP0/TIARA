/* Ghidra address: 00c0bc20 */
/* Ghidra symbol: FUN_00c0bc20 */


void FUN_00c0bc20(longlong param_1)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  int local_60;
  int local_5c;
  undefined8 local_58;
  short *local_50;
  undefined8 local_48;
  longlong local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  longlong local_28;
  int local_20;
  char local_19;
  
  local_70 = auStack_a8;
  local_28 = 0;
  local_40 = 0;
  local_48 = 0;
  uVar3 = FUN_00c09df0(param_1);
  if (((uVar3 & 0x1000000) != 0) &&
     ((cVar1 = FUN_00bf2cb0(param_1), cVar1 != '\0' ||
      (cVar1 = FUN_00bf2cd0(param_1), cVar1 != '\0')))) {
    FUN_00c0ce10(param_1);
    goto LAB_00c0bff9;
  }
  local_20 = *(int *)(param_1 + 0x4c4);
  if ((((local_20 != 1) && ((*(uint *)(param_1 + 0x63a) & 0x400000) != 0)) &&
      (local_38 = *(int *)(param_1 + 0x4cc) + -1, 0 < local_38)) &&
     (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x28))
                        (*(longlong **)(param_1 + 0x4e8)), local_38 < iVar2)) {
    local_38 = local_38 + -1;
    local_34 = *(int *)(param_1 + 0x4c4) + -1;
    do {
      (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))
                (*(longlong **)(param_1 + 0x4e8),&local_40,local_38);
      local_5c = 0;
      if (local_40 != 0) {
        local_5c = *(int *)(local_40 + -4);
      }
      if (local_34 <= local_5c) {
        lVar4 = FUN_00414de0(&local_40);
        local_50 = (short *)(lVar4 + -2 + (longlong)local_34 * 2);
        goto LAB_00c0bd78;
      }
      local_38 = local_38 + -1;
    } while (-1 < local_38);
  }
  goto LAB_00c0bdd2;
  while( true ) {
    local_20 = local_20 + -1;
    local_50 = local_50 + -1;
    if (local_20 == 1) break;
LAB_00c0bd78:
    if (*local_50 != 0x20) break;
  }
  for (; (local_20 != 1 && (*local_50 != 0x20)); local_50 = local_50 + -1) {
    local_20 = local_20 + -1;
  }
LAB_00c0bdd2:
  iVar2 = local_20;
  if (local_20 == *(int *)(param_1 + 0x4c4)) {
    FUN_00bf2c20(param_1,&local_28);
    local_60 = 0;
    if (local_28 != 0) {
      local_60 = *(int *)(local_28 + -4);
    }
    local_2c = local_60;
    local_30 = ((*(int *)(param_1 + 0x4c4) + -2) / *(int *)(param_1 + 0x618)) *
               *(int *)(param_1 + 0x618) + 1;
    iVar2 = local_30;
    if (local_20 <= local_60) {
      if ((local_30 < local_20) && (*(short *)(local_28 + -2 + (longlong)(local_20 + -1) * 2) == 9))
      {
        iVar2 = local_20 + -1;
      }
      else {
        while ((iVar2 = local_20, local_30 < local_20 &&
               ((local_60 < local_20 + -1 ||
                (*(short *)(local_28 + -2 + (longlong)(local_20 + -1) * 2) == 0x20))))) {
          local_20 = local_20 + -1;
        }
      }
    }
  }
  local_20 = iVar2;
  if (local_20 != *(int *)(param_1 + 0x4c4)) {
    local_78 = FUN_00bb7750(local_20,*(undefined4 *)(param_1 + 0x4cc));
    FUN_00bfa470(param_1,&local_78);
    local_78 = FUN_00bfaa10(param_1);
    FUN_00bfa6c0(param_1,&local_78);
    local_58 = FUN_00bfaa10(param_1);
    FUN_00bf2ed0(param_1,&local_48);
    FUN_00bfb540(param_1,0);
    local_78 = FUN_00bb7750(local_20,*(undefined4 *)(param_1 + 0x4cc));
    local_88 = local_48;
    local_80 = 0;
    FUN_00bd0e70(*(undefined8 *)(param_1 + 0x550),8,&local_78,&local_58);
    local_19 = (*(uint *)(param_1 + 0x63a) & 0x40000) == 0;
    *(uint *)(param_1 + 0x63a) = *(uint *)(param_1 + 0x63a) | 0x40000;
    FUN_00bfa9b0(param_1,local_20);
    if (local_19 != '\0') {
      *(uint *)(param_1 + 0x63a) = *(uint *)(param_1 + 0x63a) & 0xfffbffff;
    }
  }
LAB_00c0bff9:
  FUN_00414560(&local_48,2);
  FUN_00414480(&local_28);
  return;
}

