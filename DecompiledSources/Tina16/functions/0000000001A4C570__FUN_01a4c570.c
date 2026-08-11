/* Ghidra address: 01a4c570 */
/* Ghidra symbol: FUN_01a4c570 */


undefined8 FUN_01a4c570(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  int local_64;
  int local_58;
  int local_54;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_70 = auStack_c8;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  FUN_00416ba0(&local_50,*(undefined8 *)PTR_DAT_020049a0,L"\\Examples\\");
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00416ba0(&local_30,*(undefined8 *)PTR_DAT_020049a0,L"\\Examples\\Design Tool");
  FUN_00416ba0(&local_78,local_30,L"\\*.tsc");
  local_20 = (longlong *)FUN_01603790(local_78,0x20);
  FUN_00414b50(&local_38,L"Test\\Meals\\French fries.tsc");
  FUN_01a3cd10(&local_80,local_38);
  (**(code **)(*local_28 + 0x78))(local_28,local_80);
  FUN_00414b50(&local_38,L"Test\\Dogs\\Pitbull.tsc");
  FUN_01a3cd10(&local_88,local_38);
  (**(code **)(*local_28 + 0x78))(local_28,local_88);
  FUN_00414b50(&local_38,L"Test\\Oscillators\\555 Astable Oscillator.tsc");
  FUN_01a3cd10(&local_90,local_38);
  (**(code **)(*local_28 + 0x78))(local_28,local_90);
  iVar1 = (**(code **)(*local_20 + 0x28))();
  local_54 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*local_20 + 0x18))(local_20,&local_40,local_54);
      local_58 = FUN_004170c0(local_50,local_40,1);
      local_64 = 0;
      if (local_50 != 0) {
        local_64 = *(int *)(local_50 + -4);
      }
      FUN_00416dc0(&local_38,local_40,local_58 + local_64,0x400);
      local_a8 = &LAB_01a4ca54;
      FUN_00416cd0(&local_38,3,&LAB_01a4ca54,local_38);
      (**(code **)(*local_28 + 0x78))(local_28,local_38);
      local_54 = local_54 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_004b37d0(local_28,&local_48);
  FUN_00414ad0(param_2,local_48);
  if (local_20 != (longlong *)0x0) {
    FUN_00410f20(local_20);
  }
  FUN_00410f20(local_28);
  FUN_00414560(&local_90,4);
  FUN_00414560(&local_50,5);
  return param_2;
}

