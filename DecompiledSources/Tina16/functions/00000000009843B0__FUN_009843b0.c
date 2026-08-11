/* Ghidra address: 009843b0 */
/* Ghidra symbol: FUN_009843b0 */


longlong * FUN_009843b0(longlong *param_1,char param_2,undefined8 param_3)

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
  FUN_00982c30(local_res8,0,param_3);
  (**(code **)(*local_res8 + 0x98))(local_res8);
  *(undefined4 *)(local_res8 + 0x11) = 0x1000;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

