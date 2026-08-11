/* Ghidra address: 01807bd0 */
/* Ghidra symbol: FUN_01807bd0 */


undefined8 * FUN_01807bd0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_00414520(param_1);
  if (param_4 == 0) {
    param_4 = FUN_01807b80(param_3);
  }
  uVar1 = FUN_00414cd0(param_2);
  uVar3 = FUN_00415ab0(param_2);
  iVar2 = thunk_FUN_04139c29(param_4,0,uVar3,uVar1,0,0);
  if (iVar2 != 0) {
    FUN_00416660(param_1,iVar2);
    uVar4 = FUN_00415f70(*param_1);
    thunk_FUN_04139c29(param_4,0,uVar3,uVar1,uVar4,iVar2);
  }
  return param_1;
}

