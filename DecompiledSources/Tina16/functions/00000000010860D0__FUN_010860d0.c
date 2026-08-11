/* Ghidra address: 010860d0 */
/* Ghidra symbol: FUN_010860d0 */


void FUN_010860d0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  undefined8 local_10;
  
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_01086170(param_1,&local_10);
  iVar1 = FUN_00416db0(local_res10[0],local_10);
  if (iVar1 != 0) {
    FUN_01085110(param_1,local_res10[0],0xffffffff);
  }
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return;
}

