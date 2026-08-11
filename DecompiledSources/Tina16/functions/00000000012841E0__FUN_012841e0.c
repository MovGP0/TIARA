/* Ghidra address: 012841e0 */
/* Ghidra symbol: FUN_012841e0 */


undefined8 FUN_012841e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong *local_20 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  local_20[0] = (longlong *)0x0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00414480(param_2);
  FUN_00416cd0(&local_38,3,L"parameter[@idx=\"",local_res18[0],&DAT_01284358);
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0xd8))
            (*(longlong **)(param_1 + 0x88),local_30,local_38);
  FUN_0041b890(local_20,local_30[0],&DAT_0128435e);
  if (local_20[0] != (longlong *)0x0) {
    (**(code **)(*local_20[0] + 0x100))(local_20[0],param_2,L"value");
  }
  FUN_00414480(&local_38);
  FUN_0041b800(local_30);
  FUN_0041b800(local_20);
  FUN_00414480(local_res18);
  return param_2;
}

