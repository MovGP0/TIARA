/* Ghidra address: 007aa490 */
/* Ghidra symbol: FUN_007aa490 */


undefined8 FUN_007aa490(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_28 [24];
  undefined8 local_10;
  
  FUN_00417580(local_28,&DAT_0076f818);
  local_10 = param_3;
  uVar1 = FUN_00417740(local_28,&DAT_0076f818);
  FUN_00596440(param_1 + 8,local_10,uVar1);
  FUN_00417c40(param_2,local_28,&DAT_0076f818);
  FUN_00417740(local_28,&DAT_0076f818);
  return param_2;
}

