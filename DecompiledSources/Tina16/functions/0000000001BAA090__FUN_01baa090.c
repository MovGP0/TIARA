/* Ghidra address: 01baa090 */
/* Ghidra symbol: FUN_01baa090 */


undefined4 FUN_01baa090(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 local_res10 [3];
  undefined4 local_1c;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  plVar2 = *(longlong **)(param_1 + 0x18);
  iVar1 = (**(code **)(*plVar2 + 0xb0))(plVar2,local_res10[0]);
  if (iVar1 == -1) {
    local_1c = 0;
  }
  else {
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x30))(plVar2,iVar1);
    local_1c = (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  FUN_00414480(local_res10);
  return local_1c;
}

