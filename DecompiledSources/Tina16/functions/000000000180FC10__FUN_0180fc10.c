/* Ghidra address: 0180fc10 */
/* Ghidra symbol: FUN_0180fc10 */


undefined8 FUN_0180fc10(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  FUN_004169f0(local_20,0x104);
  uVar2 = FUN_00414de0(local_20);
  uVar1 = thunk_FUN_0418dd92(0x104,uVar2);
  FUN_004169f0(local_20,uVar1);
  FUN_004169f0(&local_28,0x104);
  uVar2 = FUN_00414de0(local_20);
  uVar3 = FUN_00414de0(&local_28);
  thunk_FUN_041b7910(uVar2,&LAB_0180fcec,0,uVar3);
  uVar2 = FUN_00414de0(&local_28);
  FUN_00442b00(param_1,uVar2);
  FUN_00414560(&local_28,2);
  return param_1;
}

