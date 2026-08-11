/* Ghidra address: 005b8540 */
/* Ghidra symbol: FUN_005b8540 */


bool FUN_005b8540(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_10;
  
  local_10 = 0;
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + -4);
  }
  FUN_00416dc0(&local_10,param_2,1,uVar1);
  iVar2 = FUN_0043e650(param_1,local_10);
  FUN_00414480(&local_10);
  return iVar2 == 0;
}

