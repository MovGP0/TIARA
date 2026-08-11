/* Ghidra address: 012c47d0 */
/* Ghidra symbol: FUN_012c47d0 */


void FUN_012c47d0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),1,*(undefined4 *)(param_1 + 0x98));
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),3,*(undefined4 *)(param_1 + 0x98));
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),2,*(undefined4 *)(param_1 + 0x9c));
  FUN_0064dd90(param_1,&local_10);
  FUN_00414ad0(param_1 + 0x978,local_10);
  FUN_00416cd0(&local_18,3,*(undefined8 *)PTR_DAT_02005010,&DAT_012c4964,L"TINA.INI");
  uVar1 = FUN_005da0f0(&PTR_FUN_005d5a90,1,local_18);
  *(undefined8 *)(param_1 + 0x958) = uVar1;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x960) = uVar1;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x968) = uVar1;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x970) = uVar1;
  *(undefined4 *)(param_1 + 0x994) = 1;
  FUN_00414480(&local_18);
  FUN_00414480(&local_10);
  return;
}

