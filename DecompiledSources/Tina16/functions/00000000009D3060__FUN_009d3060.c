/* Ghidra address: 009d3060 */
/* Ghidra symbol: FUN_009d3060 */


longlong FUN_009d3060(longlong param_1)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  uint local_24;
  longlong local_20;
  
  local_30 = auStack_58;
  (**(code **)*DAT_02012ad8)(DAT_02012ad8);
  iVar1 = *(int *)(DAT_02012ad0 + 0x10);
  local_24 = 0;
  if (-1 < iVar1 + -1) {
    do {
      if (*(uint *)(DAT_02012ad0 + 0x10) <= local_24) {
        FUN_00594f90();
      }
      local_20 = *(longlong *)(*(longlong *)(DAT_02012ad0 + 8) + (longlong)(int)local_24 * 8);
      if (*(longlong *)(local_20 + 0x18) == param_1) {
        FUN_009d3120(0,local_30);
        return local_20;
      }
      local_24 = local_24 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  local_20 = 0;
  (**(code **)(*DAT_02012ad8 + 8))(DAT_02012ad8);
  return local_20;
}

