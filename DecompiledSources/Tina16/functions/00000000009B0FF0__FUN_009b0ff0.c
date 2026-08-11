/* Ghidra address: 009b0ff0 */
/* Ghidra symbol: FUN_009b0ff0 */


undefined8 FUN_009b0ff0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_28 [24];
  undefined8 local_10;
  
  FUN_00417580(local_28,&DAT_009428e8);
  local_10 = param_3;
  uVar1 = FUN_00417740(local_28,&DAT_009428e8);
  FUN_00596440(param_1 + 8,local_10,uVar1);
  FUN_00417c40(param_2,local_28,&DAT_009428e8);
  FUN_00417740(local_28,&DAT_009428e8);
  return param_2;
}

