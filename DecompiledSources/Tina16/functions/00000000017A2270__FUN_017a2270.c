/* Ghidra address: 017a2270 */
/* Ghidra symbol: FUN_017a2270 */


void FUN_017a2270(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00416ba0(&local_10,*(undefined8 *)(param_1 + 0x788),L"tina.ini");
  uVar1 = FUN_005da0f0(&PTR_FUN_005d5a90,1,local_10);
  *(undefined8 *)(param_1 + 0x790) = uVar1;
  uVar1 = FUN_0065f300(&PTR_FUN_00643358,1,param_1);
  *(undefined8 *)(param_1 + 0x780) = uVar1;
  FUN_00414480(&local_10);
  return;
}

