/* Ghidra address: 01784c80 */
/* Ghidra symbol: FUN_01784c80 */


void FUN_01784c80(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00416ba0(&local_10,*(undefined8 *)(param_1 + 0x728),L"tina.ini");
  uVar1 = FUN_005da0f0(&PTR_FUN_005d5a90,1,local_10);
  *(undefined8 *)(param_1 + 0x730) = uVar1;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x738) = uVar1;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x740) = uVar1;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x748) = uVar1;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x750) = uVar1;
  FUN_01784e00(param_1,param_2);
  FUN_00414480(&local_10);
  return;
}

