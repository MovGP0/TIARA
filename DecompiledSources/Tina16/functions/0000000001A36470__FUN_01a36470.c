/* Ghidra address: 01a36470 */
/* Ghidra symbol: FUN_01a36470 */


void FUN_01a36470(longlong param_1)

{
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined **local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  undefined8 local_28;
  longlong *local_20;
  
  local_70 = auStack_c8;
  local_98 = 0;
  local_88 = 0;
  local_90 = 0;
  local_80 = 0;
  local_78 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  FUN_01a361d0(param_1);
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_28 = FUN_00f309b0(&LAB_00f23b78,1);
  local_60 = FUN_00f33100(&LAB_00f256b8,1);
  local_2c = 0;
  local_68 = &PTR_u_ohm_1_t_TSC_01fc6d48;
  do {
    FUN_00416ba0(&local_38,L"c:\\Attila\\Devel Files\\Other\\graph\\",*local_68);
    FUN_01a368d0(param_1,local_38,local_2c);
    FUN_0043e1a0(&local_78,*local_68);
    local_a8 = (wchar_t *)CONCAT71(local_a8._1_7_,1);
    FUN_00450070(&local_58,local_78,L".tsc",0);
    if (*(int *)(local_68 + 1) < 1) {
      FUN_00416ba0(&local_38,local_58,L".json");
    }
    else {
      FUN_0043f750(&local_80,*(int *)(local_68 + 1));
      local_a8 = L".json";
      FUN_00416cd0(&local_38,3,local_58);
    }
    FUN_00441920(&local_90,local_38);
    FUN_004414c0(&local_88,local_90,L".json");
    FUN_00f33630(local_60,local_88);
    local_2c = local_2c + 1;
    local_68 = local_68 + 5;
  } while (local_2c != 0x12);
  FUN_00f30e70(local_28,L"filelist",local_60);
  FUN_00f2d1d0(local_28,&local_48);
  FUN_00416ba0(&local_40,*(undefined8 *)(param_1 + 0x50),L"\\data");
  (**(code **)(*local_20 + 0x78))(local_20,local_48);
  local_a8 = L"filelist.json";
  FUN_00416cd0(&local_98,3,local_40,&DAT_01a36878);
  (**(code **)(*local_20 + 0x100))(local_20,local_98);
  FUN_0072d440(L"Finished",2,4,0);
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00414560(&local_98,5);
  FUN_00414560(&local_58,5);
  return;
}

