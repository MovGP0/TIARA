/* Ghidra address: 01c1e370 */
/* Ghidra symbol: FUN_01c1e370 */


undefined8 FUN_01c1e370(undefined8 param_1,undefined8 *param_2,undefined2 param_3)

{
  ushort uVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00416780(local_20,param_3);
  uVar1 = FUN_004170c0(local_20[0],*param_2,1);
  if (uVar1 == 0) {
    FUN_00414ad0(param_1,*param_2);
    FUN_00414480(param_2);
  }
  else {
    FUN_00416dc0(param_1,*param_2,1,uVar1 - 1);
    FUN_00416e20(param_2,1,(uint)uVar1);
  }
  FUN_00414480(local_20);
  return param_1;
}

