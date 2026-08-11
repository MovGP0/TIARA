/* Ghidra address: 004fdcc0 */
/* Ghidra symbol: FUN_004fdcc0 */


undefined8 FUN_004fdcc0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_20 [16];
  undefined8 local_10;
  
  FUN_00417580(local_20,&DAT_004a5608);
  local_10 = param_3;
  uVar1 = FUN_00417740(local_20,&DAT_004a5608);
  FUN_00596440(param_1 + 8,local_10,uVar1);
  FUN_00417c40(param_2,local_20,&DAT_004a5608);
  FUN_00417740(local_20,&DAT_004a5608);
  return param_2;
}

