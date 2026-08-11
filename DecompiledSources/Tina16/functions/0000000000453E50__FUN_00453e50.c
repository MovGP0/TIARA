/* Ghidra address: 00453e50 */
/* Ghidra symbol: FUN_00453e50 */


undefined8
FUN_00453e50(undefined8 param_1,char param_2,undefined8 param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined1 *puVar1;
  undefined8 local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20 [2];
  
  local_30 = auStack_58;
  local_20[0] = 0;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00414480(local_20);
  FUN_00416dc0(local_20,param_3,param_4 + 1,param_5);
  FUN_00453d80(local_res8,0,local_20[0],param_6);
  FUN_00414480(local_20);
  FUN_00414480(local_20);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

