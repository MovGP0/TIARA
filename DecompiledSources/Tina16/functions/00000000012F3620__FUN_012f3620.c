/* Ghidra address: 012f3620 */
/* Ghidra symbol: FUN_012f3620 */


void FUN_012f3620(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  FUN_0064dd90(param_1,&local_10);
  FUN_00414ad0(param_1 + 0xaa0,local_10);
  FUN_00416cd0(&local_18,3,*(undefined8 *)PTR_DAT_02005010,&DAT_012f3724,L"TINA.INI");
  uVar1 = FUN_005da0f0(&PTR_FUN_005d5a90,1,local_18);
  *(undefined8 *)(param_1 + 0xa98) = uVar1;
  *(undefined4 *)(param_1 + 0xac0) = 1;
  uVar1 = FUN_012dddd0(&DAT_012dd608,1);
  *(undefined8 *)(param_1 + 0xac8) = uVar1;
  *(undefined8 *)(param_1 + 0xb00) = 0;
  FUN_00414480(&local_18);
  FUN_00414480(&local_10);
  return;
}

