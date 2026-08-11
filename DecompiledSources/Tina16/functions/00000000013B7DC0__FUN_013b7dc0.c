/* Ghidra address: 013b7dc0 */
/* Ghidra symbol: FUN_013b7dc0 */


void FUN_013b7dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20 [2];
  
  local_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_70 = 0;
  local_60 = 0;
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_40 = 0;
  local_20[0] = (longlong *)0x0;
  local_28 = (longlong *)0x0;
  local_30 = (longlong *)0x0;
  local_38 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  FUN_00414610(local_res18);
  FUN_00bac3d0(local_20);
  (**(code **)(*local_20[0] + 0x118))(local_20[0],0);
  (**(code **)(*local_20[0] + 0x148))(local_20[0],&local_40,L"aiassistant");
  (**(code **)(*local_20[0] + 0x108))(local_20[0],local_40);
  (**(code **)(*local_20[0] + 0x100))(local_20[0],&local_38);
  FUN_0041b840(&local_30,local_38);
  (**(code **)(*local_20[0] + 0x148))(local_20[0],&local_28,L"welcome");
  (**(code **)(*local_30 + 0x98))(local_30,&local_48,local_28);
  (**(code **)(*local_20[0] + 0x128))(local_20[0],&local_58,local_res8);
  (**(code **)(*local_28 + 0x98))(local_28,&local_50,local_58);
  (**(code **)(*local_20[0] + 0x148))(local_20[0],&local_28,L"instructions");
  (**(code **)(*local_30 + 0x98))(local_30,&local_60,local_28);
  (**(code **)(*local_20[0] + 0x128))(local_20[0],&local_70,local_res10);
  (**(code **)(*local_28 + 0x98))(local_28,&local_68,local_70);
  (**(code **)(*local_20[0] + 0x148))(local_20[0],&local_28,L"options");
  (**(code **)(*local_30 + 0x98))(local_30,&local_78,local_28);
  (**(code **)(*local_28 + 0x108))(local_28,L"model",local_res18);
  FUN_012845f0(&local_80,local_38);
  FUN_00414ad0(PTR_DAT_02004010 + 0x903,local_80);
  FUN_00414480(&local_80);
  FUN_0041b800(&local_78);
  FUN_0041b800(&local_70);
  FUN_00417840(&local_68,&DAT_00b9f8e0,2);
  FUN_0041b800(&local_58);
  FUN_00417840(&local_50,&DAT_00b9f8e0,2);
  FUN_00417840(&local_40,&LAB_00b9fca0,4);
  FUN_0041b800(local_20);
  FUN_00414560(&local_res8,3);
  return;
}

