/* Ghidra address: 0128c240 */
/* Ghidra symbol: FUN_0128c240 */


undefined8 *
FUN_0128c240(undefined8 *param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
            longlong *param_5,char param_6,undefined8 param_7)

{
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *local_res18;
  longlong *local_res20;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_38;
  longlong local_30;
  undefined4 local_24;
  longlong local_20;
  
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_58 = (longlong *)0x0;
  local_60 = 0;
  local_50 = 0;
  local_20 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_3);
  FUN_0041b910(local_res20);
  FUN_00414610(param_7);
  (**(code **)(*local_res18 + 0x148))(local_res18,param_1,L"wire");
  (**(code **)(*local_res20 + 0x98))(local_res20,&local_50,*param_1);
  FUN_00414480(&local_20);
  iVar4 = FUN_017c2b70();
  iVar5 = 0;
  if (-1 < iVar4 + -1) {
    do {
      if (local_20 != 0) {
        FUN_00416ad0(&local_20,&DAT_0128c784);
      }
      local_24 = FUN_017c2c60(param_5,iVar5);
      FUN_0043f750(&local_58,(longlong)(short)local_24);
      FUN_0043f750(&local_60,(longlong)local_24._2_2_);
      FUN_00416cd0(&local_20,4,local_20,local_58,&DAT_0128c784,local_60);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,L"points",local_20);
  FUN_017ff4f0(param_5,&local_68);
  (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,&PTR_DAT_0128c7b0,local_68);
  FUN_017ff570(param_5,&local_70);
  (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,L"groupid",local_70);
  uVar2 = FUN_017c3740(param_5);
  FUN_0043f750(&local_78,uVar2);
  (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,&DAT_0128c7e0,local_78);
  FUN_01266af0(param_5,local_res18,*param_1,1,param_7);
  cVar3 = FUN_017c3740(param_5);
  if ((cVar3 == '\0') && (param_6 == '\x01')) {
    local_30 = 0;
    local_38 = 0;
    (**(code **)(*param_5 + 0x1f0))(param_5,0,&local_3c,&local_40);
    FUN_01995fc0(param_2,local_3c,local_40,&local_30,&local_44);
    (**(code **)(*param_5 + 0x1f0))(param_5,1,&local_3c,&local_40);
    FUN_01995fc0(param_2,local_3c,local_40,&local_38,&local_48);
    if ((local_30 == 0) || (local_38 == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      FUN_017ff4f0(local_30,&local_88);
      FUN_0043f750(&local_90,local_44);
      FUN_00416cd0(&local_80,3,local_88,&DAT_0128c80c,local_90);
      (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,L"start",local_80);
      FUN_017ff4f0(local_38,&local_a0);
      FUN_0043f750(&local_a8,local_48);
      FUN_00416cd0(&local_98,3,local_a0,&DAT_0128c80c,local_a8);
      (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,L"stop",local_98);
    }
  }
  FUN_00414560(&local_a8,0xb);
  FUN_0041b800(&local_50);
  FUN_00414480(&local_20);
  FUN_0041b800(&local_res18);
  FUN_0041b800(&local_res20);
  FUN_00414480(&param_7);
  return param_1;
}

