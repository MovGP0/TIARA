/* Ghidra address: 01309160 */
/* Ghidra symbol: FUN_01309160 */


void FUN_01309160(char param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 longlong param_5)

{
  char cVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined *local_110;
  undefined8 local_108;
  wchar_t *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  undefined1 *local_80;
  char local_6d;
  undefined4 local_6c;
  undefined8 *local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20 [2];
  
  local_80 = auStack_138;
  local_f0 = 0;
  local_f8 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_b8 = (longlong *)0x0;
  local_a0 = 0;
  local_a8 = (longlong *)0x0;
  local_90 = 0;
  local_98 = (longlong *)0x0;
  local_88 = 0;
  local_40 = 0;
  local_48 = 0;
  local_28 = 0;
  local_50 = 0;
  local_58 = 0;
  local_20[0] = (longlong *)0x0;
  local_60 = (longlong *)0x0;
  local_68 = (undefined8 *)0x0;
  local_30 = 0;
  local_38 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00414610(local_res20);
  FUN_00414610(param_5);
  FUN_00bac3d0(local_20);
  cVar1 = (**(code **)(*local_20[0] + 0x170))(local_20[0],local_res20);
  if (cVar1 != '\0') {
    (**(code **)(*local_20[0] + 0x100))(local_20[0],&local_88);
    if (local_88 != 0) {
      (**(code **)(*local_20[0] + 0x100))(local_20[0],&local_98);
      (**(code **)(*local_98 + 0x100))(local_98,&local_90,L"rootFolder");
      FUN_0044f8b0(&local_28,local_90);
      (**(code **)(*local_20[0] + 0x100))(local_20[0],&local_a8);
      (**(code **)(*local_a8 + 0x100))(local_a8,&local_a0,L"resultFolder");
      FUN_0044f8b0(&local_50,local_a0);
      if (local_50 == 0) {
        FUN_00414b50(&local_50,local_28);
      }
      if (param_5 == 0) {
        FUN_00414b50(&local_58,local_50);
      }
      else {
        FUN_0044f8b0(&local_58,param_5);
      }
      (**(code **)(*local_20[0] + 0x100))(local_20[0],&local_b8);
      (**(code **)(*local_b8 + 0x100))(local_b8,&local_b0,L"filterGood");
      local_6d = FUN_0043fed0(local_b0,1);
      FUN_0044f850(&local_c0,local_28);
      FUN_00441d00(&local_40,local_c0,local_res10);
      local_6c = FUN_01308d60(auStack_138);
      FUN_00bac3d0(&local_60);
      (**(code **)(*local_60 + 0x148))(local_60,&local_c8,L"testcase");
      (**(code **)(*local_60 + 0x108))(local_60,local_c8);
      (**(code **)(*local_60 + 0x100))(local_60,&local_68);
      if ((param_1 == '\x02') || (param_1 == '\x03')) {
        if (local_6d == '\0') {
          FUN_00414480(&local_30);
          if (param_1 == '\x02') {
            FUN_00414b50(&local_30,L"File not found");
          }
          else {
            FUN_00414b50(&local_30,L"*** CAN\'T LOAD file");
          }
          FUN_00414b50(&local_48,local_30);
          FUN_00414480(&local_30);
        }
        else {
          FUN_00414480(&local_38);
          if (param_1 == '\x02') {
            FUN_00414b50(&local_38,L"Not found file");
          }
          else {
            FUN_00414b50(&local_38,L"Can\'t load file");
          }
          FUN_00414b50(&local_48,local_38);
          FUN_00414480(&local_38);
        }
        FUN_0043f750(&local_d0,local_6c);
        FUN_00c7c820(local_68,L"index",local_d0);
        FUN_00416ba0(&local_d8,local_40,L".TSC");
        FUN_00c7c820(local_68,L"name",local_d8);
        FUN_00440030(&local_e0,0,1);
        FUN_00c7c820(local_68,L"success",local_e0);
        FUN_00c7c750(&local_e8,local_68,L"status",local_48);
      }
      cVar1 = FUN_00440b00(local_58,1);
      if (cVar1 != '\0') {
        FUN_0043f750(&local_f8,local_6c);
        local_118 = local_res18;
        local_110 = &DAT_01309b28;
        local_108 = local_f8;
        local_100 = L".xml";
        FUN_00416cd0(&local_f0,6,local_58,L"\\report_");
        (**(code **)(*local_60 + 0x180))(local_60,local_f0,0);
      }
    }
  }
  FUN_00414560(&local_f8,2);
  FUN_0041b800(&local_e8);
  FUN_00414560(&local_e0,3);
  FUN_0041b800(&local_c8);
  FUN_00414480(&local_c0);
  FUN_0041b800(&local_b8);
  FUN_00414480(&local_b0);
  FUN_0041b800(&local_a8);
  FUN_00414480(&local_a0);
  FUN_0041b800(&local_98);
  FUN_00414480(&local_90);
  FUN_0041b800(&local_88);
  FUN_0041b800(&local_68);
  FUN_0041b800(&local_60);
  FUN_00414560(&local_58,7);
  FUN_0041b800(local_20);
  FUN_00414560(&local_res10,4);
  return;
}

