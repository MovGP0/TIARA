/* Ghidra address: 014c4a70 */
/* Ghidra symbol: FUN_014c4a70 */


void FUN_014c4a70(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  ulonglong uVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_10 = 0;
  local_18 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  cVar1 = FUN_014c4160(param_1);
  if (cVar1 != '\0') {
    FUN_014c1460(param_1,&local_20,local_res10);
    FUN_00416880(&local_28,local_20);
    FUN_014c1460(param_1,&local_30,local_res18);
    FUN_00416880(&local_38,local_30);
    uVar2 = 0;
    FUN_00416cd0(&local_10,6,*(undefined8 *)(param_1 + 8),L"ajaxfuncsgwt.php?func=outArduino",
                 L"&wid=",local_28,L"&output=",local_38);
    FUN_014c1800(param_1,local_10,&local_18,1,uVar2 & 0xffffffff00000000);
  }
  FUN_00414480(&local_38);
  FUN_004144d0(&local_30);
  FUN_00414480(&local_28);
  FUN_004144d0(&local_20);
  FUN_00414560(&local_18,2);
  FUN_00414560(&local_res10,2);
  return;
}

