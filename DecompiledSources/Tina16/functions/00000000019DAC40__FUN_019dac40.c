/* Ghidra address: 019dac40 */
/* Ghidra symbol: FUN_019dac40 */


void FUN_019dac40(longlong param_1,undefined8 param_2,int param_3,char param_4)

{
  undefined8 uVar1;
  undefined8 local_res10;
  int local_res18;
  char local_res20;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_28;
  undefined8 local_20;
  
  local_80 = auStack_d8;
  local_b8 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_90 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_20 = FUN_00f309b0(&LAB_00f23b78,1);
  if (local_res18 == 1) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d8),&local_90);
    FUN_019da050(&local_88,local_90);
    uVar1 = FUN_00f2e9d0(&LAB_00f22a90,1,local_88);
    FUN_00f30e70(local_20,L"welcome",uVar1);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d0),&local_a0);
    FUN_019da050(&local_98,local_a0);
    uVar1 = FUN_00f2e9d0(&LAB_00f22a90,1,local_98);
    FUN_00f30e70(local_20,L"instructions",uVar1);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x710),&local_b0);
    FUN_019da050(&local_a8,local_b0);
    uVar1 = FUN_00f2e9d0(&LAB_00f22a90,1,local_a8);
    FUN_00f30e70(local_20,L"question",uVar1);
    FUN_00f2d1d0(local_20,&local_48);
    FUN_019da120(&local_b8,local_48);
    FUN_00414b50(&local_48,local_b8);
    (**(code **)(*local_28 + 0x78))(local_28,local_48);
  }
  else {
    (**(code **)(*local_28 + 0x78))(local_28,L"// Keep the file structure");
    (**(code **)(*local_28 + 0x78))(local_28,L"// Welcome");
    (**(code **)(*local_28 + 0x88))
              (local_28,*(undefined8 *)(*(longlong *)(param_1 + 0x6d8) + 0x4d8));
    if (local_res20 != '\0') {
      (**(code **)(*local_28 + 0x78))(local_28,0);
    }
    (**(code **)(*local_28 + 0x78))(local_28,L"// Instructions");
    (**(code **)(*local_28 + 0x88))
              (local_28,*(undefined8 *)(*(longlong *)(param_1 + 0x6d0) + 0x4d8));
    if (local_res20 != '\0') {
      (**(code **)(*local_28 + 0x78))(local_28,0);
    }
    (**(code **)(*local_28 + 0x78))(local_28,L"// Question");
    (**(code **)(*local_28 + 0x88))
              (local_28,*(undefined8 *)(*(longlong *)(param_1 + 0x710) + 0x4d8));
    if (local_res20 != '\0') {
      (**(code **)(*local_28 + 0x78))(local_28,0);
    }
  }
  (**(code **)(*local_28 + 0x100))(local_28,local_res10);
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00414480(&local_b8);
  FUN_00414480(&local_b0);
  FUN_00414480(&local_a8);
  FUN_00414480(&local_a0);
  FUN_00414480(&local_98);
  FUN_00414480(&local_90);
  FUN_00414480(&local_88);
  FUN_00414560(&local_70,7);
  FUN_00414480(&local_res10);
  return;
}

