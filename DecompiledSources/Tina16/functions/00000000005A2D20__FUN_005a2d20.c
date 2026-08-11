/* Ghidra address: 005a2d20 */
/* Ghidra symbol: FUN_005a2d20 */


undefined8 FUN_005a2d20(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_30 [32];
  undefined8 local_10;
  
  FUN_00417580(local_30,&DAT_0059bd38);
  local_10 = param_3;
  uVar1 = FUN_00417740(local_30,&DAT_0059bd38);
  FUN_00596440(param_1 + 8,local_10,uVar1);
  FUN_00417c40(param_2,local_30,&DAT_0059bd38);
  FUN_00417740(local_30,&DAT_0059bd38);
  return param_2;
}

