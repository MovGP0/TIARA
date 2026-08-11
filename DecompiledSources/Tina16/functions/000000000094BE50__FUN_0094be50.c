/* Ghidra address: 0094be50 */
/* Ghidra symbol: FUN_0094be50 */


void FUN_0094be50(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *local_20 [2];
  
  local_20[0] = param_2;
  FUN_005974f0(*(longlong *)(param_1 + 8) + 8,local_20);
  cVar1 = (**(code **)(*param_2 + 0x168))(param_2);
  if (cVar1 == '\x02') {
    lVar2 = FUN_004113f0(param_2,&PTR_FUN_00909bd0);
    *(undefined8 *)(lVar2 + 0xa0) = 0;
  }
  return;
}

