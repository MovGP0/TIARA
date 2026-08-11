/* Ghidra address: 01408a70 */
/* Ghidra symbol: FUN_01408a70 */


longlong FUN_01408a70(longlong param_1,char param_2,undefined8 param_3)

{
  longlong local_res8;
  undefined8 local_res18 [2];
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  FUN_00410e60(local_res8,0);
  FUN_00414ad0(local_res8 + 8,local_res18[0]);
  FUN_00414480(local_res18);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

