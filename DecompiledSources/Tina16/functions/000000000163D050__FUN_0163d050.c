/* Ghidra address: 0163d050 */
/* Ghidra symbol: FUN_0163d050 */


void FUN_0163d050(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if ((*(char *)(param_1 + 0x139e9) != '\0') && (*(longlong *)(param_1 + 0x38) != 0)) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x1328);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_res10[0]);
  }
  FUN_00414480(local_res10);
  return;
}

