/* Ghidra address: 01bff160 */
/* Ghidra symbol: FUN_01bff160 */


longlong * FUN_01bff160(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
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
  FUN_004d22d0(local_res8,0,param_3);
  lVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  local_res8[0xf] = lVar2;
  (**(code **)(*local_res8 + 0x98))(local_res8);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

