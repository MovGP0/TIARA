/* Ghidra address: 015a74d0 */
/* Ghidra symbol: FUN_015a74d0 */


uint FUN_015a74d0(uint *param_1,uint param_2)

{
  uint *local_res8;
  uint local_res10;
  uint local_18;
  
  local_18 = 0;
  local_res8 = param_1;
  for (local_res10 = param_2; local_res10 != 0; local_res10 = local_res10 >> 1) {
    if ((local_res10 & 1) != 0) {
      local_18 = local_18 ^ *local_res8;
    }
    local_res8 = local_res8 + 1;
  }
  return local_18;
}

