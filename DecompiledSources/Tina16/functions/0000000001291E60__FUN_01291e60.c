/* Ghidra address: 01291e60 */
/* Ghidra symbol: FUN_01291e60 */


void FUN_01291e60(longlong *param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *local_res8 [4];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30 [2];
  
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_30[0] = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_40 = 0;
  local_48 = 0;
  local_res8[0] = param_1;
  FUN_0041b910(param_1);
  (**(code **)(*local_res8[0] + 0x100))(local_res8[0],&local_50,L"position");
  FUN_00416ba0(&local_48,local_50,&DAT_012921b4);
  uVar2 = FUN_012421e0(&local_48);
  uVar3 = FUN_012421e0(&local_48);
  lVar4 = FUN_010bb2c0(0,&PTR_FUN_010ba368,uVar2,uVar3,0);
  (**(code **)(*local_res8[0] + 0x100))(local_res8[0],&local_58,L"locking");
  uVar1 = FUN_0043fc50(local_58,0);
  *(undefined1 *)(lVar4 + 0x38) = uVar1;
  (**(code **)(*local_res8[0] + 0xe8))(local_res8[0],&local_38,L"image/legend[@fieldid]");
  (**(code **)(*local_38 + 0x68))(local_38);
  (**(code **)(*local_38 + 0x70))(local_38,&local_60);
  FUN_0041b890(local_30,local_60,&DAT_0129220e);
  while (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x100))(local_30[0],&local_70,L"fieldid");
    (**(code **)(*local_30[0] + 0x100))(local_30[0],&local_78,L"text");
    FUN_00416cd0(&local_68,3,local_70,&DAT_01292248,local_78);
    (**(code **)(**(longlong **)(lVar4 + 0x28) + 0x78))(*(longlong **)(lVar4 + 0x28),local_68);
    (**(code **)(*local_38 + 0x70))(local_38,&local_80);
    FUN_0041b890(local_30,local_80,&DAT_0129220e);
  }
  (**(code **)(*param_2 + 0x20))(param_2,lVar4);
  FUN_0041b800(&local_80);
  FUN_00414560(&local_78,3);
  FUN_0041b800(&local_60);
  FUN_00414560(&local_58,4);
  FUN_0041b800(&local_38);
  FUN_0041b800(local_30);
  FUN_0041b800(local_res8);
  return;
}

