/* Ghidra address: 015a6480 */
/* Ghidra symbol: FUN_015a6480 */


uint FUN_015a6480(uint param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint *local_res10;
  uint local_res18;
  uint local_18;
  uint *local_10;
  
  local_18 = ~param_1;
  local_res18 = param_3;
  for (local_res10 = param_2; (local_res18 != 0 && (((ulonglong)local_res10 & 3) != 0));
      local_res10 = (uint *)((longlong)local_res10 + 1)) {
    local_18 = *(uint *)(&DAT_01f69d70 + (ulonglong)((local_18 ^ (byte)*local_res10) & 0xff) * 4) ^
               local_18 >> 8;
    local_res18 = local_res18 - 1;
  }
  local_10 = local_res10;
  for (; 0x1f < local_res18; local_res18 = local_res18 - 0x20) {
    local_18 = local_18 ^ *local_10;
    uVar1 = *(uint *)(&DAT_01f6a970 + (ulonglong)(local_18 & 0xff) * 4) ^
            *(uint *)(&DAT_01f6a570 + (ulonglong)(local_18 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_01f6a170 + (ulonglong)(local_18 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_01f69d70 + (ulonglong)(local_18 >> 0x18) * 4) ^ local_10[1];
    uVar1 = *(uint *)(&DAT_01f6a970 + (ulonglong)(uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_01f6a570 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_01f6a170 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_01f69d70 + (ulonglong)(uVar1 >> 0x18) * 4) ^ local_10[2];
    uVar1 = *(uint *)(&DAT_01f6a970 + (ulonglong)(uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_01f6a570 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_01f6a170 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_01f69d70 + (ulonglong)(uVar1 >> 0x18) * 4) ^ local_10[3];
    uVar1 = *(uint *)(&DAT_01f6a970 + (ulonglong)(uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_01f6a570 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_01f6a170 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_01f69d70 + (ulonglong)(uVar1 >> 0x18) * 4) ^ local_10[4];
    uVar1 = *(uint *)(&DAT_01f6a970 + (ulonglong)(uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_01f6a570 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_01f6a170 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_01f69d70 + (ulonglong)(uVar1 >> 0x18) * 4) ^ local_10[5];
    uVar1 = *(uint *)(&DAT_01f6a970 + (ulonglong)(uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_01f6a570 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_01f6a170 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_01f69d70 + (ulonglong)(uVar1 >> 0x18) * 4) ^ local_10[6];
    uVar1 = *(uint *)(&DAT_01f6a970 + (ulonglong)(uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_01f6a570 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_01f6a170 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_01f69d70 + (ulonglong)(uVar1 >> 0x18) * 4) ^ local_10[7];
    local_10 = local_10 + 8;
    local_18 = *(uint *)(&DAT_01f6a970 + (ulonglong)(uVar1 & 0xff) * 4) ^
               *(uint *)(&DAT_01f6a570 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_01f6a170 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_01f69d70 + (ulonglong)(uVar1 >> 0x18) * 4);
  }
  for (; 3 < local_res18; local_res18 = local_res18 - 4) {
    local_18 = local_18 ^ *local_10;
    local_10 = local_10 + 1;
    local_18 = *(uint *)(&DAT_01f6a970 + (ulonglong)(local_18 & 0xff) * 4) ^
               *(uint *)(&DAT_01f6a570 + (ulonglong)(local_18 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_01f6a170 + (ulonglong)(local_18 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_01f69d70 + (ulonglong)(local_18 >> 0x18) * 4);
  }
  for (; local_res18 != 0; local_res18 = local_res18 - 1) {
    local_18 = *(uint *)(&DAT_01f69d70 + (ulonglong)((local_18 ^ (byte)*local_10) & 0xff) * 4) ^
               local_18 >> 8;
    local_10 = (uint *)((longlong)local_10 + 1);
  }
  return ~local_18;
}

