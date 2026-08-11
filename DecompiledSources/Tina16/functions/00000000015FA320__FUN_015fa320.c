/* Ghidra address: 015fa320 */
/* Ghidra symbol: FUN_015fa320 */


void FUN_015fa320(undefined8 *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00414b50(&local_10,*param_1);
  cVar1 = FUN_015fa190(*param_1);
  if (cVar1 != '\0') {
    if (param_2 == 2) {
      uVar2 = FUN_015fa280(*param_1);
      FUN_0043f750(&local_10,uVar2);
    }
    else if (param_2 == 0) {
      uVar2 = FUN_015fa280(*param_1);
      FUN_0043fba0(&local_10,uVar2,param_3);
    }
  }
  FUN_00414ad0(param_1,local_10);
  FUN_00414480(&local_10);
  return;
}

