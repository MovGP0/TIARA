/* Ghidra address: 01647c50 */
/* Ghidra symbol: FUN_01647c50 */


bool FUN_01647c50(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0xb0))
                    (*(longlong **)(param_1 + 0x38),local_res10[0]);
  FUN_00414480(local_res10);
  return iVar1 != -1;
}

