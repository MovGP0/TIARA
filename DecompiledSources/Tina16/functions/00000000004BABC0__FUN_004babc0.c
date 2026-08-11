/* Ghidra address: 004babc0 */
/* Ghidra symbol: FUN_004babc0 */


undefined8
FUN_004babc0(undefined8 param_1,char param_2,undefined8 param_3,int param_4,undefined8 param_5)

{
  undefined1 *puVar1;
  undefined8 local_res8;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00410e60(local_res8,0);
  local_38 = 1;
  FUN_004bad70(local_res8,param_3,(longlong)param_4,param_5);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

