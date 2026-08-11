/* Ghidra address: 00624610 */
/* Ghidra symbol: FUN_00624610 */


undefined8 FUN_00624610(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_004168e0(&local_10,param_2);
  uVar2 = FUN_00415f70(local_10);
  uVar1 = thunk_FUN_04147c79(uVar2,param_1);
  FUN_006245b0(uVar1);
  FUN_00414520(&local_10);
  return param_1;
}

