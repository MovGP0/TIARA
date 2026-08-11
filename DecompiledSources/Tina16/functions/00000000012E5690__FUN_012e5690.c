/* Ghidra address: 012e5690 */
/* Ghidra symbol: FUN_012e5690 */


bool FUN_012e5690(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x10),local_res10[0]);
  FUN_00414480(local_res10);
  return iVar1 == 0;
}

