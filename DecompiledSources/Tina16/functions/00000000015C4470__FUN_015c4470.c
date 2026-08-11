/* Ghidra address: 015c4470 */
/* Ghidra symbol: FUN_015c4470 */


undefined1 FUN_015c4470(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_40;
  int local_20;
  
  lVar2 = (**(code **)**(undefined8 **)(param_1 + 0x78))(*(undefined8 **)(param_1 + 0x78));
  lVar3 = FUN_004b6da0(*(undefined8 *)(param_1 + 0x78));
  local_40 = (longlong)*(int *)(param_1 + 0x5c);
  if (lVar2 - lVar3 < local_40) {
    local_40 = lVar2 - lVar3;
  }
  local_40._0_4_ = (int)local_40 - *(int *)(param_1 + 0x90);
  FUN_004b6dc0(*(undefined8 *)(param_1 + 0x78),param_2);
  (**(code **)(**(longlong **)(param_1 + 0x78) + 0x18))
            (*(longlong **)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x50),
             *(undefined4 *)(param_1 + 0x5c));
  local_20 = 0;
  if (-1 < (int)local_40) {
    local_40._0_4_ = (int)local_40 + 1;
    do {
      iVar1 = FUN_00442840(*(undefined8 *)(param_1 + 0x88),
                           *(longlong *)(param_1 + 0x50) + (longlong)local_20,
                           *(undefined4 *)(param_1 + 0x90));
      if (iVar1 == 0) {
        *param_3 = param_2 + local_20;
        return 1;
      }
      local_20 = local_20 + 1;
      local_40._0_4_ = (int)local_40 + -1;
    } while ((int)local_40 != 0);
  }
  return 0;
}

