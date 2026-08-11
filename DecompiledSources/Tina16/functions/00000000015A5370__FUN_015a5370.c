/* Ghidra address: 015a5370 */
/* Ghidra symbol: FUN_015a5370 */


uint FUN_015a5370(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_res8;
  undefined4 local_res10;
  undefined4 local_18;
  
  local_18 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  uVar1 = local_18;
  do {
    local_18 = uVar1;
    uVar2 = local_res8 & 1;
    local_res8 = local_res8 >> 1;
    local_res10 = local_res10 + -1;
    uVar1 = (local_18 | uVar2) << 1;
  } while (0 < local_res10);
  return local_18 & 0x7fffffff | uVar2;
}

