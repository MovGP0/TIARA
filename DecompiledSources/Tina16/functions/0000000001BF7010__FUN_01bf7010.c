/* Ghidra address: 01bf7010 */
/* Ghidra symbol: FUN_01bf7010 */


void FUN_01bf7010(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  *(undefined8 *)(param_1 + 0x110) = 0;
  FUN_00414ad0(param_1 + 0xe8,local_res10[0]);
  lVar1 = FUN_01bf7160(param_1,local_res10[0]);
  if (lVar1 != 0) {
    FUN_00410f20(lVar1);
  }
  FUN_00414480(local_res10);
  return;
}

