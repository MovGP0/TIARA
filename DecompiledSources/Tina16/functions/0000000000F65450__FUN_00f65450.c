/* Ghidra address: 00f65450 */
/* Ghidra symbol: FUN_00f65450 */


void FUN_00f65450(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00f74f10(*(undefined8 *)(param_1 + 0x48),0x20);
  lVar1 = FUN_00f75200(*(undefined8 *)(param_1 + 0x48),local_res10[0]);
  if (lVar1 != 0) {
    FUN_00f6f900(lVar1,0x20);
  }
  FUN_00414480(local_res10);
  return;
}

