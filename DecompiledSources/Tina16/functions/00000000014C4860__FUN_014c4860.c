/* Ghidra address: 014c4860 */
/* Ghidra symbol: FUN_014c4860 */


void FUN_014c4860(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_28 = 0;
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  cVar1 = FUN_014c4160(param_1);
  if (cVar1 != '\0') {
    FUN_014c47f0(param_1);
    FUN_014c1460(param_1,local_20,local_res10[0]);
    FUN_00416880(&local_28,local_20[0]);
    FUN_00416cd0(&local_10,4,*(undefined8 *)(param_1 + 8),L"ajaxfuncsgwt.php?func=inArduino",
                 L"&wid=",local_28);
    uVar2 = FUN_00618bb0(&PTR_FUN_006179c0,1);
    *(undefined8 *)(param_1 + 0x40) = uVar2;
    uVar2 = FUN_014c4cc0(&PTR_FUN_014c0558,1,local_10,uVar2);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
  }
  FUN_00414480(&local_28);
  FUN_004144d0(local_20);
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return;
}

