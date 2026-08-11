/* Ghidra address: 010845a0 */
/* Ghidra symbol: FUN_010845a0 */


void FUN_010845a0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  plVar2 = (longlong *)FUN_006d6380(*(undefined8 *)(param_1 + 0x7d8));
  iVar1 = (**(code **)(*plVar2 + 0xb0))(plVar2,local_res10[0]);
  if (iVar1 != -1) {
    plVar2 = (longlong *)FUN_006d6380(*(undefined8 *)(param_1 + 0x7d8));
    (**(code **)(*plVar2 + 0x98))(plVar2,iVar1);
    FUN_004ae870(*(undefined8 *)(param_1 + 0xb98),iVar1);
    plVar2 = (longlong *)FUN_006d6380(*(undefined8 *)(param_1 + 0x7d8));
    iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
    if (iVar1 == 0) {
      FUN_0064cc50(*(undefined8 *)(param_1 + 0x7d8),0);
    }
    else {
      FUN_0064cc50(*(undefined8 *)(param_1 + 0x7d8),*(undefined4 *)(param_1 + 0xa9c));
    }
  }
  FUN_00414480(local_res10);
  return;
}

