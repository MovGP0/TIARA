/* Ghidra address: 005db820 */
/* Ghidra symbol: FUN_005db820 */


uint FUN_005db820(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined1 *local_70;
  longlong local_68;
  char local_59;
  longlong local_58;
  uint local_4c;
  longlong local_48;
  longlong local_40;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined1 local_28 [16];
  undefined8 local_18 [2];
  
  local_70 = auStack_98;
  FUN_00417580(local_18,&DAT_005d3e40);
  FUN_00417580(local_28,&DAT_005d3e40);
  local_2c = 0xffffffff;
  local_4c = (**(code **)*param_1)(param_1);
  local_40 = param_1[1];
  local_48 = local_40;
  if (local_40 != 0) {
    local_48 = *(longlong *)(local_40 + -8);
  }
  local_30 = local_4c % (uint)local_48;
  if (*(longlong *)(param_1[1] + (longlong)(int)local_30 * 8) != 0) {
    for (local_34 = 0; local_78 = (longlong)(int)local_30,
        (int)local_34 < *(int *)(*(longlong *)(param_1[1] + local_78 * 8) + 0x10);
        local_34 = local_34 + 1) {
      FUN_00417740(local_18,&DAT_005d3e40);
      local_58 = *(longlong *)(param_1[1] + local_78 * 8);
      if (*(uint *)(local_58 + 0x10) <= local_34) {
        FUN_00594f90();
      }
      FUN_00417c40(local_18,*(longlong *)(local_58 + 8) + (longlong)(int)local_34 * 0x10,
                   &DAT_005d3e40);
      iVar1 = FUN_00416db0(local_18[0],param_2);
      local_59 = iVar1 == 0;
      FUN_00417740(local_18,&DAT_005d3e40);
      if (local_59 != '\0') {
        local_2c = local_34;
        FUN_00417740(local_28,&DAT_005d3e40);
        local_68 = *(longlong *)(param_1[1] + (longlong)(int)local_30 * 8);
        if (*(uint *)(local_68 + 0x10) <= local_34) {
          FUN_00594f90();
        }
        FUN_00417c40(local_28,*(longlong *)(local_68 + 8) + (longlong)(int)local_34 * 0x10,
                     &DAT_005d3e40);
        FUN_00417c40(param_3,local_28,&DAT_005d3e40);
        FUN_00417740(local_28,&DAT_005d3e40);
        break;
      }
    }
  }
  FUN_00417840(local_28,&DAT_005d3e40,2);
  return local_2c;
}

