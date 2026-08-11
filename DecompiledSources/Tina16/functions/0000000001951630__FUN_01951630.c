/* Ghidra address: 01951630 */
/* Ghidra symbol: FUN_01951630 */


void FUN_01951630(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  longlong *local_40;
  int local_34;
  longlong *local_30;
  int local_28;
  longlong *local_20;
  
  local_50 = auStack_f8;
  local_d0 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_98 = 0;
  local_80 = 0;
  local_88 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_40 = (longlong *)0x0;
  local_20 = (longlong *)0x0;
  if (param_2 == 0) {
    local_30 = (longlong *)FUN_01950760(param_1);
  }
  else {
    local_50 = auStack_f8;
    local_30 = (longlong *)FUN_01950760(param_2);
    local_40 = (longlong *)FUN_01950760(param_1);
    local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_004b67b0(local_20,1);
  }
  if (local_40 != (longlong *)0x0) {
    iVar1 = (**(code **)(*local_40 + 0x28))();
    local_34 = 0;
    if (-1 < iVar1 + -1) {
      do {
        (**(code **)(*local_40 + 0x18))(local_40,&local_58,local_34);
        iVar2 = (**(code **)(*local_30 + 0xb0))(local_30,local_58);
        if (iVar2 < 0) {
          (**(code **)(*local_40 + 0x18))(local_40,&local_60,local_34);
          uVar3 = (**(code **)(*local_40 + 0x30))(local_40,local_34);
          (**(code **)(*local_30 + 0x80))(local_30,local_60,uVar3);
          (**(code **)(*local_40 + 0x18))(local_40,&local_68,local_34);
          uVar3 = (**(code **)(*local_40 + 0x30))(local_40,local_34);
          (**(code **)(*local_20 + 0x80))(local_20,local_68,uVar3);
        }
        local_34 = local_34 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  local_34 = 1;
  iVar1 = (**(code **)(*local_30 + 0x28))(local_30);
  if (3 < iVar1) {
    FUN_00416ba0(&local_70,param_1[0x20],&DAT_01951d08);
    local_28 = (**(code **)(*local_30 + 0x78))(local_30,local_70);
    FUN_00416ba0(&local_78,param_1[0x20],&LAB_01951d18);
    iVar1 = (**(code **)(*local_30 + 0x78))(local_30,local_78);
    local_28 = iVar1 - local_28;
    local_34 = local_28;
    do {
      local_34 = local_34 + -1;
      FUN_0043f750(&local_88,local_34);
      FUN_00416ba0(&local_80,param_1[0x20],local_88);
      iVar1 = (**(code **)(*local_30 + 0xb0))(local_30,local_80);
    } while (iVar1 == -1);
  }
  while( true ) {
    FUN_0043f750(&local_98,local_34);
    FUN_00416ba0(&local_90,param_1[0x20],local_98);
    iVar1 = (**(code **)(*local_30 + 0xb0))(local_30,local_90);
    if (iVar1 == -1) break;
    local_34 = local_34 + 1;
  }
  FUN_0043f750(&local_a8,local_34);
  FUN_00416ba0(&local_a0,param_1[0x20],local_a8);
  (**(code **)(*param_1 + 0x50))(param_1,local_a0);
  if ((param_2 == 0) || (plVar4 = (longlong *)FUN_01950760(param_1), local_30 == plVar4)) {
    FUN_0043f750(&local_b8,local_34);
    FUN_00416ba0(&local_b0,param_1[0x20],local_b8);
    (**(code **)(*local_30 + 0x80))(local_30,local_b0,param_1);
  }
  else if (local_40 != (longlong *)0x0) {
    FUN_0043f750(&local_c8,local_34);
    FUN_00416ba0(&local_c0,param_1[0x20],local_c8);
    (**(code **)(*local_40 + 0x80))(local_40,local_c0,param_1);
  }
  if (local_20 != (longlong *)0x0) {
    iVar1 = (**(code **)(*local_20 + 0x28))();
    local_34 = 0;
    if (-1 < iVar1 + -1) {
      do {
        (**(code **)(*local_20 + 0x18))(local_20,&local_d0,local_34);
        local_28 = (**(code **)(*local_30 + 0xb0))(local_30,local_d0);
        if (-1 < local_28) {
          (**(code **)(*local_30 + 0x98))(local_30,local_28);
        }
        local_34 = local_34 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  FUN_00410f20(local_20);
  FUN_00414560(&local_d0,0x10);
  return;
}

