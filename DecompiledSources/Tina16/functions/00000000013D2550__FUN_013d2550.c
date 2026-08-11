/* Ghidra address: 013d2550 */
/* Ghidra symbol: FUN_013d2550 */


void FUN_013d2550(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414ad0(param_1 + 8,local_res10[0]);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  *(longlong **)(param_1 + 0x28) = param_4;
  plVar3 = (longlong *)FUN_006d6380(param_3);
  (**(code **)(*plVar3 + 0x78))(plVar3,local_res10[0]);
  *(undefined1 *)(param_1 + 0x10) = 1;
  iVar1 = (**(code **)(*param_4 + 0x20))(param_4);
  iVar2 = (**(code **)(*param_4 + 0x28))(param_4);
  if (iVar1 <= iVar2) {
    iVar1 = (**(code **)(*param_4 + 0x20))(param_4);
    (**(code **)(*param_4 + 0x50))(param_4,iVar1 + 0x32);
  }
  (**(code **)(*param_4 + 0x80))(param_4,local_res10[0],param_1);
  FUN_00414480(local_res10);
  return;
}

