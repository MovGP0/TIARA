/* Ghidra address: 01391020 */
/* Ghidra symbol: FUN_01391020 */


void FUN_01391020(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_30 [2];
  longlong *local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = (longlong *)0x0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_2);
  FUN_00414610(local_res18);
  FUN_00414610(local_res20);
  if (local_res10 != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x2c8) + 0x148))
              (*(longlong **)(param_1 + 0x2c8),local_20,L"result");
    (**(code **)(*local_res10 + 0x98))(local_res10,local_30,local_20[0]);
    (**(code **)(*local_20[0] + 0x108))(local_20[0],L"name",local_res18);
    (**(code **)(*local_20[0] + 0x108))(local_20[0],L"value",local_res20);
  }
  FUN_0041b800(local_30);
  FUN_0041b800(local_20);
  FUN_0041b800(&local_res10);
  FUN_00414560(&local_res18,2);
  return;
}

