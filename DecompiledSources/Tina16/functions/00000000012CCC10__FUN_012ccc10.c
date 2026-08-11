/* Ghidra address: 012ccc10 */
/* Ghidra symbol: FUN_012ccc10 */


void FUN_012ccc10(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined8 local_res10;
  undefined4 local_res18;
  undefined4 local_res20;
  undefined1 auStack_88 [40];
  undefined1 local_60 [4];
  int local_5c;
  undefined1 local_50 [12];
  int local_44;
  undefined1 *local_40;
  int local_30;
  int local_2c;
  longlong local_28;
  longlong local_20;
  
  local_40 = auStack_88;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  local_2c = (**(code **)(**(longlong **)(param_1 + 0x738) + 0xb0))
                       (*(longlong **)(param_1 + 0x738),local_res10);
  if (-1 < local_2c) {
    (**(code **)**(undefined8 **)(param_1 + 0x748))(*(undefined8 **)(param_1 + 0x748));
    (**(code **)(**(longlong **)(param_1 + 0x738) + 0x98))(*(longlong **)(param_1 + 0x738),local_2c)
    ;
    FUN_004ae870(*(undefined8 *)(param_1 + 0x740),local_2c);
    local_20 = FUN_006efcb0(*(undefined8 *)(*(longlong *)(param_1 + 0x6e0) + 0x4e0),local_2c);
    if (local_20 != 0) {
      FUN_00410f20(*(undefined8 *)(local_20 + 0x40));
      FUN_006f1440(*(undefined8 *)(*(longlong *)(param_1 + 0x6e0) + 0x4e0),local_2c);
      iVar1 = FUN_006efc30(*(undefined8 *)(*(longlong *)(param_1 + 0x6e0) + 0x4e0));
      local_30 = local_2c;
      if (local_2c <= iVar1 + -1) {
        iVar1 = ((iVar1 + -1) - local_2c) + 1;
        do {
          local_20 = FUN_006efcb0(*(undefined8 *)(*(longlong *)(param_1 + 0x6e0) + 0x4e0),local_30);
          local_28 = *(longlong *)(local_20 + 0x40);
          FUN_0064d000(local_28,local_50);
          FUN_0064d000(local_28,local_60);
          FUN_0064cb90(local_28,*(int *)(local_28 + 0x94) - (local_44 - local_5c));
          local_30 = local_30 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
    FUN_012cd110(param_1,local_res18,local_res20,param_5);
    (**(code **)(**(longlong **)(param_1 + 0x748) + 8))(*(longlong **)(param_1 + 0x748));
  }
  FUN_00414480(&local_res10);
  return;
}

