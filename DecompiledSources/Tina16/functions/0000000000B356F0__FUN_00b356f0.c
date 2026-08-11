/* Ghidra address: 00b356f0 */
/* Ghidra symbol: FUN_00b356f0 */


undefined8 FUN_00b356f0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined2 local_48;
  undefined2 local_46;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 *local_40;
  int local_2c;
  uint local_28;
  undefined1 local_23;
  undefined2 local_22;
  longlong *local_20;
  
  local_40 = auStack_68;
  local_20 = (longlong *)FUN_00410e60(&LAB_00b251f8,1);
  local_28 = 0;
  bVar1 = *(byte *)(param_2 + 8);
  if (bVar1 < 5) {
    if (bVar1 == 4) {
      local_28 = 0x83;
    }
    else if (bVar1 == 0) {
      local_28 = 0;
    }
    else if (bVar1 == 1) {
      local_28 = 1;
    }
    else if (bVar1 == 2) {
      local_28 = 2;
    }
    else if (bVar1 == 3) {
      local_28 = 3;
    }
  }
  else if (bVar1 == 5) {
    local_28 = 4;
  }
  else if (bVar1 == 6) {
    local_28 = 5;
  }
  else if (bVar1 == 7) {
    local_28 = 6;
  }
  else if (bVar1 == 8) {
    local_28 = 7;
  }
  cVar2 = *(char *)(param_2 + 10);
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      local_28 = local_28 | 0x10;
    }
    else if (cVar2 == '\x02') {
      local_28 = local_28 | 0x20;
    }
  }
  bVar1 = *(byte *)(param_2 + 9);
  if (bVar1 < 6) {
    if (bVar1 == 5) {
      local_28 = local_28 | 0x400000;
    }
    else if (bVar1 != 1) {
      if (bVar1 == 2) {
        local_28 = local_28 | 0x100000;
      }
      else if (bVar1 == 3) {
        local_28 = local_28 | 0x200000;
      }
      else if (bVar1 == 4) {
        local_28 = local_28 | 0x300000;
      }
    }
  }
  else if (bVar1 == 6) {
    local_28 = local_28 | 0x500000;
  }
  else if (bVar1 == 7) {
    local_28 = local_28 | 0x600000;
  }
  else if (bVar1 == 8) {
    local_28 = local_28 | 0x700000;
  }
  if (*(char *)(param_2 + 0xd) != '\0') {
    local_28 = local_28 | 0x100;
  }
  if (*(char *)(param_2 + 0xe) == '\0') {
    local_28 = local_28 | 0x200;
  }
  if (*(char *)(param_2 + 0xb) != '\0') {
    local_28 = local_28 | 0x40000;
  }
  if (*(char *)(param_2 + 0xc) != '\0') {
    local_28 = local_28 | 0x80000;
  }
  lVar5 = (**(code **)*local_20)(local_20);
  FUN_004b6e40(local_20,lVar5 + 4);
  FUN_00b25870(local_20,local_28);
  FUN_00b35410(auStack_68,*(undefined8 *)(param_2 + 0x10));
  FUN_00b35410(auStack_68,*(undefined8 *)(param_2 + 0x20));
  FUN_00b35410(auStack_68,*(undefined8 *)(param_2 + 0x18));
  FUN_00b35410(auStack_68,*(undefined8 *)(param_2 + 0x28));
  iVar3 = FUN_00b22360(*(undefined8 *)(param_2 + 0x40));
  if (iVar3 < 1) {
    local_22 = 0;
    local_23 = 0;
  }
  else {
    FUN_00b22330(*(undefined8 *)(param_2 + 0x40),&local_48,0);
    local_22 = local_48;
    FUN_00b22330(*(undefined8 *)(param_2 + 0x40),&local_48,0);
    local_23 = local_44;
  }
  FUN_00b35540(auStack_68,*(undefined8 *)(param_2 + 0x30));
  FUN_00b35540(auStack_68,*(undefined8 *)(param_2 + 0x38));
  lVar5 = (**(code **)*local_20)(local_20);
  FUN_004b6e40(local_20,lVar5 + 2);
  uVar4 = FUN_00b22360(*(undefined8 *)(param_2 + 0x40));
  FUN_00b25840(local_20,uVar4);
  iVar3 = FUN_00b22360();
  local_2c = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar5 = (**(code **)*local_20)(local_20);
      FUN_004b6e40(local_20,lVar5 + 8);
      FUN_00b22330(*(undefined8 *)(param_2 + 0x40),&local_48,local_2c);
      FUN_00b25840(local_20,local_48);
      FUN_00b22330(*(undefined8 *)(param_2 + 0x40),&local_48,local_2c);
      FUN_00b25840(local_20,local_46);
      FUN_00b22330(*(undefined8 *)(param_2 + 0x40),&local_48,local_2c);
      FUN_00b25840(local_20,local_44);
      FUN_00b22330(*(undefined8 *)(param_2 + 0x40),&local_48,local_2c);
      FUN_00b25840(local_20,local_43);
      local_2c = local_2c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  uVar4 = (**(code **)*local_20)(local_20);
  FUN_00415d10(param_1,uVar4,0);
  FUN_004b6dc0(local_20,0);
  uVar4 = (**(code **)*local_20)(local_20);
  FUN_00b257a0(local_20,param_1,uVar4);
  (**(code **)(*local_20 + -0x20))(local_20,1);
  return param_1;
}

