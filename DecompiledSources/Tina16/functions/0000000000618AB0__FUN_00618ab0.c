/* Ghidra address: 00618ab0 */
/* Ghidra symbol: FUN_00618ab0 */


undefined8 FUN_00618ab0(undefined8 param_1,char param_2,undefined1 param_3)

{
  undefined1 *puVar1;
  undefined8 local_res8;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined1 *local_20;
  
  local_20 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  local_48 = 0;
  local_40 = 0;
  local_38 = param_3;
  FUN_00618980(local_res8,0,0,1);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

