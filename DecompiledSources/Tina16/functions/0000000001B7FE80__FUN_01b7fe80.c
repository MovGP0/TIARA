/* Ghidra address: 01b7fe80 */
/* Ghidra symbol: FUN_01b7fe80 */


undefined4 FUN_01b7fe80(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [36];
  int local_84;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined1 *local_50;
  int local_44;
  longlong local_40;
  int local_34;
  int local_30;
  undefined4 local_2c;
  longlong *local_28;
  undefined8 local_20 [2];
  
  local_50 = auStack_a8;
  local_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_70 = 0;
  local_60 = 0;
  local_58 = 0;
  local_20[0] = 0;
  if (*param_2 == 0) {
    local_50 = auStack_a8;
    lVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
    *param_2 = lVar2;
  }
  else {
    (**(code **)(*(longlong *)*param_2 + 0x90))((longlong *)*param_2);
  }
  if (*param_3 == 0) {
    lVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
    *param_3 = lVar2;
  }
  else {
    (**(code **)(*(longlong *)*param_3 + 0x90))((longlong *)*param_3);
  }
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  uVar3 = FUN_00416740(param_1);
  FUN_004ae3e0(&DAT_01b801ec,&DAT_01b8020c,uVar3,local_28);
  iVar1 = (**(code **)(*local_28 + 0x28))();
  local_84 = iVar1 + -1;
  local_30 = 0;
  if (-1 < local_84) {
    do {
      local_84 = iVar1;
      (**(code **)(*local_28 + 0x18))(local_28,&local_58,local_30);
      if (local_58 != 0) {
        (**(code **)(*local_28 + 0x18))(local_28,&local_60,local_30);
        local_34 = FUN_004170c0(&LAB_01b80238,local_60,1);
        if (0 < local_34) {
          (**(code **)(*local_28 + 0x18))(local_28,&local_70,local_30);
          FUN_00416dc0(&local_68,local_70,1,local_34 + -1);
          (**(code **)(*(longlong *)*param_2 + 0x78))((longlong *)*param_2,local_68);
          local_20[0] = 0;
          (**(code **)(*local_28 + 0x18))(local_28,local_20,local_30);
          (**(code **)(*local_28 + 0x18))(local_28,&local_78,local_30);
          local_40 = local_78;
          local_44 = 0;
          if (local_78 != 0) {
            local_44 = *(int *)(local_78 + -4);
          }
          FUN_00416dc0(&local_80,local_20[0],local_34 + 1,local_44 - local_34);
          (**(code **)(*(longlong *)*param_3 + 0x78))((longlong *)*param_3,local_80);
          FUN_00414480(local_20);
        }
      }
      local_30 = local_30 + 1;
      local_84 = local_84 + -1;
      iVar1 = local_84;
    } while (local_84 != 0);
  }
  local_2c = (**(code **)(*local_28 + 0x28))(local_28);
  FUN_00410f20(local_28);
  FUN_00414560(&local_80,6);
  return local_2c;
}

