/* Ghidra address: 010b04f0 */
/* Ghidra symbol: FUN_010b04f0 */


void FUN_010b04f0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 local_res10;
  undefined4 local_res18;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  longlong *local_30;
  longlong *local_20;
  
  local_60 = auStack_a8;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  local_30 = *(longlong **)(param_1 + 0x20);
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar1 = (**(code **)(*local_30 + 0x28))(local_30);
  if (iVar1 == 0) {
    (**(code **)(*local_30 + 0x78))(local_30,L"VER1");
    (**(code **)(*local_30 + 0x78))(local_30,L"Block1");
    (**(code **)(*local_30 + 0x78))(local_30,0);
  }
  else {
    (**(code **)(*local_30 + 0x18))(local_30,&local_68,2);
    FUN_004b4b10(local_20,local_68);
  }
  FUN_0043f750(&local_70,local_res18);
  local_88 = local_70;
  FUN_00416cd0(local_40,3,local_res10,&DAT_010b074c);
  (**(code **)(*local_20 + 0x78))(local_20,local_40[0]);
  FUN_004b37d0(local_20,&local_78);
  (**(code **)(*local_30 + 0x40))(local_30,2,local_78);
  FUN_00410f20(local_20);
  FUN_00414560(&local_78,3);
  FUN_00414560(&local_58,4);
  FUN_00414480(&local_res10);
  return;
}

