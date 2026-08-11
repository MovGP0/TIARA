/* Ghidra address: 01335870 */
/* Ghidra symbol: FUN_01335870 */


void FUN_01335870(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_58 = 0;
  local_50 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b0),&local_10);
  FUN_00414ad0(param_1 + 0x6f8,local_10);
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),1,*(undefined4 *)(param_1 + 0x98));
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),2,*(undefined4 *)(param_1 + 0x9c));
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),3,*(undefined4 *)(param_1 + 0x98));
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x700) = uVar1;
  FUN_0041ddd0(&local_18,&PTR_PTR_01335418);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6c0),0,0,local_18);
  FUN_0041ddd0(&local_20,&PTR_PTR_01335428);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6c0),1,0,local_20);
  FUN_0041ddd0(&local_28,&PTR_PTR_01335438);
  FUN_00416ad0(&local_28,L" (W)");
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6c0),2,0,local_28);
  FUN_0041ddd0(&local_30,&PTR_PTR_01335448);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6c0),3,0,local_30);
  FUN_0041ddd0(&local_40,&PTR_PTR_01335478);
  FUN_0041ddd0(&local_48,&PTR_PTR_01335488);
  FUN_00416cd0(&local_38,3,local_40,&DAT_01335ba4,local_48);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6c0),4,0,local_38);
  FUN_0041ddd0(&local_50,&PTR_PTR_01335458);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6c0),5,0,local_50);
  FUN_0041ddd0(&local_58,&PTR_PTR_01335468);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6c0),6,0,local_58);
  FUN_00419260(param_1 + 0x708,&DAT_01334858,1,
               (longlong)*(int *)(*(longlong *)(param_1 + 0x6c0) + 0x4a4));
  FUN_00414560(&local_58,9);
  FUN_00414480(&local_10);
  return;
}

