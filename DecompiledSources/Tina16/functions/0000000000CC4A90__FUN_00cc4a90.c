/* Ghidra address: 00cc4a90 */
/* Ghidra symbol: FUN_00cc4a90 */


undefined8 FUN_00cc4a90(undefined8 param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined8 local_res8;
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
  local_1c = 0;
  if (param_3 != 0) {
    local_1c = *(int *)(param_3 + -4);
  }
  if (0 < local_1c) {
    FUN_00cc4c30(local_res8,param_3);
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

