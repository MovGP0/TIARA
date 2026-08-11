/* Ghidra address: 01084e70 */
/* Ghidra symbol: FUN_01084e70 */


void FUN_01084e70(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  plVar2 = (longlong *)FUN_006d6380(*(undefined8 *)(param_1 + 0x7d8));
  iVar1 = (**(code **)(*plVar2 + 0xb0))(plVar2,local_res10[0]);
  if (iVar1 == -1) {
    plVar2 = (longlong *)FUN_006d6380(*(undefined8 *)(param_1 + 0x7d8));
    (**(code **)(*plVar2 + 0x78))(plVar2,local_res10[0]);
    plVar2 = *(longlong **)(param_1 + 0x7d8);
    plVar3 = (longlong *)FUN_006d6380(plVar2);
    iVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    (**(code **)(*plVar2 + 0x278))(plVar2,iVar1 + -1);
    uVar4 = FUN_0107a3c0(param_1,local_res10[0]);
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0xb98),uVar4);
    plVar2 = (longlong *)FUN_006d6380(*(undefined8 *)(param_1 + 0x7d8));
    iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
    if (iVar1 == 0) {
      FUN_0064cc50(*(undefined8 *)(param_1 + 0x7d8),0);
    }
    else {
      FUN_0064cc50(*(undefined8 *)(param_1 + 0x7d8),*(undefined4 *)(param_1 + 0xa9c));
    }
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x278))(*(longlong **)(param_1 + 0x7d8),iVar1);
  }
  FUN_00414480(local_res10);
  return;
}

