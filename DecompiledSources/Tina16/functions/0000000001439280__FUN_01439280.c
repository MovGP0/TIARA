/* Ghidra address: 01439280 */
/* Ghidra symbol: FUN_01439280 */


longlong FUN_01439280(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5)

{
  longlong local_res8;
  undefined8 local_res20;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res20 = param_4;
  FUN_00414610(param_4);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  FUN_00414ad0(local_res8 + 0x6e0,local_res20);
  *(undefined8 *)(local_res8 + 0x6f8) = param_5;
  FUN_007fc180(local_res8,0,param_3);
  FUN_00414480(&local_res20);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

