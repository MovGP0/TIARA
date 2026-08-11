/* Ghidra address: 00453860 */
/* Ghidra symbol: FUN_00453860 */


undefined8 FUN_00453860(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(*param_2 + -0x60))(param_2,local_20);
  uVar1 = FUN_00453060(param_1,local_20[0]);
  FUN_00414480(local_20);
  return uVar1;
}

