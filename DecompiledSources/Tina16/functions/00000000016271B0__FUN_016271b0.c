/* Ghidra address: 016271b0 */
/* Ghidra symbol: FUN_016271b0 */


void FUN_016271b0(longlong *param_1,undefined4 param_2,int param_3,longlong param_4)

{
  int iVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  (**(code **)(*param_1 + 0x208))(param_1,param_2,param_3,0);
  FUN_0043f750(local_20,param_3);
  iVar1 = (**(code **)(**(longlong **)(param_4 + 200) + 0xb0))
                    (*(longlong **)(param_4 + 200),local_20[0]);
  if (iVar1 == -1) {
    FUN_0043f750(&local_28,param_3);
    (**(code **)(**(longlong **)(param_4 + 200) + 0x78))(*(longlong **)(param_4 + 200),local_28);
  }
  if (*(int *)(param_4 + 0x70) < param_3) {
    *(int *)(param_4 + 0x70) = param_3;
  }
  FUN_00414560(&local_28,2);
  return;
}

