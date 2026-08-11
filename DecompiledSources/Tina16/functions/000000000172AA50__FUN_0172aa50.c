/* Ghidra address: 0172aa50 */
/* Ghidra symbol: FUN_0172aa50 */


undefined4 FUN_0172aa50(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 local_res10 [3];
  undefined4 local_1c;
  undefined4 local_c;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x1c0) + 0x30);
  cVar2 = (**(code **)(*plVar1 + 0x140))(plVar1,local_res10[0],&local_c);
  if (cVar2 == '\0') {
    local_1c = 0x4e4;
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x1c0) + 0x30);
    local_1c = (**(code **)(*plVar1 + 0x30))(plVar1,local_c);
  }
  FUN_00414480(local_res10);
  return local_1c;
}

