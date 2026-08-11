/* Ghidra address: 0060cbe0 */
/* Ghidra symbol: FUN_0060cbe0 */


longlong FUN_0060cbe0(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_20;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00601d70(local_res8,0);
  *(undefined1 *)(local_res8 + 0x39) = 1;
  local_20 = FUN_00410e60(&PTR_FUN_005f9f10,1);
  *(longlong *)(local_res8 + 0x48) = local_20;
  *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

