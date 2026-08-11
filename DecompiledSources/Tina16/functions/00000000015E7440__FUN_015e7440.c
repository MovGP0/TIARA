/* Ghidra address: 015e7440 */
/* Ghidra symbol: FUN_015e7440 */


void FUN_015e7440(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  uVar1 = FUN_01099960(*(undefined8 *)(param_1 + 0x748),local_res10[0]);
  FUN_00c03380(*(undefined8 *)(param_1 + 0x710),uVar1);
  FUN_00414480(local_res10);
  return;
}

