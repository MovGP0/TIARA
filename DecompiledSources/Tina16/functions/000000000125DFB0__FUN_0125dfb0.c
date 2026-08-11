/* Ghidra address: 0125dfb0 */
/* Ghidra symbol: FUN_0125dfb0 */


undefined8 *
FUN_0125dfb0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,int param_5,
            undefined8 param_6)

{
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414650(&local_res18);
  FUN_00414610(local_res20);
  FUN_00414610(param_6);
  (**(code **)(**(longlong **)(param_1 + 0x490) + 0x148))
            (*(longlong **)(param_1 + 0x490),param_2,L"parameter");
  FUN_0043f750(local_20,param_5 + *(int *)(param_1 + 0x4d0));
  (**(code **)(*(longlong *)*param_2 + 0x108))((longlong *)*param_2,&DAT_0125e1dc,local_20[0]);
  if (*(char *)(param_1 + 0x4a8) == '\0') {
    FUN_004168b0(&local_28,local_res18);
    (**(code **)(*(longlong *)*param_2 + 0x108))((longlong *)*param_2,L"name",local_28);
    (**(code **)(*(longlong *)*param_2 + 0x108))((longlong *)*param_2,L"type",param_6);
  }
  (**(code **)(*(longlong *)*param_2 + 0x108))((longlong *)*param_2,L"value",local_res20);
  (**(code **)(**(longlong **)(param_1 + 0x498) + 0x98))
            (*(longlong **)(param_1 + 0x498),&local_30,*param_2);
  FUN_0041b800(&local_30);
  FUN_00414560(&local_28,2);
  FUN_00414520(&local_res18);
  FUN_00414480(&local_res20);
  FUN_00414480(&param_6);
  return param_2;
}

