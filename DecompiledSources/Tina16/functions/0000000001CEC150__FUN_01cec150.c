/* Ghidra address: 01cec150 */
/* Ghidra symbol: FUN_01cec150 */


void FUN_01cec150(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_01ae5ef0(param_2,local_res18[0]);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10));
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))(*(longlong **)(param_1 + 0x10));
  if (iVar1 <= iVar2) {
    plVar3 = *(longlong **)(param_1 + 0x10);
    iVar1 = (**(code **)(*plVar3 + 0x20))(plVar3);
    (**(code **)(*plVar3 + 0x50))(plVar3,iVar1 + 0x32);
  }
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x80))
            (*(longlong **)(param_1 + 0x10),local_res18[0],param_2);
  plVar3 = (longlong *)FUN_006d6380(param_4);
  (**(code **)(*plVar3 + 0x78))(plVar3,local_res18[0]);
  *(undefined1 *)(param_1 + 0x40) = 1;
  FUN_00414480(local_res18);
  return;
}

