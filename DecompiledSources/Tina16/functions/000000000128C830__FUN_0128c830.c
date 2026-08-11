/* Ghidra address: 0128c830 */
/* Ghidra symbol: FUN_0128c830 */


undefined8 * FUN_0128c830(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  longlong *local_res10;
  longlong *local_res18 [2];
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
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  local_res10 = param_2;
  local_res18[0] = param_3;
  FUN_0041b910(param_2);
  FUN_0041b910(local_res18[0]);
  (**(code **)(*local_res10 + 0x148))(local_res10,param_1,L"figure");
  (**(code **)(*local_res18[0] + 0x98))(local_res18[0],local_40,*param_1);
  (**(code **)(*local_res10 + 0x148))(local_res10,local_30,L"image");
  (**(code **)(*(longlong *)*param_1 + 0x98))((longlong *)*param_1,&local_48,local_30[0]);
  FUN_0043f750(&local_58,*(undefined4 *)(param_4 + 0xc));
  FUN_0043f750(&local_60,*(undefined4 *)(param_4 + 0x10));
  FUN_00416cd0(&local_50,3,local_58,&DAT_0128cd30,local_60);
  (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,L"position",local_50);
  FUN_017b9a30(param_4,&local_68);
  (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,&PTR_DAT_0128cd40,local_68);
  FUN_017b9ab0(param_4,&local_70);
  (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,L"groupid",local_70);
  if ((*(short *)(param_4 + 0x38) == 0x65) && (0 < *(int *)(*(longlong *)(param_4 + 0x40) + 0x10)))
  {
    lVar1 = FUN_004aeac0(*(undefined8 *)(param_4 + 0x40),0);
    FUN_0043f750(&local_78,*(undefined1 *)(lVar1 + 0x1a));
    (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,L"startarrow",local_78);
    FUN_0043f750(&local_80,*(undefined1 *)(lVar1 + 0x21));
    (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,L"endarrow",local_80);
    FUN_0043f750(&local_88,*(undefined4 *)(lVar1 + 0x1d));
    (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,L"color",local_88);
  }
  if ((*(short *)(param_4 + 0x38) == 0x69) && (0 < *(int *)(*(longlong *)(param_4 + 0x40) + 0x10)))
  {
    lVar1 = FUN_004aeac0(*(undefined8 *)(param_4 + 0x40),0);
    FUN_0043f750(&local_90,*(undefined1 *)(lVar1 + 0x19));
    (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,L"startarrow",local_90);
    FUN_0043f750(&local_98,*(undefined1 *)(lVar1 + 0x20));
    (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,L"endarrow",local_98);
    FUN_0043f750(&local_a0,*(undefined4 *)(lVar1 + 0x1c));
    (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,L"color",local_a0);
    FUN_0043f750(&local_a8,*(undefined1 *)(lVar1 + 0xc));
    (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,L"style",local_a8);
  }
  iVar4 = *(int *)(*(longlong *)(param_4 + 0x40) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_4 + 0x40),iVar3);
      FUN_01247da0(uVar2,local_res10,local_30[0]);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414560(&local_a8,0xc);
  FUN_00417840(&local_48,&DAT_00b9f8e0,2);
  FUN_0041b800(local_30);
  FUN_0041b800(&local_res10);
  FUN_0041b800(local_res18);
  return param_1;
}

