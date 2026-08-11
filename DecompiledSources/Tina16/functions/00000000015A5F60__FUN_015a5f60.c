/* Ghidra address: 015a5f60 */
/* Ghidra symbol: FUN_015a5f60 */


uint FUN_015a5f60(uint param_1,uint param_2,longlong param_3)

{
  undefined4 local_res18;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_3 < 0) {
    local_14 = 0xffffffff;
  }
  else {
    local_res18 = (int)(param_3 % 0xfff1);
    local_14 = (param_1 & 0xffff) + 0xfff0 + (param_2 & 0xffff);
    local_18 = (local_res18 * (param_1 & 0xffff)) % 0xfff1 +
               (((param_1 >> 0x10) + 0xfff1 + (param_2 >> 0x10)) - local_res18);
    if (0xfff0 < local_14) {
      local_14 = local_14 - 0xfff1;
    }
    if (0xfff0 < local_14) {
      local_14 = local_14 - 0xfff1;
    }
    if (0x1ffe1 < local_18) {
      local_18 = local_18 - 0x1ffe2;
    }
    if (0xfff0 < local_18) {
      local_18 = local_18 - 0xfff1;
    }
    local_14 = local_14 | local_18 << 0x10;
  }
  return local_14;
}

