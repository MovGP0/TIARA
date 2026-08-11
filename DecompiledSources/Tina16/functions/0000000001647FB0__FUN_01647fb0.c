/* Ghidra address: 01647fb0 */
/* Ghidra symbol: FUN_01647fb0 */


undefined8 FUN_01647fb0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined8 local_80;
  undefined8 local_78;
  char local_6b;
  char local_6a;
  char local_69;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  int local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_90 = auStack_f8;
  local_c0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_78 = 0;
  local_80 = 0;
  local_40 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0xb0))
                       (*(longlong **)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x18));
  if (local_40 == -1) {
    uVar3 = FUN_00b89270();
    FUN_0041ddd0(&local_a8,PTR_PTR_020013c0);
    FUN_00b8e650(uVar3,&local_a0,L"HDLStrings.Msg_NotAssigned",local_a8);
    local_d8 = local_a0;
    FUN_00416cd0(&local_98,3,*(undefined8 *)(param_1 + 0x18),&DAT_016484ac);
    FUN_01613110(local_98);
  }
  local_50 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + (longlong)local_40 * 8);
  local_44 = 0;
  local_38 = local_50;
  local_20 = (longlong *)FUN_00410e60(&PTR_FUN_00472dd0,1);
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b67b0(local_28,1);
  *(undefined1 *)((longlong)local_28 + 0x49) = 0;
  local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b67b0(local_30,1);
  *(undefined1 *)((longlong)local_30 + 0x49) = 0;
  do {
    (**(code **)(*local_20 + 0x10))(local_20);
    (**(code **)(*local_28 + 0x90))(local_28);
    FUN_0161db10(local_50,local_20);
    local_69 = FUN_0161de70(local_20,local_28);
    FUN_004b37d0(local_28,&local_78);
    FUN_004b37d0(local_30,&local_80);
    iVar2 = (**(code **)(*local_28 + 0x28))(local_28);
    if (iVar2 < 1) {
LAB_0164820a:
      local_6a = '\0';
    }
    else {
      iVar2 = (**(code **)(*local_30 + 0x28))(local_30);
      if (iVar2 < 1) goto LAB_0164820a;
      iVar2 = FUN_00416db0(local_78,local_80);
      if (iVar2 != 0) goto LAB_0164820a;
      local_6a = '\x01';
    }
    (**(code **)(*local_30 + 0x10))(local_30,local_28);
    if ((local_69 == '\0') || (local_6a != '\0')) {
      local_6b = '\0';
    }
    else {
      local_6b = '\x01';
    }
    if ((local_6b != '\0') && (local_3c = (int)local_20[2] + -1, -1 < local_3c)) {
      do {
        local_58 = FUN_004aeac0(local_20,local_3c);
        local_60 = *(longlong *)(local_58 + 8);
        cVar1 = FUN_0161ddc0(local_60);
        if (cVar1 != '\0') {
          FUN_004167a0(&local_b0,*(undefined8 *)(local_60 + 0x40));
          local_68 = FUN_01647d60(param_1,local_b0);
          if (local_68 != 0) {
            *(longlong *)(local_58 + 8) = local_68;
          }
        }
        local_60 = *(longlong *)(local_58 + 0x10);
        cVar1 = FUN_0161ddc0(local_60);
        if (cVar1 != '\0') {
          FUN_004167a0(&local_b8,*(undefined8 *)(local_60 + 0x40));
          local_68 = FUN_01647d60(param_1,local_b8);
          if (local_68 != 0) {
            *(longlong *)(local_58 + 0x10) = local_68;
          }
        }
        local_3c = local_3c + -1;
      } while (local_3c != -1);
    }
    local_44 = local_44 + 1;
    if (1000 < local_44) {
      uVar3 = FUN_00b89270();
      FUN_0041ddd0(&local_c8,PTR_PTR_020020d0);
      FUN_00b8e650(uVar3,&local_c0,L"HDLStrings.Msg_ErrRepUsrDefVar",local_c8);
      FUN_01613110(local_c0);
    }
    if (local_6b == '\0') {
      FUN_00410f20(local_20);
      FUN_00410f20(local_28);
      FUN_00410f20(local_30);
      FUN_00414560(&local_c8,7);
      FUN_00414560(&local_80,2);
      return local_38;
    }
  } while( true );
}

