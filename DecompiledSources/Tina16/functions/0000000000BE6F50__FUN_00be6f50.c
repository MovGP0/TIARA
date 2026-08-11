/* Ghidra address: 00be6f50 */
/* Ghidra symbol: FUN_00be6f50 */


undefined8 FUN_00be6f50(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_20;
  int iStack_1c;
  
  iVar1 = FUN_00be7fe0(param_1);
  if (iVar1 < param_2[1]) {
    local_20 = *param_2;
    iVar1 = FUN_00be7fe0(param_1);
    iStack_1c = (param_2[1] - iVar1) + *(int *)(param_1 + 0x30);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x30) + -2;
    if (-1 < iVar1) {
      do {
        iVar3 = param_2[1];
        iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 4);
        if (iVar2 < iVar3) {
          iStack_1c = iVar1 + 2;
          if (iVar3 == *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)(iVar1 + 1) * 4)) {
            local_20 = *(ushort *)(param_1 + 0x42) + 1;
            if (*param_2 < local_20) {
              local_20 = *param_2;
            }
          }
          else {
            local_20 = *(ushort *)(*(longlong *)(param_1 + 0x20) + (longlong)(iVar3 + -1) * 2) + 1;
            if (*param_2 < local_20) {
              local_20 = *param_2;
            }
          }
          if (iVar2 <= iVar3 + -2) {
            iVar1 = ((iVar3 + -2) - iVar2) + 1;
            do {
              local_20 = local_20 +
                         (uint)*(ushort *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar2 * 2);
              iVar2 = iVar2 + 1;
              iVar1 = iVar1 + -1;
            } while (iVar1 != 0);
          }
          goto LAB_00be709b;
        }
        iVar1 = iVar1 + -1;
      } while (iVar1 != -1);
    }
    iStack_1c = 1;
    iVar1 = param_2[1];
    if (iVar1 == **(int **)(param_1 + 0x18)) {
      local_20 = *(ushort *)(param_1 + 0x42) + 1;
      if (*param_2 < local_20) {
        local_20 = *param_2;
      }
    }
    else {
      local_20 = *(ushort *)(*(longlong *)(param_1 + 0x20) + (longlong)(iVar1 + -1) * 2) + 1;
      if (*param_2 < local_20) {
        local_20 = *param_2;
      }
    }
    iVar3 = 0;
    if (-1 < iVar1 + -2) {
      iVar1 = iVar1 + -1;
      do {
        local_20 = local_20 + (uint)*(ushort *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar3 * 2)
        ;
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
LAB_00be709b:
  return CONCAT44(iStack_1c,local_20);
}

