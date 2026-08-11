/* Ghidra address: 01417aa0 */
/* Ghidra symbol: FUN_01417aa0 */


longlong FUN_01417aa0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined4 param_5,undefined8 param_6)

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
  FUN_007fc180(local_res8,0,param_3);
  FUN_00414ad0(local_res8 + 4000,local_res20);
  *(undefined4 *)(local_res8 + 0xfc0) = param_5;
  *(undefined8 *)(local_res8 + 0xfb8) = param_6;
  FUN_00414480(&local_res20);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

