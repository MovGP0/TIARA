/* Ghidra address: 015c2360 */
/* Ghidra symbol: FUN_015c2360 */


void FUN_015c2360(longlong param_1)

{
  int iVar1;
  longlong local_48;
  longlong local_38;
  int local_20;
  int local_1c;
  
  iVar1 = FUN_015c2df0();
  local_1c = 0;
  if (-1 < iVar1 + -1) {
    do {
      local_38 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x46 + (longlong)local_1c * 0x90);
      if (local_38 != 0) {
        local_38 = *(longlong *)(local_38 + -8);
      }
      if (local_38 != 0) {
        local_48 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x46 + (longlong)local_1c * 0x90);
        if (local_48 != 0) {
          local_48 = *(longlong *)(local_48 + -8);
        }
        local_20 = 0;
        if (-1 < (int)local_48 + -1) {
          do {
            FUN_004095f0(*(undefined8 *)
                          (*(longlong *)
                            (*(longlong *)(param_1 + 8) + 0x46 + (longlong)local_1c * 0x90) + 4 +
                          (longlong)local_20 * 0xc));
            *(undefined8 *)
             (*(longlong *)(*(longlong *)(param_1 + 8) + 0x46 + (longlong)local_1c * 0x90) + 4 +
             (longlong)local_20 * 0xc) = 0;
            local_20 = local_20 + 1;
            local_48._0_4_ = (int)local_48 + -1;
          } while ((int)local_48 != 0);
        }
        FUN_00419430(*(longlong *)(param_1 + 8) + 0x46 + (longlong)local_1c * 0x90,&DAT_015b93d0);
      }
      local_1c = local_1c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x90))(*(longlong **)(param_1 + 0x10));
  return;
}

