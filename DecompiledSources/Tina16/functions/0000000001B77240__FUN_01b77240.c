/* Ghidra address: 01b77240 */
/* Ghidra symbol: FUN_01b77240 */


longlong FUN_01b77240(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5)

{
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  FUN_00414610(param_5);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  FUN_007fc180(local_res8,0,param_3);
  *(undefined8 *)(local_res8 + 0x6d8) = param_4;
  FUN_00414ad0(local_res8 + 0x6f8,param_5);
  FUN_00414480(&param_5);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

