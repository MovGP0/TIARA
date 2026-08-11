/* Ghidra address: 01768f80 */
/* Ghidra symbol: FUN_01768f80 */


void FUN_01768f80(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414ad0(param_1 + 0x30,local_res10[0]);
  uVar1 = FUN_00448ed0();
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  FUN_00414480(local_res10);
  return;
}

