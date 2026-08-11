/* Ghidra address: 01979e40 */
/* Ghidra symbol: FUN_01979e40 */


longlong * FUN_01979e40(longlong *param_1,char param_2)

{
  undefined1 *puVar1;
  longlong *local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  *(undefined1 *)(local_res8 + 0x1a) = 1;
  (**(code **)(*local_res8 + 0x78))(local_res8,0,0);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

