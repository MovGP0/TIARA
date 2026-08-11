/* Ghidra address: 00badb60 */
/* Ghidra symbol: FUN_00badb60 */


longlong FUN_00badb60(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  lVar2 = FUN_00bb5090(&PTR_FUN_00bada90,1);
  *(longlong *)(local_res8 + 0x18) = lVar2;
  *(longlong *)(lVar2 + 0x50) = local_res8;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

