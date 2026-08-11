/* Ghidra address: 01337150 */
/* Ghidra symbol: FUN_01337150 */


int FUN_01337150(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  int local_c;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  for (local_c = 0; local_c < 3; local_c = local_c + 1) {
    iVar1 = FUN_00416db0(*(undefined8 *)(&DAT_01f35a10 + (longlong)local_c * 8),local_res10[0]);
    if (iVar1 == 0) break;
  }
  FUN_00414480(local_res10);
  return local_c;
}

