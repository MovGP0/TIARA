/* Ghidra address: 015c2ad0 */
/* Ghidra symbol: FUN_015c2ad0 */


void FUN_015c2ad0(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong local_50;
  longlong local_40;
  int local_20;
  int local_1c;
  
  iVar2 = *(int *)(param_1 + 0x24);
  if (*(int *)(param_1 + 0x24) < param_2) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) * 2;
    if (*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x18)) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x20);
    }
    if (param_2 < *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x18)) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x18);
    }
    else {
      *(int *)(param_1 + 0x24) = param_2;
    }
    FUN_00419260(param_1 + 8,&DAT_015ba0e8,1,(longlong)*(int *)(param_1 + 0x24));
    iVar1 = *(int *)(param_1 + 0x24) + -1;
    if (iVar2 <= iVar1) {
      iVar1 = (iVar1 - iVar2) + 1;
      local_1c = iVar2;
      do {
        FUN_00419430(*(longlong *)(param_1 + 8) + 0x46 + (longlong)local_1c * 0x90,&DAT_015b93d0);
        FUN_004144d0(*(longlong *)(param_1 + 8) + 0x6d + (longlong)local_1c * 0x90);
        *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x6c + (longlong)local_1c * 0x90) = 0;
        *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x75 + (longlong)local_1c * 0x90) = 0;
        local_1c = local_1c + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  else if (param_2 == 0) {
    if (-1 < iVar2 + -1) {
      local_1c = 0;
      do {
        local_40 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x46 + (longlong)local_1c * 0x90);
        if (local_40 != 0) {
          local_40 = *(longlong *)(local_40 + -8);
        }
        if (local_40 != 0) {
          local_50 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x46 + (longlong)local_1c * 0x90);
          if (local_50 != 0) {
            local_50 = *(longlong *)(local_50 + -8);
          }
          local_20 = 0;
          if (-1 < (int)local_50 + -1) {
            do {
              FUN_004095f0(*(undefined8 *)
                            (*(longlong *)
                              (*(longlong *)(param_1 + 8) + 0x46 + (longlong)local_1c * 0x90) + 4 +
                            (longlong)local_20 * 0xc));
              local_20 = local_20 + 1;
              local_50._0_4_ = (int)local_50 + -1;
            } while ((int)local_50 != 0);
          }
          FUN_00419430(*(longlong *)(param_1 + 8) + 0x46 + (longlong)local_1c * 0x90,&DAT_015b93d0);
        }
        local_1c = local_1c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00419260(param_1 + 8,&DAT_015ba0e8,1,0);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  *(int *)(param_1 + 0x28) = param_2;
  return;
}

