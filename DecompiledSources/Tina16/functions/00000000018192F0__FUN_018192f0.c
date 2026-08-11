/* Ghidra address: 018192f0 */
/* Ghidra symbol: FUN_018192f0 */


longlong FUN_018192f0(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_00742f60(local_res8,0,param_3);
  FUN_0064c650(local_res8,3);
  FUN_0064cbf0(local_res8,8);
  FUN_0064cc50(local_res8,8);
  FUN_00743850(local_res8,0);
  FUN_00743880(local_res8,0);
  *(uint *)(local_res8 + 0xa0) = *(uint *)(local_res8 + 0xa0) & 0xfffbffff | 0x40;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

