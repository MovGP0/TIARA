/* Ghidra address: 01302300 */
/* Ghidra symbol: FUN_01302300 */


void FUN_01302300(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
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
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20 [2];
  
  local_a0 = 0;
  local_98 = 0;
  local_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  local_40[0] = 0;
  local_20[0] = (longlong *)0x0;
  local_28 = 0;
  local_30 = 0;
  FUN_00bac3d0(local_20);
  (**(code **)(*local_20[0] + 0x148))(local_20[0],local_40,L"desription");
  (**(code **)(*local_20[0] + 0x108))(local_20[0],local_40[0]);
  (**(code **)(*local_20[0] + 0x100))(local_20[0],&local_28);
  uVar2 = FUN_013021e0(DAT_02107808);
  FUN_012e26e0(uVar2,&local_50);
  FUN_00c7c750(&local_48,local_28,L"devName",local_50);
  uVar2 = FUN_013021e0(DAT_02107808);
  FUN_012e2700(uVar2,&local_60);
  FUN_00c7c750(&local_58,local_28,L"devDescription",local_60);
  uVar2 = FUN_013021e0(DAT_02107808);
  FUN_012e2720(uVar2,&local_70);
  FUN_00c7c750(&local_68,local_28,L"datasheetReference",local_70);
  uVar2 = FUN_013021e0(DAT_02107808);
  FUN_012e2740(uVar2,&local_80);
  FUN_00c7c750(&local_78,local_28,L"modelledBy",local_80);
  uVar2 = FUN_013021e0(DAT_02107808);
  FUN_012e2760(uVar2,&local_90);
  FUN_00c7c750(&local_88,local_28,L"documentedBy",local_90);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x7a0),&local_98);
  cVar1 = FUN_00b96de0(local_98);
  if (cVar1 != '\0') {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x7a0),&local_a0);
    FUN_00416cd0(&local_30,5,local_a0,L"\\report_",&DAT_01302854,L"description",L".xml");
    (**(code **)(*local_20[0] + 0x180))(local_20[0],local_30,0);
  }
  FUN_00414560(&local_a0,2);
  FUN_00414480(&local_90);
  FUN_0041b800(&local_88);
  FUN_00414480(&local_80);
  FUN_0041b800(&local_78);
  FUN_00414480(&local_70);
  FUN_0041b800(&local_68);
  FUN_00414480(&local_60);
  FUN_0041b800(&local_58);
  FUN_00414480(&local_50);
  FUN_0041b800(&local_48);
  FUN_0041b800(local_40);
  FUN_00414480(&local_30);
  FUN_0041b800(&local_28);
  FUN_0041b800(local_20);
  return;
}

