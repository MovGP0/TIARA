/* Ghidra address: 0180fb80 */
/* Ghidra symbol: FUN_0180fb80 */


undefined8 FUN_0180fb80(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_004169f0(&local_10,0x104);
  uVar2 = FUN_00414de0(&local_10);
  uVar1 = thunk_FUN_0418dd92(0x104,uVar2);
  FUN_004169f0(&local_10,uVar1);
  uVar2 = FUN_00414de0(&local_10);
  FUN_00442b00(param_1,uVar2);
  FUN_00414480(&local_10);
  return param_1;
}

