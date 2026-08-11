/* Ghidra address: 01243600 */
/* Ghidra symbol: FUN_01243600 */


undefined8 *
FUN_01243600(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
            undefined8 param_5,undefined4 param_6,undefined4 param_7,int param_8)

{
  undefined4 uVar1;
  undefined8 local_res20;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414610(param_5);
  (**(code **)(*param_2 + 0x148))(param_2,param_1,L"shape");
  (**(code **)(*param_3 + 0x98))(param_3,local_20,*param_1);
  (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,L"type",local_res20);
  (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,L"points",param_5);
  uVar1 = FUN_00b905e0(param_6,1);
  FUN_0043f750(&local_28,uVar1);
  (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,L"width",local_28);
  uVar1 = FUN_01242250(param_7);
  FUN_0043f780(&local_30,uVar1);
  (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,L"color",local_30);
  if (param_8 != -2) {
    uVar1 = FUN_01242250(param_8);
    FUN_0043f780(&local_38,uVar1);
    (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,L"fill",local_38);
  }
  FUN_00414560(&local_38,3);
  FUN_0041b800(local_20);
  FUN_00414560(&local_res20,2);
  return param_1;
}

