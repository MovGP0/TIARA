/* Ghidra address: 014c46b0 */
/* Ghidra symbol: FUN_014c46b0 */


char FUN_014c46b0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  FUN_00416ba0(&local_10,*(undefined8 *)(param_1 + 8),L"ajaxfuncsgwt.php?func=logout");
  cVar1 = FUN_014c1800(param_1,local_10,&local_18,1,0);
  if (cVar1 != '\0') {
    FUN_0041ddd0(&local_20,&PTR_PTR_014c46a0);
    FUN_0072d440(local_20,2,4,0);
  }
  uVar2 = FUN_014bdce0(&PTR_FUN_014bcbd8);
  FUN_014bf0f0(uVar2);
  uVar2 = FUN_014bca40(&PTR_FUN_014bc4a8);
  FUN_014bca80(uVar2);
  FUN_00414560(&local_20,3);
  return cVar1;
}

