/* Ghidra address: 00bd18b0 */
/* Ghidra symbol: FUN_00bd18b0 */


undefined8 * FUN_00bd18b0(undefined8 *param_1,longlong param_2,undefined2 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if (param_2 != 0) {
    uVar4 = *(undefined4 *)(param_2 + -4);
  }
  uVar2 = FUN_00415ab0(param_2);
  uVar1 = thunk_FUN_04139c29(param_3,0,uVar2,uVar4,0,0);
  FUN_004169f0(param_1,uVar1);
  uVar3 = FUN_00416740(*param_1);
  thunk_FUN_04139c29(param_3,0,uVar2,uVar4,uVar3,uVar1);
  return param_1;
}

