/* Ghidra address: 00873550 */
/* Ghidra symbol: FUN_00873550 */


longlong * FUN_00873550(longlong *param_1,char param_2)

{
  undefined1 *puVar1;
  longlong *local_res8;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  local_38 = 0;
  (**(code **)(*local_res8 + 0x48))(local_res8,0,0,0);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

