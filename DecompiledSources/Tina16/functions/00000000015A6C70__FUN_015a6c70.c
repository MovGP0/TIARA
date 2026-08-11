/* Ghidra address: 015a6c70 */
/* Ghidra symbol: FUN_015a6c70 */


int FUN_015a6c70(uint param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  byte *local_res10;
  uint local_res18;
  uint local_18;
  uint *local_10;
  
  local_18 = ~((param_1 >> 0x18) + (param_1 >> 8 & 0xff00) + (param_1 & 0xff00) * 0x100 +
              param_1 * 0x1000000);
  local_res18 = param_3;
  for (local_res10 = param_2; (local_res18 != 0 && (((ulonglong)local_res10 & 3) != 0));
      local_res10 = local_res10 + 1) {
    local_18 = *(uint *)(&DAT_01f6ad70 + (ulonglong)(local_18 >> 0x18 ^ (uint)*local_res10) * 4) ^
               local_18 << 8;
    local_res18 = local_res18 - 1;
  }
  local_10 = (uint *)(local_res10 + -4);
  for (; 0x1f < local_res18; local_res18 = local_res18 - 0x20) {
    local_18 = local_18 ^ local_10[1];
    uVar1 = *(uint *)(&DAT_01f6ad70 + (ulonglong)(local_18 & 0xff) * 4) ^
            *(uint *)(&DAT_01f6b170 + (ulonglong)(local_18 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_01f6b570 + (ulonglong)(local_18 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_01f6b970 + (ulonglong)(local_18 >> 0x18) * 4) ^ local_10[2];
    uVar1 = *(uint *)(&DAT_01f6ad70 + (ulonglong)(uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_01f6b170 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_01f6b570 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_01f6b970 + (ulonglong)(uVar1 >> 0x18) * 4) ^ local_10[3];
    uVar1 = *(uint *)(&DAT_01f6ad70 + (ulonglong)(uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_01f6b170 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_01f6b570 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_01f6b970 + (ulonglong)(uVar1 >> 0x18) * 4) ^ local_10[4];
    uVar1 = *(uint *)(&DAT_01f6ad70 + (ulonglong)(uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_01f6b170 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_01f6b570 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_01f6b970 + (ulonglong)(uVar1 >> 0x18) * 4) ^ local_10[5];
    uVar1 = *(uint *)(&DAT_01f6ad70 + (ulonglong)(uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_01f6b170 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_01f6b570 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_01f6b970 + (ulonglong)(uVar1 >> 0x18) * 4) ^ local_10[6];
    uVar1 = *(uint *)(&DAT_01f6ad70 + (ulonglong)(uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_01f6b170 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_01f6b570 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_01f6b970 + (ulonglong)(uVar1 >> 0x18) * 4) ^ local_10[7];
    local_10 = local_10 + 8;
    uVar1 = *(uint *)(&DAT_01f6ad70 + (ulonglong)(uVar1 & 0xff) * 4) ^
            *(uint *)(&DAT_01f6b170 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_01f6b570 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_01f6b970 + (ulonglong)(uVar1 >> 0x18) * 4) ^ *local_10;
    local_18 = *(uint *)(&DAT_01f6ad70 + (ulonglong)(uVar1 & 0xff) * 4) ^
               *(uint *)(&DAT_01f6b170 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_01f6b570 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_01f6b970 + (ulonglong)(uVar1 >> 0x18) * 4);
  }
  for (; 3 < local_res18; local_res18 = local_res18 - 4) {
    local_10 = local_10 + 1;
    local_18 = local_18 ^ *local_10;
    local_18 = *(uint *)(&DAT_01f6ad70 + (ulonglong)(local_18 & 0xff) * 4) ^
               *(uint *)(&DAT_01f6b170 + (ulonglong)(local_18 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_01f6b570 + (ulonglong)(local_18 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_01f6b970 + (ulonglong)(local_18 >> 0x18) * 4);
  }
  local_10 = local_10 + 1;
  for (; local_res18 != 0; local_res18 = local_res18 - 1) {
    local_18 = *(uint *)(&DAT_01f6ad70 + (ulonglong)(local_18 >> 0x18 ^ (uint)(byte)*local_10) * 4)
               ^ local_18 << 8;
    local_10 = (uint *)((longlong)local_10 + 1);
  }
  local_18 = ~local_18;
  return (local_18 >> 0x18) + (local_18 >> 8 & 0xff00) + (local_18 & 0xff00) * 0x100 +
         local_18 * 0x1000000;
}

