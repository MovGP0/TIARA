/* Ghidra address: 01619680 */
/* Ghidra symbol: FUN_01619680 */


longlong FUN_01619680(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5)

{
  longlong local_res8;
  undefined8 local_res20;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414610(param_5);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  *(undefined8 *)(local_res8 + 8) = param_3;
  FUN_00414ad0(local_res8 + 0x10,local_res20);
  FUN_00414ad0(local_res8 + 0x18,param_5);
  *(undefined4 *)(local_res8 + 0x20) = 0;
  FUN_00414560(&local_res20,2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

