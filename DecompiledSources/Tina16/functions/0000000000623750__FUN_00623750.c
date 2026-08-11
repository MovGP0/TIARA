/* Ghidra address: 00623750 */
/* Ghidra symbol: FUN_00623750 */


void FUN_00623750(longlong param_1,char param_2)

{
  undefined4 uVar1;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  uint local_88 [2];
  undefined1 local_80;
  uint local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  longlong *local_20 [2];
  
  local_50 = auStack_d8;
  local_a8 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_98 = 0;
  local_60 = 0;
  local_68 = 0;
  local_58 = 0;
  local_30 = 0;
  local_20[0] = (longlong *)0x0;
  local_38 = 0;
  FUN_006262a0(**(undefined8 **)(param_1 + 0x10),&local_40,&local_38);
  FUN_006245d0(&local_58,param_1 + 0x20);
  local_b8 = local_58;
  FUN_00416cd0(&local_30,3,local_38,L"CLSID\\");
  if (param_2 == '\0') {
    FUN_00416ba0(&local_a0,local_30,L"\\TypeLib");
    FUN_006247b0(local_a0,local_40);
    FUN_00416ba0(&local_a8,local_30,L"\\Version");
    FUN_006247b0(local_a8,local_40);
    FUN_00622640(param_1,0);
  }
  else {
    FUN_00622640(param_1,param_2);
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))(*(longlong **)(param_1 + 0x10),local_20);
    uVar1 = (**(code **)(*local_20[0] + 0x38))(local_20[0],&local_28);
    FUN_006245b0(uVar1);
    FUN_00416ba0(&local_60,local_30,L"\\Version");
    local_88[0] = (uint)*(ushort *)(local_28 + 0x18);
    local_80 = 0;
    local_78 = (uint)*(ushort *)(local_28 + 0x1a);
    local_70 = 0;
    FUN_00442f70(&local_68,L"%d.%d",local_88,1);
    FUN_006246d0(local_60,0,local_68,local_40);
    FUN_00416ba0(&local_90,local_30,L"\\TypeLib");
    FUN_006245d0(&local_98,local_28);
    FUN_006246d0(local_90,0,local_98,local_40);
    (**(code **)(*local_20[0] + 0x60))(local_20[0],local_28);
  }
  FUN_00414560(&local_a8,4);
  FUN_00414560(&local_68,3);
  FUN_00414560(&local_38,2);
  FUN_0041b800(local_20);
  return;
}

