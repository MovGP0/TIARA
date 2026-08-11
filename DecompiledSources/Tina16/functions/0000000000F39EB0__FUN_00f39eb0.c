/* Ghidra address: 00f39eb0 */
/* Ghidra symbol: FUN_00f39eb0 */


undefined8 FUN_00f39eb0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_20 [16];
  undefined8 local_10;
  
  FUN_00417580(local_20,&DAT_00f25ec0);
  local_10 = param_3;
  uVar1 = FUN_00417740(local_20,&DAT_00f25ec0);
  FUN_00596440(param_1 + 8,local_10,uVar1);
  FUN_00417c40(param_2,local_20,&DAT_00f25ec0);
  FUN_00417740(local_20,&DAT_00f25ec0);
  return param_2;
}

