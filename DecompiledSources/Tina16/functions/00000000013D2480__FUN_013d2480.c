/* Ghidra address: 013d2480 */
/* Ghidra symbol: FUN_013d2480 */


void FUN_013d2480(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_01ae5ef0(param_2,local_res18[0]);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))(*(longlong **)(param_1 + 0x18));
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))(*(longlong **)(param_1 + 0x18));
  if (iVar2 <= iVar3) {
    plVar1 = *(longlong **)(param_1 + 0x18);
    iVar2 = (**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x50))(plVar1,iVar2 + 0x32);
  }
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x80))
            (*(longlong **)(param_1 + 0x18),local_res18[0],param_2);
  *(undefined1 *)(param_1 + 0x10) = 1;
  FUN_00414480(local_res18);
  return;
}

