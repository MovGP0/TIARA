/* Ghidra address: 014be2b0 */
/* Ghidra symbol: FUN_014be2b0 */


void FUN_014be2b0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
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
  (**(code **)(*local_50 + 0xe8))(local_50,&local_28,L"folder");
  (**(code **)(*local_28 + 0x68))(local_28);
  (**(code **)(*local_28 + 0x70))(local_28,&local_58);
  FUN_0041b890(&local_30,local_58,&DAT_014be562);
  while (local_30 != 0) {
    FUN_014c09b0(&local_38,local_30,L"name");
    FUN_014c09b0(&local_40,local_30,&PTR_DAT_014be598);
    FUN_014c09b0(&local_48,local_30,L"parent");
    uVar1 = FUN_014bde20(param_1,local_48);
    uVar1 = FUN_006dee40(*(undefined8 *)(*(longlong *)(param_1 + 0x6d8) + 0x550),uVar1,local_38);
    uVar2 = FUN_014bdba0(&DAT_014bd898,1,local_38,local_40,local_48);
    FUN_006dc990(uVar1,uVar2);
    (**(code **)(*local_28 + 0x70))(local_28,&local_60);
    FUN_0041b890(&local_30,local_60,&DAT_014be562);
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

