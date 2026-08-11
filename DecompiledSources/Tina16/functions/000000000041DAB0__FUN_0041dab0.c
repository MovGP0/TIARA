/* Ghidra address: 0041dab0 */
/* Ghidra symbol: FUN_0041dab0 */


undefined8 FUN_0041dab0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = 0;
  FUN_00414480(param_1);
  if (param_2 != 0) {
    iVar1 = 0;
    if (param_2 != 0) {
      iVar1 = *(int *)(param_2 + -4);
    }
    FUN_004169f0(&local_20,iVar1);
    uVar2 = FUN_00416740(local_20);
    uVar3 = FUN_00415ab0(param_2);
    iVar1 = FUN_0041d770(uVar2,iVar1 + 1,uVar3,iVar1);
    if (iVar1 < 1) {
      FUN_00414480(&local_20);
    }
    else {
      FUN_004169f0(&local_20,iVar1 + -1);
    }
    FUN_00414ad0(param_1,local_20);
  }
  FUN_00414480(&local_20);
  return param_1;
}

