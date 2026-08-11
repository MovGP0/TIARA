/* Ghidra address: 010e4140 */
/* Ghidra symbol: FUN_010e4140 */


void FUN_010e4140(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 local_res10 [3];
  code *local_18;
  longlong local_10;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (*(longlong *)(param_1 + 0x7e0) != 0) {
    local_18 = FUN_010e4410;
    local_10 = param_1;
    FUN_00f834f0(&local_18);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7e0),1);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x7e0),local_res10[0]);
    if (param_3 != '\0') {
      local_18 = FUN_010e4410;
      local_10 = param_1;
      FUN_00f833f0(&local_18,5000);
    }
  }
  FUN_00414480(local_res10);
  return;
}

