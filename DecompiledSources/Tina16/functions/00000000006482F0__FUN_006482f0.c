/* Ghidra address: 006482f0 */
/* Ghidra symbol: FUN_006482f0 */


void FUN_006482f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_40 = 0;
  local_48 = 0;
  local_18 = 0;
  local_58 = param_1;
  local_50 = param_2;
  FUN_0041ddd0(&local_10,param_1);
  FUN_0041ddd0(&local_18,PTR_PTR_02002e98);
  FUN_00416ad0(&local_10,local_18);
  FUN_00647f90(auStack_88,&local_40,local_50);
  local_38 = local_40;
  local_30 = 0x11;
  FUN_00648130(auStack_88,&local_48,local_50);
  local_28 = local_48;
  local_20 = 0x11;
  local_68 = 1;
  uVar1 = FUN_0044d530(&PTR_FUN_00472870,1,local_10,&local_38);
  FUN_004134c0(uVar1);
  FUN_00414560(&local_48,2);
  FUN_00414560(&local_18,2);
  return;
}

