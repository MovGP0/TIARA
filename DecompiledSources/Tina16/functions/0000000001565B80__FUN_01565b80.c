/* Ghidra address: 01565b80 */
/* Ghidra symbol: FUN_01565b80 */


longlong FUN_01565b80(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined1 param_5)

{
  longlong lVar1;
  longlong local_res8;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_58;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  *(undefined8 *)(local_res8 + 8) = local_res20;
  FUN_00414ad0(local_res8 + 0x10,local_res18);
  local_1c = 0;
  do {
    lVar1 = (longlong)local_1c;
    FUN_00414480(local_res8 + 0x28 + lVar1 * 8);
    FUN_00414480(local_res8 + 0x18 + lVar1 * 8);
    local_1c = local_1c + 1;
  } while (local_1c != 2);
  *(undefined1 *)(local_res8 + 0x38) = param_5;
  FUN_00414480(&local_res18);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

