/* Ghidra address: 00f7d200 */
/* Ghidra symbol: FUN_00f7d200 */


void FUN_00f7d200(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xb0))
                    (*(longlong **)(param_1 + 0x28),local_res10[0]);
  if (iVar2 != -1) {
    plVar1 = *(longlong **)(param_1 + 0x28);
    uVar3 = (**(code **)(*plVar1 + 0xb0))(plVar1,local_res10[0]);
    (**(code **)(*plVar1 + 0x98))(plVar1,uVar3);
  }
  FUN_00414480(local_res10);
  return;
}

