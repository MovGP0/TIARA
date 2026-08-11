/* Ghidra address: 014be850 */
/* Ghidra symbol: FUN_014be850 */


void FUN_014be850(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  undefined8 local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  longlong *local_28;
  longlong *local_20 [2];
  
  local_60 = 0;
  local_58 = 0;
  local_50 = (longlong *)0x0;
  local_20[0] = (longlong *)0x0;
  local_28 = (longlong *)0x0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00bac3d0(local_20);
  (**(code **)(*local_20[0] + 400))(local_20[0],local_res10[0]);
  (**(code **)(*local_20[0] + 0x100))(local_20[0],&local_50);
  (**(code **)(*local_50 + 0xe8))(local_50,&local_28,L"file");
  (**(code **)(*local_28 + 0x68))(local_28);
  (**(code **)(*local_28 + 0x70))(local_28,&local_58);
  FUN_0041b890(&local_30,local_58,&DAT_014beade);
  while (local_30 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x6e8);
    FUN_014c09b0(&local_38,local_30,L"name");
    FUN_014c09b0(&local_40,local_30,L"size");
    FUN_014c09b0(&local_48,local_30,L"date");
    lVar1 = FUN_006efb70(*(undefined8 *)(lVar1 + 0x4e0));
    FUN_006ef050(lVar1,local_38);
    (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x78))(*(longlong **)(lVar1 + 0x10),local_40);
    (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x78))(*(longlong **)(lVar1 + 0x10),local_48);
    (**(code **)(*local_28 + 0x70))(local_28,&local_60);
    FUN_0041b890(&local_30,local_60,&DAT_014beade);
  }
  FUN_00417840(&local_60,&DAT_00b9f8e0,2);
  FUN_0041b800(&local_50);
  FUN_00414560(&local_48,3);
  FUN_0041b800(&local_30);
  FUN_0041b800(&local_28);
  FUN_0041b800(local_20);
  FUN_00414480(local_res10);
  return;
}

