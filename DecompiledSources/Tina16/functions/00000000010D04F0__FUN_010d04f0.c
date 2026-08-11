/* Ghidra address: 010d04f0 */
/* Ghidra symbol: FUN_010d04f0 */


undefined8
FUN_010d04f0(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
            undefined8 param_5)

{
  longlong *local_res18;
  undefined8 local_res20;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong *local_20 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  local_20[0] = (longlong *)0x0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_3);
  FUN_00414610(local_res20);
  FUN_00414610(param_5);
  FUN_00414ad0(param_2,param_5);
  if (local_res18 != (longlong *)0x0) {
    FUN_00416cd0(&local_38,3,L"parameter[@idx=\"",local_res20,&DAT_010d06c8);
    (**(code **)(*local_res18 + 0xd8))(local_res18,local_30,local_38);
    FUN_0041b890(local_20,local_30[0],&DAT_010d06ce);
    if (local_20[0] != (longlong *)0x0) {
      (**(code **)(*local_20[0] + 0x100))(local_20[0],param_2,L"value");
    }
  }
  FUN_00414480(&local_38);
  FUN_0041b800(local_30);
  FUN_0041b800(local_20);
  FUN_0041b800(&local_res18);
  FUN_00414560(&local_res20,2);
  return param_2;
}

