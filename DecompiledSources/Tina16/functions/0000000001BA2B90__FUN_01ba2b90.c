/* Ghidra address: 01ba2b90 */
/* Ghidra symbol: FUN_01ba2b90 */


undefined8 FUN_01ba2b90(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00414b50(&local_10,L"Status: ");
  iVar1 = *(int *)(param_1 + 0x9ac);
  if (iVar1 == 0) {
    FUN_00416ad0(&local_10,L"starting...");
  }
  else if (iVar1 == 4) {
    FUN_00416ad0(&local_10,L"thinking...");
  }
  else if (iVar1 == 1) {
    FUN_00416ad0(&local_10,L"you move");
  }
  else if (iVar1 == 7) {
    FUN_00416ad0(&local_10,L"black mates");
  }
  else if (iVar1 == 8) {
    FUN_00416ad0(&local_10,L"white mates");
  }
  else if (iVar1 == 6) {
    FUN_00416ad0(&local_10,L"draw");
  }
  FUN_00414ad0(param_2,local_10);
  FUN_00414480(&local_10);
  return param_2;
}

