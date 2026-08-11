/* Ghidra address: 014c4160 */
/* Ghidra symbol: FUN_014c4160 */


undefined1 FUN_014c4160(longlong param_1)

{
  undefined1 uVar1;
  ulonglong uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  uVar2 = 0;
  FUN_00416cd0(&local_10,3,*(undefined8 *)(param_1 + 8),L"ajaxfuncsgwt.php?",L"func=getAuthUser");
  FUN_014c1800(param_1,local_10,&local_18,0,uVar2 & 0xffffffff00000000);
  uVar1 = FUN_005b83d0(local_18,L"loggedIn(");
  FUN_00414560(&local_18,2);
  return uVar1;
}

