/* Ghidra address: 00974c70 */
/* Ghidra symbol: FUN_00974c70 */


void FUN_00974c70(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 *local_60;
  int local_54;
  longlong local_50;
  longlong *local_48;
  uint local_3c;
  longlong local_38;
  int local_2c;
  longlong *local_28;
  longlong local_20;
  
  local_60 = auStack_88;
  local_68 = 0;
  puVar2 = auStack_88;
  if ((*(char *)(param_1 + 0x90) != '\0') &&
     (lVar1 = *(longlong *)(param_1 + 0x98), puVar2 = auStack_88, 0 < *(int *)(lVar1 + 0x10))) {
    local_3c = *(uint *)(lVar1 + 0x10) - 1;
    puVar2 = auStack_88;
    local_38 = lVar1;
    if (*(uint *)(lVar1 + 0x10) <= local_3c) {
      FUN_00594f90();
      puVar2 = local_60;
    }
    local_60 = puVar2;
    local_48 = *(longlong **)(*(longlong *)(local_38 + 8) + (longlong)(int)local_3c * 8);
    local_50 = *(longlong *)(param_1 + 0x98);
    local_54 = *(int *)(local_50 + 0x10) + -1;
    local_28 = local_48;
    FUN_00599670(local_50 + 8,local_54,5);
    if (*(longlong *)(param_1 + 0x88) != 0) {
      local_2c = (**(code **)(*local_28 + 0x38))(local_28);
      local_2c = local_2c + -1;
      if (-1 < local_2c) {
        do {
          local_20 = FUN_0096fb60(&PTR_FUN_0091c4e0,1,param_2,param_3);
          (**(code **)(*local_28 + 0x28))(local_28,&local_68,local_2c);
          FUN_00414b90(local_20 + 0x88,local_68);
          (**(code **)(**(longlong **)(param_1 + 0x88) + 0x90))
                    (*(longlong **)(param_1 + 0x88),local_20);
          FUN_00410f20(local_20);
          local_2c = local_2c + -1;
        } while (local_2c != -1);
      }
    }
    FUN_00410f20(local_28);
    puVar2 = local_60;
  }
  local_60 = puVar2;
  FUN_00414520(&local_68);
  return;
}

