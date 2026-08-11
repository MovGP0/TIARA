/* Ghidra address: 0084bcc0 */
/* Ghidra symbol: FUN_0084bcc0 */


undefined4 FUN_0084bcc0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_0041b910(param_2);
  uVar1 = FUN_0084b6a0(*(undefined8 *)(param_1 + 8),local_res10[0]);
  FUN_0041b800(local_res10);
  return uVar1;
}

