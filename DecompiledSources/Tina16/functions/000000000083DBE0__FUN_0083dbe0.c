/* Ghidra address: 0083dbe0 */
/* Ghidra symbol: FUN_0083dbe0 */


undefined8 FUN_0083dbe0(undefined8 param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
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
  FUN_00834c50(local_res8,0,param_3);
  FUN_0065bbd0(local_res8,0);
  FUN_0065bb80(local_res8,0);
  FUN_0065bce0(local_res8,0);
  FUN_006804c0(local_res8,0);
  FUN_00659460(local_res8,0);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

