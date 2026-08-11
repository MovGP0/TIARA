/* Ghidra address: 005616a0 */
/* Ghidra symbol: FUN_005616a0 */


longlong FUN_005616a0(longlong param_1,char param_2,int param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  
  local_30 = auStack_58;
  local_38 = 0;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00410e60(local_res8,0);
  if (param_3 < 0) {
    FUN_00594f90();
  }
  FUN_0041b840(local_res8 + 0x18,param_4);
  if (*(longlong *)(local_res8 + 0x18) == 0) {
    FUN_0056f9e0(&local_38);
    FUN_0041b840(local_res8 + 0x18,local_38);
  }
  FUN_00560d00(local_res8,param_3);
  FUN_0041b800(&local_38);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

