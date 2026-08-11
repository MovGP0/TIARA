/* Ghidra address: 012c4ea0 */
/* Ghidra symbol: FUN_012c4ea0 */


void FUN_012c4ea0(longlong param_1)

{
  char cVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00724420(*(undefined8 *)(param_1 + 0x948),*(undefined8 *)PTR_DAT_02005010);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x948) + 0xa8))(*(longlong **)(param_1 + 0x948));
  if (cVar1 != '\0') {
    FUN_012c7130(param_1);
    FUN_00724270(*(undefined8 *)(param_1 + 0x948),local_20);
    FUN_012c7e70(param_1,local_20[0]);
    (**(code **)(**(longlong **)(param_1 + 0x710) + 0x128))(*(longlong **)(param_1 + 0x710),1);
    (**(code **)(**(longlong **)(param_1 + 0x720) + 0x128))(*(longlong **)(param_1 + 0x720),1);
    (**(code **)(**(longlong **)(param_1 + 0x738) + 0x128))(*(longlong **)(param_1 + 0x738),1);
  }
  FUN_00414480(local_20);
  return;
}

