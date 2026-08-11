/* Ghidra address: 01d6ded0 */
/* Ghidra symbol: FUN_01d6ded0 */


void FUN_01d6ded0(undefined8 param_1,longlong param_2,char *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  char cVar5;
  ushort uVar6;
  short sVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  byte bVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined1 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  longlong local_80;
  char *local_78;
  undefined1 *local_70;
  undefined1 local_65;
  int local_64;
  longlong local_60;
  undefined1 local_4a;
  undefined1 local_49 [33];
  
  local_49[0] = 0;
  local_4a = 0;
  local_65 = 3;
  local_64 = 1;
  puVar1 = (undefined1 *)(param_2 + 0x10);
  local_80 = param_2;
  local_78 = param_3;
  local_70 = param_4;
  local_60 = param_2;
  uVar6 = FUN_016ebd90(param_1);
  if (0x3f5 < uVar6) {
    if (uVar6 < 0x88a) {
      if (uVar6 == 0x889) {
        local_65 = 2;
        *(code **)(param_2 + 0x18) = FUN_01d6d880;
        sVar7 = FUN_016eb820(param_1,1,7);
        local_64 = (int)sVar7;
        goto LAB_01d6e1e9;
      }
      if (uVar6 == 0x3f8) goto LAB_01d6e0de;
      if (uVar6 == 0x3f9) {
        if (*(char *)(local_60 + 0x30) != '\x02') {
          FUN_01d6de30(auStack_f8);
        }
        *(code **)(param_2 + 0x18) = FUN_01d6d390;
        sVar7 = FUN_016eb820(param_1,1,3);
        local_64 = (int)sVar7;
        goto LAB_01d6e1e9;
      }
      if (uVar6 == 0x3fa) {
        if (*(char *)(local_60 + 0x30) != '\x02') {
          FUN_01d6de30(auStack_f8);
        }
        *(code **)(param_2 + 0x18) = FUN_01d6d5f0;
        sVar7 = FUN_016eb820(param_1,1,3);
        local_64 = (int)sVar7;
        goto LAB_01d6e1e9;
      }
      if (uVar6 == 0x45d) {
        *(code **)(param_2 + 0x18) = FUN_01d6c970;
        sVar7 = FUN_016eb820(param_1,1,3);
        local_64 = (int)sVar7;
        goto LAB_01d6e1e9;
      }
    }
    else {
      if (uVar6 == 0x8ed) goto LAB_01d6e088;
      if (uVar6 == 0x8f5) goto LAB_01d6e0b3;
      if (uVar6 == 0x901) goto LAB_01d6e109;
    }
LAB_01d6e1de:
    *(code **)(param_2 + 0x18) = FUN_01d6c970;
    goto LAB_01d6e1e9;
  }
  if (uVar6 == 0x3f5) {
LAB_01d6e109:
    *(code **)(param_2 + 0x18) = FUN_01d6d110;
    sVar7 = FUN_016eb820(param_1,1,3);
    local_64 = (int)sVar7;
  }
  else {
    if (uVar6 < 0x3f2) {
      if (uVar6 == 0x3f1) goto LAB_01d6e109;
      if (uVar6 != 0x3e9) {
        if (uVar6 == 0x3ea) goto LAB_01d6e088;
        if (uVar6 == 0x3eb) goto LAB_01d6e0b3;
        if (uVar6 != 0x3ed) goto LAB_01d6e1de;
      }
    }
    else {
      if (uVar6 == 0x3f2) {
LAB_01d6e088:
        *(code **)(param_2 + 0x18) = FUN_01d6c970;
        sVar7 = FUN_016eb820(param_1,1,3);
        local_64 = (int)sVar7;
        goto LAB_01d6e1e9;
      }
      if (uVar6 != 0x3f3) {
        if (uVar6 != 0x3f4) goto LAB_01d6e1de;
LAB_01d6e0b3:
        *(code **)(param_2 + 0x18) = FUN_01d6cbd0;
        sVar7 = FUN_016eb820(param_1,1,3);
        local_64 = (int)sVar7;
        goto LAB_01d6e1e9;
      }
    }
LAB_01d6e0de:
    *(code **)(param_2 + 0x18) = FUN_01d6ce60;
    sVar7 = FUN_016eb820(param_1,1,3);
    local_64 = (int)sVar7;
  }
LAB_01d6e1e9:
  uVar9 = FUN_016eacf0(param_1,3,3);
  bVar11 = *(byte *)(local_60 + 0x30);
  uVar10 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1) & 0xffffffff;
  if ((byte)uVar10 <= bVar11) {
    do {
      local_d8 = local_70;
      local_d0 = (undefined1 *)(CONCAT44(local_d0._4_4_,(int)uVar9) & 0xffffffff000000ff);
      local_c8 = 1;
      local_c0 = 1;
      local_b8 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 0;
      local_90 = 0xc;
      FUN_00dd5710(*(longlong *)(local_80 + 0x28) + -0x228 + (uVar10 & 0xff) * 0x228,uVar10,*puVar1,
                   local_78);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),(char)uVar10 + '\x01');
      bVar11 = bVar11 - 1;
    } while (bVar11 != 0);
  }
  *(char *)(param_2 + 0x14) = *local_78;
  *local_78 = *local_78 + *(char *)(local_60 + 0x30);
  *(undefined1 *)(param_2 + 0x15) = *local_70;
  *local_70 = *local_70;
  uVar4 = FUN_016eacf0(param_1,2,local_65);
  *(undefined1 *)(param_2 + 0x20) = uVar4;
  if (2 < *(byte *)(param_2 + 0x20)) {
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  if (local_64 == 1) {
    uVar4 = 0;
  }
  else if (local_64 == 2) {
    uVar4 = 1;
  }
  else if (local_64 == 3) {
    uVar4 = 0;
  }
  else if (local_64 == 4) {
    uVar4 = 3;
  }
  else {
    uVar4 = 0;
  }
  uVar8 = FUN_016eacf0(param_1,4,3);
  local_d8 = local_70;
  local_d0 = (undefined1 *)(CONCAT44(local_d0._4_4_,uVar8) & 0xffffffff000000ff);
  local_c0 = 1;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_c8 = uVar4;
  FUN_00dd58f0(local_80 + 0x9cc8,*(undefined1 *)(param_2 + 0x12),*puVar1,local_78);
  lVar3 = local_80;
  plVar2 = (longlong *)(local_80 + 0x38);
  cVar5 = FUN_016eacf0(param_1,5,2);
  dVar12 = (double)FUN_016eb990(param_1,1,2);
  dVar13 = (double)FUN_016eb990(param_1,1,1);
  if ((dVar12 < 1e-15) && (dVar13 < 1e-15)) {
    cVar5 = '\0';
  }
  if (cVar5 == '\0') {
    *(undefined1 *)(local_60 + 0x9cc0) = 0;
    *plVar2 = local_80 + 0x40;
    local_d8 = local_49;
    local_d0 = &local_4a;
    FUN_00dd2c10(lVar3 + 0x40,&PTR_FUN_00dd01b8,
                 *(undefined1 *)(*(longlong *)(local_60 + 0x9cc8) + 1),*puVar1);
  }
  else if (cVar5 == '\x01') {
    *(undefined1 *)(local_60 + 0x9cc0) = 1;
    *plVar2 = local_80 + 0x40;
    local_d8 = local_49;
    local_d0 = &local_4a;
    FUN_00dd2ca0(lVar3 + 0x40,&PTR_FUN_00dd01f0,
                 *(undefined1 *)(*(longlong *)(local_60 + 0x9cc8) + 1),*puVar1);
  }
  else {
    *(undefined1 *)(local_60 + 0x9cc0) = 0;
    *plVar2 = local_80 + 0x40;
    local_d8 = local_49;
    local_d0 = &local_4a;
    FUN_00dd2c10(lVar3 + 0x40,&PTR_FUN_00dd01b8,
                 *(undefined1 *)(*(longlong *)(local_60 + 0x9cc8) + 1),*puVar1);
  }
  *(undefined1 *)(param_2 + 0x11) = *(undefined1 *)(*plVar2 + 1);
  *(double *)(local_80 + 0x58) = dVar12;
  *(double *)(local_80 + 0x50) = dVar13;
  *(undefined8 *)(local_80 + 0x68) = 0;
  *(undefined1 *)(local_80 + 0x60) = 0;
  *(undefined1 *)(local_80 + 0x61) = 0;
  *(undefined4 *)(local_80 + 100) = 0;
  return;
}

