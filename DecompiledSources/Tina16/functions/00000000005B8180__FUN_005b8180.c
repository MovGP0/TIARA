/* Ghidra address: 005b8180 */
/* Ghidra symbol: FUN_005b8180 */


longlong FUN_005b8180(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00410e60(local_res8,0);
  FUN_00419260(local_res8 + 8,&DAT_005b7570,1,1);
  local_1c = FUN_005b7bb0(local_res8,param_3);
  FUN_005b8110(local_res8);
  FUN_00419260(local_res8 + 8,&DAT_005b7570,1,(longlong)local_1c);
  FUN_005b7bb0(local_res8,param_3);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

