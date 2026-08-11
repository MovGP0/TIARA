/* Ghidra address: 008b8800 */
/* Ghidra symbol: FUN_008b8800 */


void FUN_008b8800(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_20 [2];
  
  local_20[0] = param_2;
  iVar1 = FUN_00596a10(param_1[3] + 8,local_20);
  if (iVar1 == -1) {
    (**(code **)(*param_1 + 200))(param_1,&PTR_FUN_008b4150);
  }
  return;
}

