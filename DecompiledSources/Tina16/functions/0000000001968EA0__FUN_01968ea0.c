/* Ghidra address: 01968ea0 */
/* Ghidra symbol: FUN_01968ea0 */


longlong FUN_01968ea0(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_01967910(local_res8,0,param_3);
  lVar2 = FUN_0194e940(&PTR_FUN_0191e2f0,1,0);
  *(longlong *)(local_res8 + 0x288) = lVar2;
  *(undefined1 *)(lVar2 + 0x1b5) = 2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

