/* Ghidra address: 01245720 */
/* Ghidra symbol: FUN_01245720 */


longlong * FUN_01245720(longlong *param_1,longlong *param_2)

{
  longlong *local_res10 [3];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_40 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_0041b910(param_2);
  (**(code **)(*local_res10[0] + 0x100))(local_res10[0],local_20,L"orientation");
  FUN_00416cd0(&local_38,3,L"image3d[@dir=\"",local_20[0],&DAT_01245900);
  (**(code **)(*local_res10[0] + 0xd8))(local_res10[0],local_30,local_38);
  FUN_0041b890(param_1,local_30[0],&DAT_01245906);
  if (*param_1 == 0) {
    (**(code **)(*local_res10[0] + 0xd8))(local_res10[0],&local_40,L"image3d[@dir=\"0\"]");
    FUN_0041b890(param_1,local_40,&DAT_01245906);
  }
  FUN_0041b800(&local_40);
  FUN_00414480(&local_38);
  FUN_0041b800(local_30);
  FUN_00414480(local_20);
  FUN_0041b800(local_res10);
  return param_1;
}

