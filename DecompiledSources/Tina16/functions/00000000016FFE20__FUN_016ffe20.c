/* Ghidra address: 016ffe20 */
/* Ghidra symbol: FUN_016ffe20 */


undefined8 FUN_016ffe20(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  *(undefined4 *)(param_1 + 0xbc) = 1;
  uVar1 = FUN_016ffc70(param_1,local_res10[0]);
  FUN_00414480(local_res10);
  return uVar1;
}

