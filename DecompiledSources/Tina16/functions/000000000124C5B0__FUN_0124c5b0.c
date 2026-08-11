/* Ghidra address: 0124c5b0 */
/* Ghidra symbol: FUN_0124c5b0 */


undefined8 *
FUN_0124c5b0(undefined8 *param_1,undefined4 param_2,longlong *param_3,longlong *param_4,
            undefined1 param_5,byte param_6,char param_7,longlong param_8)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined2 local_res10;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  longlong local_48;
  longlong local_40;
  short local_32;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_50 = auStack_e8;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_28 = (longlong *)0x0;
  local_30 = (longlong *)0x0;
  local_48 = 0;
  FUN_00414610(param_8);
  (**(code **)(*param_3 + 0x148))(param_3,param_1,L"image");
  (**(code **)(*param_4 + 0x98))(param_4,&local_58,*param_1);
  local_res10 = (undefined2)param_2;
  local_32 = FUN_01d39f20(local_res10);
  local_40 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,local_32);
  if ((param_6 & local_32 != 0) != 0) {
    local_c8 = param_8;
    FUN_0124bb90(local_32,param_3,*param_1,param_5);
    if ((((param_7 != '\0') && (param_8 != 0)) && (0 < *(int *)(local_40 + 0xa7))) &&
       (*(char *)(local_40 + 0xb3) != '\0')) {
      (**(code **)(*param_3 + 0x148))(param_3,&local_30,L"image3d");
      (**(code **)(*param_4 + 0x98))(param_4,&local_60,local_30);
      (**(code **)(*local_30 + 0x108))(local_30,&DAT_0124ccf4,&DAT_0124cd08);
      local_c8 = param_8;
      FUN_0124bb90(local_32,param_3,local_30,param_5);
      local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
      FUN_0060bbf0(local_20,6);
      FUN_01aa1ce0(param_8,local_20);
      (**(code **)(*param_3 + 0x148))(param_3,&local_28,L"shape");
      (**(code **)(*local_30 + 0x98))(local_30,&local_68,local_28);
      FUN_01b23e30(local_20,param_3,local_28);
      (**(code **)(*local_28 + 0x108))(local_28,L"type",L"image");
      iVar1 = (**(code **)(*local_20 + 0x60))(local_20);
      FUN_0043f750(&local_78,(int)*(short *)(local_40 + 0x81) - iVar1 / 2);
      iVar1 = (**(code **)(*local_20 + 0x48))(local_20);
      FUN_0043f750(&local_80,(int)*(short *)(local_40 + 0x83) - iVar1 / 2);
      local_c8 = local_80;
      FUN_00416cd0(&local_70,3,local_78,&DAT_0124cd68);
      (**(code **)(*local_28 + 0x108))(local_28,L"position",local_70);
      uVar2 = (**(code **)(*local_20 + 0x60))(local_20);
      FUN_0043f750(&local_90,uVar2);
      uVar2 = (**(code **)(*local_20 + 0x48))(local_20);
      FUN_0043f750(&local_98,uVar2);
      local_c8 = local_98;
      FUN_00416cd0(&local_88,3,local_90,&DAT_0124cd68);
      (**(code **)(*local_28 + 0x108))(local_28,L"size",local_88);
      FUN_00410f20(local_20);
    }
  }
  (**(code **)(*param_3 + 0x148))(param_3,&local_28,L"label");
  (**(code **)(*(longlong *)*param_1 + 0x98))((longlong *)*param_1,&local_a0,local_28);
  FUN_01d059a0(&local_48,param_2);
  if (local_48 == 0) {
    FUN_00414b50(&local_48,&DAT_0124cda8);
  }
  (**(code **)(*local_28 + 0x108))(local_28,L"prefix",local_48);
  lVar3 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,local_32);
  FUN_0043f750(&local_b0,(longlong)*(short *)(lVar3 + 0x7d));
  lVar3 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,local_32);
  FUN_0043f750(&local_b8,(longlong)*(short *)(lVar3 + 0x7f));
  local_c8 = local_b8;
  FUN_00416cd0(&local_a8,3,local_b0,&DAT_0124cd68);
  (**(code **)(*local_28 + 0x108))(local_28,L"position",local_a8);
  FUN_00414560(&local_b8,3);
  FUN_0041b800(&local_a0);
  FUN_00414560(&local_98,6);
  FUN_00417840(&local_68,&DAT_00b9f8e0,3);
  FUN_00414480(&local_48);
  FUN_00417840(&local_30,&LAB_00b9fca0,2);
  FUN_00414480(&param_8);
  return param_1;
}

