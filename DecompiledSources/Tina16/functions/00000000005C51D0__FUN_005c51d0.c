/* Ghidra address: 005c51d0 */
/* Ghidra symbol: FUN_005c51d0 */


undefined8 FUN_005c51d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_48 [56];
  undefined8 local_10;
  
  FUN_00417580(local_48,&DAT_005bc868);
  local_10 = param_3;
  uVar1 = FUN_00417740(local_48,&DAT_005bc868);
  FUN_00596440(param_1 + 8,local_10,uVar1);
  FUN_00417c40(param_2,local_48,&DAT_005bc868);
  FUN_00417740(local_48,&DAT_005bc868);
  return param_2;
}

