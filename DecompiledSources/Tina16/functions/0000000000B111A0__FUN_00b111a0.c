/* Ghidra address: 00b111a0 */
/* Ghidra symbol: FUN_00b111a0 */


void FUN_00b111a0(longlong param_1,byte param_2)

{
  undefined1 local_res10;
  
  local_res10 = param_2;
  if (((param_2 & 1) == 0) && ((*(byte *)(param_1 + 0x608) & 1) != 0)) {
    local_res10 = param_2 & 0xfd;
  }
  if (((local_res10 & 2) != 0) && ((*(byte *)(param_1 + 0x608) & 2) == 0)) {
    local_res10 = local_res10 | 1;
  }
  if (((local_res10 & 1) == 0) && (*(int *)(param_1 + 0x4a8) == 0)) {
    FUN_008483b0(param_1,1);
  }
  *(byte *)(param_1 + 0x608) = local_res10;
  return;
}

