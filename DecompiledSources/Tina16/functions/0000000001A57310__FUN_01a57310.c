/* Ghidra address: 01a57310 */
/* Ghidra symbol: FUN_01a57310 */


void FUN_01a57310(longlong param_1,int param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_res18 [2];
  undefined1 auStack_128 [32];
  wchar_t *local_108;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20 [2];
  
  local_e0 = auStack_128;
  local_f0 = 0;
  local_e8 = 0;
  local_20[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  uVar2 = FUN_00f309b0(&LAB_00f23b78,1);
  *(undefined8 *)(param_1 + 0x7f8) = uVar2;
  if (param_2 == 1) {
    FUN_00414b50(&local_68,L"SERVER");
    FUN_00414b50(&local_70,L"start");
    uVar3 = FUN_00f2e9d0(&LAB_00f22a90,1,L"SERVER");
    FUN_00f30e70(uVar2,&DAT_01a5798c,uVar3);
    uVar2 = FUN_00f2e9d0(&LAB_00f22a90,1,L"start");
    FUN_00f30e70(*(undefined8 *)(param_1 + 0x7f8),L"sub_cmd",uVar2);
  }
  else if (param_2 == 2) {
    FUN_00414b50(&local_68,L"SERVER");
    FUN_00414b50(&local_70,L"stop");
    uVar3 = FUN_00f2e9d0(&LAB_00f22a90,1,L"SERVER");
    FUN_00f30e70(uVar2,&DAT_01a5798c,uVar3);
    uVar2 = FUN_00f2e9d0(&LAB_00f22a90,1,L"stop");
    FUN_00f30e70(*(undefined8 *)(param_1 + 0x7f8),L"sub_cmd",uVar2);
  }
  else if (param_2 == 5) {
    FUN_00414b50(&local_68,L"SERVER");
    FUN_00414b50(&local_70,L"status");
    uVar3 = FUN_00f2e9d0(&LAB_00f22a90,1,L"SERVER");
    FUN_00f30e70(uVar2,&DAT_01a5798c,uVar3);
    uVar2 = FUN_00f2e9d0(&LAB_00f22a90,1,L"status");
    FUN_00f30e70(*(undefined8 *)(param_1 + 0x7f8),L"sub_cmd",uVar2);
  }
  else if (param_2 == 3) {
    FUN_00414b50(&local_68,L"LOAD");
    FUN_00414b50(&local_70,local_res18[0]);
    uVar3 = FUN_00f2e9d0(&LAB_00f22a90,1,L"LOAD");
    FUN_00f30e70(uVar2,&DAT_01a5798c,uVar3);
    uVar2 = FUN_00f2e9d0(&LAB_00f22a90,1,local_res18[0]);
    FUN_00f30e70(*(undefined8 *)(param_1 + 0x7f8),L"model",uVar2);
  }
  else if (param_2 == 4) {
    FUN_00414b50(&local_68,L"UNLOAD");
    FUN_00414b50(&local_70,local_res18[0]);
    uVar3 = FUN_00f2e9d0(&LAB_00f22a90,1,L"UNLOAD");
    FUN_00f30e70(uVar2,&DAT_01a5798c,uVar3);
    uVar2 = FUN_00f2e9d0(&LAB_00f22a90,1,local_res18[0]);
    FUN_00f30e70(*(undefined8 *)(param_1 + 0x7f8),L"model",uVar2);
  }
  FUN_00f2d1d0(*(undefined8 *)(param_1 + 0x7f8),&local_30);
  local_108 = (wchar_t *)CONCAT71(local_108._1_7_,1);
  FUN_00450070(&local_e8,local_30,L"$slash$",&DAT_01a57a58);
  FUN_00414b50(&local_30,local_e8);
  (**(code **)(*local_28 + 0x78))(local_28,local_30);
  local_108 = L"ls_cmd_inp.json";
  FUN_00416cd0(&local_f0,3,*(undefined8 *)(param_1 + 0x2ba0),&DAT_01a57a6c);
  (**(code **)(*local_28 + 0x100))(local_28,local_f0);
  FUN_00416ba0(&local_60,*(undefined8 *)(param_1 + 0x830),L"lms_cmd.py");
  FUN_01a3e910(param_1,local_60);
  FUN_01a3ed60(param_1);
  local_108 = L"ls_cmd_inp.json";
  FUN_00416cd0(local_20,3,*(undefined8 *)(param_1 + 0x2ba0),&DAT_01a57a6c);
  cVar1 = FUN_00440a20(local_20[0],1);
  if (cVar1 != '\0') {
    FUN_004412f0(local_20[0]);
  }
  FUN_00410f20(local_28);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x7f8));
  FUN_00414560(&local_f0,2);
  FUN_00414560(&local_70,9);
  FUN_00414480(local_20);
  FUN_00414480(local_res18);
  return;
}

