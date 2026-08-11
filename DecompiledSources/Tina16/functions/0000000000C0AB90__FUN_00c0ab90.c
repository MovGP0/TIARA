/* Ghidra address: 00c0ab90 */
/* Ghidra symbol: FUN_00c0ab90 */


void FUN_00c0ab90(longlong *param_1,ushort param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 *local_60;
  int local_4c;
  longlong local_48;
  longlong local_40;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  char local_19;
  
  local_60 = auStack_d8;
  local_a0 = (undefined8 *)0x0;
  local_98 = (undefined8 *)0x0;
  local_90 = (undefined8 *)0x0;
  local_88 = (undefined8 *)0x0;
  local_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_40 = 0;
  cVar1 = FUN_00bf2c80(param_1);
  if (cVar1 == '\0') {
    local_19 = '\0';
  }
  else {
    local_19 = '\x01';
    local_24 = FUN_00bf2b30(param_1);
    local_2c = FUN_00bf2b90(param_1);
  }
  local_34 = FUN_00bfaa10(param_1);
  if (param_2 < 0x271) {
    FUN_00c08a50(param_1);
    FUN_00bf2ed0(param_1,&local_68);
    if (local_68 == 0) {
      local_70 = (**(code **)(*param_1 + 0x3a8))(param_1);
      (**(code **)(*param_1 + 0x2a8))(param_1,&local_70);
      FUN_00c08a50(param_1);
      FUN_00bf2ed0(param_1,&local_78);
      if (local_78 == 0) {
        local_70 = (**(code **)(*param_1 + 0x3a8))(param_1);
        (**(code **)(*param_1 + 0x2a8))(param_1,&local_70);
        FUN_00c08a50(param_1);
      }
    }
  }
  else {
    cVar1 = FUN_00bf2c80(param_1);
    if (cVar1 == '\0') {
      FUN_00bf2c20(param_1,&local_80);
      local_48 = local_80;
      local_4c = 0;
      if (local_80 != 0) {
        local_4c = *(int *)(local_80 + -4);
      }
      if (local_4c < *(int *)((longlong)param_1 + 0x4c4)) {
        iVar2 = (**(code **)(*(longlong *)param_1[0x9d] + 0x28))((longlong *)param_1[0x9d]);
        if (*(int *)((longlong)param_1 + 0x4cc) < iVar2) {
          local_70 = FUN_00bb7750(1,*(int *)((longlong)param_1 + 0x4cc) + 1);
          (**(code **)(*param_1 + 0x2a8))(param_1,&local_70);
        }
      }
      else {
        FUN_00c0a0c0(param_1,1,1);
      }
    }
  }
  FUN_00bf2ed0(param_1,&local_40);
  if (local_40 == 0) goto code_r0x00c0b00f;
  if (param_2 < 0x272) {
    if ((param_2 == 0x271) || (param_2 == 0x26c)) {
      FUN_00bd16b0(&local_88,local_40);
      FUN_00414b50(&local_40,local_88);
    }
    else {
      if (param_2 == 0x26d) goto LAB_00c0aeaf;
      if (param_2 == 0x26e) goto LAB_00c0aed1;
      if (param_2 == 0x26f) goto LAB_00c0aef6;
    }
  }
  else if (param_2 == 0x272) {
LAB_00c0aeaf:
    FUN_00bd1700(&local_90,local_40);
    FUN_00414b50(&local_40,local_90);
  }
  else if (param_2 == 0x273) {
LAB_00c0aed1:
    FUN_00c0a9a0(auStack_d8,&local_98,local_40);
    FUN_00414b50(&local_40,local_98);
  }
  else if (param_2 == 0x274) {
LAB_00c0aef6:
    FUN_00c0aa70(auStack_d8,&local_a0,local_40);
    FUN_00414b50(&local_40,local_a0);
  }
  FUN_00c08780(param_1);
  if (local_19 == '\0') {
    local_b8 = 0;
    local_b0 = *(undefined1 *)((longlong)param_1 + 0x5f5);
    FUN_00bd0e70(param_1[0xaa],0x13,&local_34,&local_34);
  }
  else {
    local_b8 = 0;
    local_b0 = *(undefined1 *)((longlong)param_1 + 0x5f5);
    FUN_00bd0e70(param_1[0xaa],0x13,&local_24,&local_2c);
  }
  local_b8 = 0;
  local_b0 = *(undefined1 *)((longlong)param_1 + 0x5f5);
  FUN_00bd0e70(param_1[0xaa],0x12,&local_34,&local_34);
  FUN_00c08be0(param_1,local_40);
  FUN_00c087b0(param_1);
code_r0x00c0b00f:
  if ((local_19 != '\0') && (0x270 < param_2)) {
    FUN_00bfa470(param_1,&local_24);
    FUN_00bfa6c0(param_1,&local_2c);
  }
  if ((local_19 != '\0') || (param_2 < 0x271)) {
    (**(code **)(*param_1 + 0x2b0))(param_1,&local_34);
  }
  FUN_00414560(&local_a0,6);
  FUN_00414480(&local_68);
  FUN_00414480(&local_40);
  return;
}

