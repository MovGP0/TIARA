/* Ghidra address: 019b0ff0 */
/* Ghidra symbol: FUN_019b0ff0 */


undefined8 FUN_019b0ff0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_30 [32];
  undefined8 local_10;
  
  FUN_00417580(local_30,&DAT_01984be0);
  local_10 = param_3;
  uVar1 = FUN_00417740(local_30,&DAT_01984be0);
  FUN_00596440(param_1 + 8,local_10,uVar1);
  FUN_00417c40(param_2,local_30,&DAT_01984be0);
  FUN_00417740(local_30,&DAT_01984be0);
  return param_2;
}

