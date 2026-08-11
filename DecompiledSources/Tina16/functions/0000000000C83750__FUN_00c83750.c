/* Ghidra address: 00c83750 */
/* Ghidra symbol: FUN_00c83750 */


undefined8
FUN_00c83750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
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
  longlong *local_30;
  longlong *local_28;
  longlong *local_20 [2];
  
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  local_50 = 0;
  local_40 = 0;
  local_48 = 0;
  local_20[0] = (longlong *)0x0;
  local_28 = (longlong *)0x0;
  local_30 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00414610(param_5);
  FUN_00414520(param_2);
  FUN_00c83600(param_1,local_20,&local_res20);
  if (local_20[0] == (longlong *)0x0) goto code_r0x00c83ced;
  FUN_00416cd0(&local_48,3,L"/compregy_language_file/lang[@id=\"",param_5,&DAT_00c83f4c);
  (**(code **)(*local_20[0] + 0xd8))(local_20[0],&local_40,local_48);
  FUN_0041b890(&local_38,local_40,&DAT_00c83f52);
  if (local_38 == (longlong *)0x0) {
    *param_6 = 0x4e4;
  }
  else {
    (**(code **)(*local_38 + 0x100))(local_38,&local_50,&PTR_DAT_00c83f70);
    uVar1 = FUN_0043fc50(local_50,0x4e4);
    *param_6 = uVar1;
  }
  FUN_00416cd0(&local_60,3,L"/compregy_language_file/group[@id=\"",local_res20,&DAT_00c83f4c);
  (**(code **)(*local_20[0] + 0xd8))(local_20[0],&local_58,local_60);
  FUN_0041b890(&local_28,local_58,&DAT_00c83f52);
  if (local_28 == (longlong *)0x0) goto code_r0x00c83ced;
  FUN_00416cd0(&local_70,3,L"component[@id=\"",local_res18,&DAT_00c83f4c);
  (**(code **)(*local_28 + 0xd8))(local_28,&local_68,local_70);
  FUN_0041b890(&local_30,local_68,&DAT_00c83f52);
  if (local_30 == (longlong *)0x0) {
    FUN_00416cd0(&local_a8,3,L"//component[@id=\"",local_res18,&DAT_00c83f4c);
    (**(code **)(*local_20[0] + 0xd8))(local_20[0],&local_a0,local_a8);
    FUN_0041b890(&local_30,local_a0,&DAT_00c83f52);
    if (local_30 == (longlong *)0x0) goto code_r0x00c83ced;
    FUN_00416cd0(&local_b8,3,L"lang[@id=\"",param_5,&DAT_00c83f4c);
    (**(code **)(*local_30 + 0xd8))(local_30,&local_b0,local_b8);
    FUN_0041b890(&local_38,local_b0,&DAT_00c83f52);
    if (local_38 == (longlong *)0x0) {
LAB_00c83c7e:
      (**(code **)(*local_30 + 0xd8))(local_30,&local_c8,L"native");
      FUN_0041b890(&local_38,local_c8,&DAT_00c83f52);
      *param_6 = 0x4e4;
    }
    else {
      (**(code **)(*local_38 + 0xb8))(local_38,&local_c0);
      if (local_c0 == 0) goto LAB_00c83c7e;
    }
    (**(code **)(*local_38 + 0xb8))(local_38,&local_d0);
    FUN_004168e0(param_2,local_d0);
    goto code_r0x00c83ced;
  }
  FUN_00416cd0(&local_80,3,L"lang[@id=\"",param_5,&DAT_00c83f4c);
  (**(code **)(*local_30 + 0xd8))(local_30,&local_78,local_80);
  FUN_0041b890(&local_38,local_78,&DAT_00c83f52);
  if (local_38 == (longlong *)0x0) {
LAB_00c83b09:
    (**(code **)(*local_30 + 0xd8))(local_30,&local_90,L"native");
    FUN_0041b890(&local_38,local_90,&DAT_00c83f52);
    *param_6 = 0x4e4;
  }
  else {
    (**(code **)(*local_38 + 0xb8))(local_38,&local_88);
    if (local_88 == 0) goto LAB_00c83b09;
  }
  (**(code **)(*local_38 + 0xb8))(local_38,&local_98);
  FUN_004168e0(param_2,local_98);
code_r0x00c83ced:
  FUN_00414480(&local_d0);
  FUN_0041b800(&local_c8);
  FUN_00414560(&local_c0,2);
  FUN_0041b800(&local_b0);
  FUN_00414480(&local_a8);
  FUN_0041b800(&local_a0);
  FUN_00414480(&local_98);
  FUN_0041b800(&local_90);
  FUN_00414560(&local_88,2);
  FUN_0041b800(&local_78);
  FUN_00414480(&local_70);
  FUN_0041b800(&local_68);
  FUN_00414480(&local_60);
  FUN_0041b800(&local_58);
  FUN_00414560(&local_50,2);
  FUN_0041b800(&local_40);
  FUN_00417840(&local_38,&LAB_00b9fca0,4);
  FUN_00414560(&local_res18,3);
  return param_2;
}

