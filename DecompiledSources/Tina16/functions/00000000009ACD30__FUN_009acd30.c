/* Ghidra address: 009acd30 */
/* Ghidra symbol: FUN_009acd30 */


longlong FUN_009acd30(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_00410e60(local_res8,0);
  *(undefined **)(local_res8 + 0x18) = &DAT_009bb010;
  *(longlong *)(local_res8 + 0x20) = local_res8;
  FUN_009acaf0(local_res8);
  FUN_009acb80(local_res8,param_3);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

