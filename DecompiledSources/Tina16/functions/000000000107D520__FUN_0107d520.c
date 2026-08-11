/* Ghidra address: 0107d520 */
/* Ghidra symbol: FUN_0107d520 */


void FUN_0107d520(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res20);
  if (param_3 == 0) {
    FUN_00414b50(local_20,L"c1.bat");
  }
  else if (param_3 == 1) {
    FUN_00414b50(local_20,L"c2.bat");
  }
  else {
    FUN_00414b50(local_20,L"c3.bat");
  }
  FUN_0107cbc0(param_1,local_30,local_res10[0],param_3,local_res20);
  FUN_00414ad0(param_1 + 0xb00,local_30[0]);
  (**(code **)(**(longlong **)(param_1 + 0xb68) + 0x90))(*(longlong **)(param_1 + 0xb68));
  (**(code **)(**(longlong **)(param_1 + 0xb68) + 0x78))
            (*(longlong **)(param_1 + 0xb68),*(undefined8 *)(param_1 + 0xb00));
  FUN_00416cd0(&local_38,3,*(undefined8 *)(param_1 + 0xb40),&LAB_0107d794,local_20[0]);
  (**(code **)(**(longlong **)(param_1 + 0xb68) + 0x100))(*(longlong **)(param_1 + 0xb68),local_38);
  (**(code **)(**(longlong **)(param_1 + 0xb60) + 0x90))(*(longlong **)(param_1 + 0xb60));
  FUN_01056150(*(undefined8 *)(param_1 + 0xb60),*(undefined8 *)(param_1 + 0xb00),
               *(undefined8 *)(param_1 + 0xb40),1);
  FUN_0107b180(param_1);
  FUN_00414560(&local_38,2);
  FUN_00414480(local_20);
  FUN_00414480(local_res10);
  FUN_00414480(&local_res20);
  return;
}

