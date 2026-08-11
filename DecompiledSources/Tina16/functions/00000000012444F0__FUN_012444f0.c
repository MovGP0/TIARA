/* Ghidra address: 012444f0 */
/* Ghidra symbol: FUN_012444f0 */


undefined8 *
FUN_012444f0(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
            undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined1 param_10,undefined1 param_11,undefined4 param_12)

{
  undefined4 uVar1;
  undefined8 local_res20;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_28 = 0;
  local_38 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414610(param_5);
  (**(code **)(*param_2 + 0x148))(param_2,param_1,L"legend");
  (**(code **)(*param_3 + 0x98))(param_3,local_20,*param_1);
  FUN_004168e0(&local_30,local_res20);
  FUN_01242880(&local_28,local_30);
  FUN_004168b0(&local_38,local_28);
  (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,L"text",local_38);
  FUN_0043f750(&local_48,param_6);
  FUN_0043f750(&local_50,param_7);
  FUN_00416cd0(&local_40,3,local_48,&DAT_012448b0,local_50);
  (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,L"position",local_40);
  FUN_0043f750(&local_58,param_8);
  (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,L"orientation",local_58);
  (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,L"fontname",param_5);
  FUN_0043f750(&local_60,param_9);
  (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,L"fontsize",local_60);
  FUN_0043f750(&local_68,param_10);
  (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,L"bold",local_68);
  FUN_0043f750(&local_70,param_11);
  (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,L"italic",local_70);
  uVar1 = FUN_01242250(param_12);
  FUN_0043f780(&local_78,uVar1);
  (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,L"color",local_78);
  FUN_00414560(&local_78,9);
  FUN_004145c0(&local_30,2);
  FUN_0041b800(local_20);
  FUN_00414560(&local_res20,2);
  return param_1;
}

