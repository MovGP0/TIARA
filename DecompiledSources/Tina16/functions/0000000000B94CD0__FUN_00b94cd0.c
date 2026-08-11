/* Ghidra address: 00b94cd0 */
/* Ghidra symbol: FUN_00b94cd0 */


undefined4 FUN_00b94cd0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 local_20 [2];
  undefined1 local_10 [8];
  
  local_20[0] = 0;
  FUN_00415460(local_20,param_2,0);
  FUN_00428ae0(param_1,local_20[0],param_3,local_10);
  uVar1 = FUN_00b94c80(local_10);
  FUN_004144d0(local_20);
  return uVar1;
}

