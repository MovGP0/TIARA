/* Ghidra address: 0089fd80 */
/* Ghidra symbol: FUN_0089fd80 */


undefined8 * FUN_0089fd80(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_004169f0(param_1,0x104);
  uVar2 = FUN_00416740(*param_1);
  iVar1 = thunk_FUN_0418dd92(0x104,uVar2);
  if (iVar1 < 1) {
    FUN_00414480(param_1);
  }
  else {
    FUN_004169f0(param_1,iVar1);
    FUN_00877b10(&local_10,*param_1);
    FUN_00414ad0(param_1,local_10);
  }
  FUN_00414480(&local_10);
  return param_1;
}

