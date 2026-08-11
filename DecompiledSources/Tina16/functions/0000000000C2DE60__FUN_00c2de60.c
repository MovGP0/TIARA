/* Ghidra address: 00c2de60 */
/* Ghidra symbol: FUN_00c2de60 */


longlong FUN_00c2de60(longlong param_1,char param_2,longlong param_3)

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
  FUN_00c1a6d0(local_res8,0,*(undefined8 *)(param_3 + 8));
  *(longlong *)(local_res8 + 0x10) = param_3;
  FUN_00c1aa20(*(undefined8 *)(param_3 + 0x58),local_res8);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

