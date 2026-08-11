/* Ghidra address: 01af2660 */
/* Ghidra symbol: FUN_01af2660 */


void FUN_01af2660(longlong param_1,byte param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 local_res18 [2];
  undefined8 local_10;
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    if (param_2 < 5) {
      if (param_2 == 4) {
        local_10 = *(undefined8 *)(lVar1 + 0x6e8);
      }
      else if (param_2 == 1) {
        local_10 = *(undefined8 *)(lVar1 + 0x700);
      }
      else if (param_2 == 2) {
        local_10 = *(undefined8 *)(lVar1 + 0x6f8);
      }
      else if (param_2 == 3) {
        local_10 = *(undefined8 *)(lVar1 + 0x6f0);
      }
    }
    else if (param_2 == 5) {
      local_10 = *(undefined8 *)(lVar1 + 0x6d8);
    }
    else if (param_2 == 6) {
      local_10 = *(undefined8 *)(lVar1 + 0x6e0);
    }
    FUN_0064de00(local_10,local_res18[0]);
  }
  FUN_00414480(local_res18);
  return;
}

