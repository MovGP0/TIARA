/* Ghidra address: 004b7150 */
/* Ghidra symbol: FUN_004b7150 */


longlong FUN_004b7150(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong local_res10 [3];
  longlong local_20;
  longlong local_18;
  longlong local_10;
  
  local_res10[0] = param_2;
  FUN_00419500(param_2);
  local_10 = 0;
  local_20 = param_3;
  for (local_18 = param_4; 0x1fffffff < local_18; local_18 = local_18 + -0x20000000) {
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1,local_res10[0] + local_20,0x20000000);
    local_10 = local_10 + iVar1;
    local_20 = local_20 + 0x20000000;
  }
  if (0 < local_18) {
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1,local_res10[0] + local_20,local_18);
    local_10 = local_10 + iVar1;
  }
  FUN_00419430(local_res10,&DAT_00406578);
  return local_10;
}

