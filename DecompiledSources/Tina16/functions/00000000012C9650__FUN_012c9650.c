/* Ghidra address: 012c9650 */
/* Ghidra symbol: FUN_012c9650 */


undefined1 FUN_012c9650(undefined8 param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong *local_res18;
  longlong *local_res20;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  longlong *local_40;
  undefined1 local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_70 = auStack_108;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_40 = (longlong *)0x0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_3);
  FUN_0041b910(local_res20);
  local_31 = 0;
  local_48 = *(char **)(param_2 + 0x18);
  if (*local_48 != '\0') {
    (**(code **)(*local_res18 + 0x148))(local_res18,&local_40,L"action");
    (**(code **)(*local_res20 + 0x98))(local_res20,&local_78,local_40);
    (**(code **)(*local_40 + 0x108))(local_40,L"mode",&DAT_012ca040);
    FUN_00440030(&local_80,local_48[9],1);
    (**(code **)(*local_40 + 0x108))(local_40,L"cornertest",local_80);
    local_31 = 1;
    if (local_48[3] == '\0') {
      if (local_48[6] == '\0') {
        (**(code **)(*local_40 + 0x108))(local_40,L"action",&DAT_012ca128);
      }
      else {
        (**(code **)(*local_40 + 0x108))(local_40,L"action",L"Compare");
        FUN_004169a0(&local_88,local_48 + 0xc);
        (**(code **)(*local_40 + 0x108))(local_40,L"refcurve",local_88);
        FUN_004169a0(&local_90,local_48 + 0x10c);
        (**(code **)(*local_40 + 0x108))(local_40,L"testcurve",local_90);
        FUN_00414480(local_20);
        local_50 = *(undefined8 *)(local_48 + 0x610);
        local_e8 = 0;
        local_e0 = PTR_DAT_02004830;
        FUN_00448510(local_20,local_50,0,3);
        (**(code **)(*local_40 + 0x108))(local_40,L"tolerance",local_20[0]);
        FUN_00414480(local_20);
        FUN_0043f750(&local_98,*(undefined4 *)(local_48 + 0x628));
        (**(code **)(*local_40 + 0x108))(local_40,L"points",local_98);
      }
    }
    else {
      (**(code **)(*local_40 + 0x108))(local_40,L"action",L"Save");
    }
  }
  if (local_48[1] != '\0') {
    (**(code **)(*local_res18 + 0x148))(local_res18,&local_40,L"action");
    (**(code **)(*local_res20 + 0x98))(local_res20,&local_a0,local_40);
    (**(code **)(*local_40 + 0x108))(local_40,L"mode",&PTR_DAT_012ca13c);
    FUN_00440030(&local_a8,local_48[10],1);
    (**(code **)(*local_40 + 0x108))(local_40,L"cornertest",local_a8);
    local_31 = 1;
    if (local_48[4] == '\0') {
      if (local_48[7] == '\0') {
        (**(code **)(*local_40 + 0x108))(local_40,L"action",&DAT_012ca128);
      }
      else {
        (**(code **)(*local_40 + 0x108))(local_40,L"action",L"Compare");
        FUN_004169a0(&local_b0,local_48 + 0x20c);
        (**(code **)(*local_40 + 0x108))(local_40,L"refcurve",local_b0);
        FUN_004169a0(&local_b8,local_48 + 0x30c);
        (**(code **)(*local_40 + 0x108))(local_40,L"testcurve",local_b8);
        FUN_00414480(&local_28);
        local_58 = *(undefined8 *)(local_48 + 0x618);
        local_e8 = 0;
        local_e0 = PTR_DAT_02004830;
        FUN_00448510(&local_28,local_58,0,3);
        (**(code **)(*local_40 + 0x108))(local_40,L"tolerance",local_28);
        FUN_00414480(&local_28);
      }
    }
    else {
      (**(code **)(*local_40 + 0x108))(local_40,L"action",L"Save");
    }
  }
  if (local_48[2] != '\0') {
    (**(code **)(*local_res18 + 0x148))(local_res18,&local_40,L"action");
    (**(code **)(*local_res20 + 0x98))(local_res20,&local_c0,local_40);
    (**(code **)(*local_40 + 0x108))(local_40,L"mode",&LAB_012ca150);
    FUN_00440030(&local_c8,local_48[0xb],1);
    (**(code **)(*local_40 + 0x108))(local_40,L"cornertest",local_c8);
    local_31 = 1;
    if (local_48[5] == '\0') {
      if (local_48[8] == '\0') {
        (**(code **)(*local_40 + 0x108))(local_40,L"action",&DAT_012ca128);
      }
      else {
        (**(code **)(*local_40 + 0x108))(local_40,L"action",L"Compare");
        FUN_004169a0(&local_d0,local_48 + 0x40c);
        (**(code **)(*local_40 + 0x108))(local_40,L"refcurve",local_d0);
        FUN_004169a0(&local_d8,local_48 + 0x50c);
        (**(code **)(*local_40 + 0x108))(local_40,L"testcurve",local_d8);
        FUN_00414480(&local_30);
        local_60 = *(undefined8 *)(local_48 + 0x620);
        local_e8 = 0;
        local_e0 = PTR_DAT_02004830;
        FUN_00448510(&local_30,local_60,0,3);
        (**(code **)(*local_40 + 0x108))(local_40,L"tolerance",local_30);
        FUN_00414480(&local_30);
      }
    }
    else {
      (**(code **)(*local_40 + 0x108))(local_40,L"action",L"Save");
    }
  }
  FUN_00414560(&local_d8,3);
  FUN_0041b800(&local_c0);
  FUN_00414560(&local_b8,3);
  FUN_0041b800(&local_a0);
  FUN_00414560(&local_98,4);
  FUN_0041b800(&local_78);
  FUN_0041b800(&local_40);
  FUN_00414560(&local_30,3);
  FUN_0041b800(&local_res18);
  FUN_0041b800(&local_res20);
  return local_31;
}

