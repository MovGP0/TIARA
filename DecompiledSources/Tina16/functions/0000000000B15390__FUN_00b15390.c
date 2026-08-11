/* Ghidra address: 00b15390 */
/* Ghidra symbol: FUN_00b15390 */


undefined8 * FUN_00b15390(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    FUN_00414520(param_1);
  }
  else {
    uVar2 = FUN_00415ab0(param_2);
    iVar1 = thunk_FUN_04139c29(DAT_020147d8,0,uVar2,0xffffffff,0,0);
    if (iVar1 < 2) {
      FUN_00414520(param_1);
    }
    else {
      FUN_00416660(param_1,iVar1 + -1);
      uVar3 = FUN_00415f70(*param_1);
      thunk_FUN_04139c29(DAT_020147d8,0,uVar2,0xffffffff,uVar3,iVar1);
    }
  }
  return param_1;
}

