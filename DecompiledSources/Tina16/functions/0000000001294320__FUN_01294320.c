/* Ghidra address: 01294320 */
/* Ghidra symbol: FUN_01294320 */


void FUN_01294320(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                 undefined4 param_9,int param_10)

{
  undefined4 uVar1;
  longlong *local_res8;
  longlong *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_1);
  FUN_0041b910(local_res10);
  FUN_00414610(local_res18);
  FUN_00414610(local_res20);
  (**(code **)(*local_res10 + 0x108))(local_res10,L"fontname",local_res20);
  FUN_0043f750(local_20,param_5);
  (**(code **)(*local_res10 + 0x108))(local_res10,L"fontsize",local_20[0]);
  FUN_0043f750(&local_28,param_6);
  (**(code **)(*local_res10 + 0x108))(local_res10,L"bold",local_28);
  FUN_0043f750(&local_30,param_7);
  (**(code **)(*local_res10 + 0x108))(local_res10,L"italic",local_30);
  uVar1 = FUN_01242250(param_9);
  FUN_0043f780(&local_38,uVar1);
  (**(code **)(*local_res10 + 0x108))(local_res10,L"color",local_38);
  if (param_10 == 0x1fffffff) {
    (**(code **)(*local_res10 + 0x108))(local_res10,L"fill",0);
  }
  else {
    uVar1 = FUN_01242250(param_10);
    FUN_0043f780(&local_40,uVar1);
    (**(code **)(*local_res10 + 0x108))(local_res10,L"fill",local_40);
  }
  FUN_0043f750(&local_48,param_8);
  (**(code **)(*local_res10 + 0x108))(local_res10,L"border",local_48);
  (**(code **)(*local_res8 + 0x128))(local_res8,&local_58,local_res18);
  (**(code **)(*local_res10 + 0x98))(local_res10,&local_50,local_58);
  FUN_0041b800(&local_58);
  FUN_0041b800(&local_50);
  FUN_00414560(&local_48,6);
  FUN_0041b800(&local_res8);
  FUN_0041b800(&local_res10);
  FUN_00414560(&local_res18,2);
  return;
}

