/* Ghidra address: 015a7590 */
/* Ghidra symbol: FUN_015a7590 */


uint FUN_015a7590(uint param_1,uint param_2,ulonglong param_3)

{
  uint local_res8;
  ulonglong local_res18;
  int local_118;
  int local_114;
  int local_108 [32];
  undefined1 local_88 [136];
  
  if (0 < (longlong)param_3) {
    local_108[0] = -0x12477ce0;
    local_114 = 1;
    for (local_118 = 1; local_118 < 0x20; local_118 = local_118 + 1) {
      local_108[local_118] = local_114;
      local_114 = local_114 << 1;
    }
    FUN_015a7530(local_88,local_108);
    FUN_015a7530(local_108,local_88);
    local_res8 = param_1;
    local_res18 = param_3;
    do {
      FUN_015a7530(local_88,local_108);
      if ((local_res18 & 1) != 0) {
        local_res8 = FUN_015a74d0(local_88,local_res8);
      }
      if ((longlong)local_res18 >> 1 == 0) break;
      FUN_015a7530(local_108,local_88);
      if (((longlong)local_res18 >> 1 & 1U) != 0) {
        local_res8 = FUN_015a74d0(local_108,local_res8);
      }
      local_res18 = (longlong)local_res18 >> 2;
    } while (local_res18 != 0);
    param_1 = local_res8 ^ param_2;
  }
  return param_1;
}

