/* Ghidra address: 016479d0 */
/* Ghidra symbol: FUN_016479d0 */


bool FUN_016479d0(longlong param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xb0))
                    (*(longlong **)(param_1 + 0x28),local_res10[0]);
  *param_3 = iVar1;
  iVar1 = *param_3;
  FUN_00414480(local_res10);
  return iVar1 != -1;
}

