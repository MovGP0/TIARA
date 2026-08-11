/* Ghidra address: 00452820 */
/* Ghidra symbol: FUN_00452820 */


undefined8 FUN_00452820(undefined8 param_1,char param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 local_res8;
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
  lVar2 = FUN_0041f930();
  *(undefined8 *)(lVar2 + 0x228) = local_res8;
  thunk_FUN_0399b463(FUN_004524a0,2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

