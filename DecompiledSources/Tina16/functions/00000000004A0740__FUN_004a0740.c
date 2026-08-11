/* Ghidra address: 004a0740 */
/* Ghidra symbol: FUN_004a0740 */


longlong FUN_004a0740(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_30;
  uint local_24;
  longlong local_20;
  
  local_40 = auStack_68;
  local_20 = 0;
  FUN_00411e10(DAT_02011618,0xffffffff);
  iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  local_24 = 0;
  lVar1 = local_20;
  if (-1 < iVar2 + -1) {
    do {
      local_20 = lVar1;
      local_30 = *(longlong *)(param_1 + 8);
      if (*(uint *)(local_30 + 0x10) <= local_24) {
        FUN_00594f90();
      }
      local_20 = FUN_0049f000(*(undefined8 *)
                               (*(longlong *)(local_30 + 8) + (longlong)(int)local_24 * 8),param_2);
      if (local_20 != 0) {
        FUN_004a0800(0,local_40);
        return local_20;
      }
      local_24 = local_24 + 1;
      iVar2 = iVar2 + -1;
      local_20 = 0;
      lVar1 = 0;
    } while (iVar2 != 0);
  }
  FUN_00412130(DAT_02011618);
  return local_20;
}

