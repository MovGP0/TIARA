/* Ghidra address: 0114ee90 */
/* Ghidra symbol: FUN_0114ee90 */


longlong FUN_0114ee90(longlong param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
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
  *(longlong *)(local_res8 + 0xa0) = param_3;
  FUN_01150390(local_res8,*(undefined8 *)(param_3 + 0xb0));
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

