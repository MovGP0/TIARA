/* Ghidra address: 013c2430 */
/* Ghidra symbol: FUN_013c2430 */


void FUN_013c2430(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined4 *local_res20;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined4 local_98;
  undefined1 local_90;
  wchar_t *local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_70 = auStack_d8;
  local_78 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  local_18 = FUN_009e3820(&PTR_FUN_009e2538,1,0xffffffff,0);
  local_10 = 0;
  *local_res20 = 0;
  local_b8 = L"symbols_in.json";
  FUN_00416cd0(&local_78,3,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0xe8),&DAT_013c2838);
  FUN_013c2350(param_1,&local_58,local_78);
  local_a8 = *(undefined8 *)(param_1 + 0x28);
  local_a0 = 0x11;
  local_98 = *(undefined4 *)(param_1 + 0x3c);
  local_90 = 0;
  local_88 = L"polls/";
  local_80 = 0x11;
  FUN_00442f70(&local_40,L"http://%s:%d/%s",&local_a8,2);
  local_20 = FUN_00f309b0(&LAB_00f23b78,1);
  uVar1 = FUN_00f2e9d0(&LAB_00f22a90,1,local_res18);
  FUN_00f30e70(local_20,L"ext_conf",uVar1);
  uVar1 = FUN_00f2e9d0(&LAB_00f22a90,1,local_58);
  FUN_00f30e70(local_20,L"symbols_in",uVar1);
  uVar1 = FUN_00f2e9d0(&LAB_00f22a90,1,local_res10);
  FUN_00f30e70(local_20,L"py_source",uVar1);
  FUN_00f2d1d0(local_20,&local_48);
  FUN_009e31b0(local_18,&local_60,local_48);
  local_28 = FUN_004ba3c0(&PTR_FUN_0047d288,1,local_60);
  local_30 = FUN_00882aa0(&PTR_FUN_00cffa30,1,0);
  FUN_00d01ce0(local_30,&local_68,local_40,local_28);
  FUN_009e2e70(local_18,&local_38,local_68);
  local_10 = FUN_00f30500(local_38,0,0);
  uVar1 = FUN_004113f0(local_10,&LAB_00f23b78);
  FUN_013c1e30(param_1,uVar1,local_res20,param_5);
  if (local_10 != 0) {
    FUN_00410f20(local_10);
  }
  FUN_00410f20(local_18);
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00410f20(local_30);
  FUN_00414480(&local_78);
  FUN_00414560(&local_68,7);
  FUN_00414560(&local_res10,2);
  return;
}

