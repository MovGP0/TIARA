/* Ghidra address: 017c3f60 */
/* Ghidra symbol: FUN_017c3f60 */


void FUN_017c3f60(undefined8 param_1,longlong *param_2)

{
  undefined8 local_res8 [4];
  longlong local_50;
  undefined1 local_48 [56];
  
  local_50 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_00417580(local_48,&DAT_017bfca8);
  (**(code **)(*param_2 + 0x90))(param_2);
  FUN_017c3ea0(&local_50,local_res8[0],local_48);
  while (local_50 != 0) {
    (**(code **)(*param_2 + 0x78))(param_2,local_50);
    FUN_017c39e0(&local_50,local_48);
  }
  FUN_00414480(&local_50);
  FUN_00417740(local_48,&DAT_017bfca8);
  FUN_00414480(local_res8);
  return;
}

