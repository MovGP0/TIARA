/* Ghidra address: 004a0820 */
/* Ghidra symbol: FUN_004a0820 */


void FUN_004a0820(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  longlong local_48;
  uint local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_50 = auStack_78;
  local_38 = *param_2;
  uStack_30 = param_2[1];
  FUN_00411e10(DAT_02011618,0xffffffff);
  iVar1 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  local_3c = 0;
  if (-1 < iVar1 + -1) {
    do {
      local_48 = *(longlong *)(param_1 + 8);
      if (*(uint *)(local_48 + 0x10) <= local_3c) {
        FUN_00594f90();
      }
      FUN_0049f060(*(undefined8 *)(*(longlong *)(local_48 + 8) + (longlong)(int)local_3c * 8),
                   &local_38);
      local_3c = local_3c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00412130(DAT_02011618);
  return;
}

