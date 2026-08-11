/* Ghidra address: 016d66b0 */
/* Ghidra symbol: FUN_016d66b0 */


longlong FUN_016d66b0(longlong param_1,char param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar2 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_20;
  }
  local_20 = puVar2;
  *(longlong *)(local_res8 + 8) = param_3;
  lVar1 = *(longlong *)(param_3 + 0x48);
  *(longlong *)(lVar1 + 0x598) = local_res8;
  *(code **)(lVar1 + 0x590) = FUN_016d6620;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

