/* Ghidra address: 00b0d000 */
/* Ghidra symbol: FUN_00b0d000 */


undefined8 * FUN_00b0d000(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    FUN_00414520(param_1);
  }
  else {
    uVar2 = FUN_00415ab0(param_2);
    iVar1 = thunk_FUN_04139c29(param_3,0,uVar2,0xffffffff,0,0);
    FUN_00416660(param_1,iVar1 + -1);
    if (1 < iVar1) {
      uVar3 = FUN_00415f70(*param_1);
      thunk_FUN_04139c29(param_3,0,uVar2,0xffffffff,uVar3,iVar1 + -1);
    }
  }
  return param_1;
}

