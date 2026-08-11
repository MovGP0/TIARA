/* Ghidra address: 012ddf90 */
/* Ghidra symbol: FUN_012ddf90 */


void FUN_012ddf90(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  cVar1 = FUN_00440a20(local_res10[0],1);
  if ((cVar1 != '\0') && (local_res10[0] != 0)) {
    FUN_012ddec0(param_1);
    FUN_012ddf50(param_1);
    (**(code **)(**(longlong **)(param_1 + 8) + 0xd8))(*(longlong **)(param_1 + 8),local_res10[0]);
    FUN_012de0f0(param_1);
  }
  FUN_00414480(local_res10);
  return;
}

