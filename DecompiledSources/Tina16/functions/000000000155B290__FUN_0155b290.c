/* Ghidra address: 0155b290 */
/* Ghidra symbol: FUN_0155b290 */


void FUN_0155b290(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  (**(code **)(**(longlong **)(param_1 + 0x990) + 0x78))
            (*(longlong **)(param_1 + 0x990),local_res10[0]);
  if (param_3 != '\0') {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x990) + 0x28))(*(longlong **)(param_1 + 0x990));
    *(int *)(param_1 + 0x7ec) = iVar1 + -1;
  }
  FUN_00414480(local_res10);
  return;
}

