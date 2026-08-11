/* Ghidra address: 013ace60 */
/* Ghidra symbol: FUN_013ace60 */


undefined8 FUN_013ace60(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  uVar1 = FUN_00414480(local_20);
  uVar2 = FUN_00414480(&local_28);
  FUN_013acf20(param_2,uVar1,uVar2);
  FUN_00416cd0(param_1,3,local_20[0],&DAT_013acf18,local_28);
  FUN_00414560(&local_28,2);
  return param_1;
}

