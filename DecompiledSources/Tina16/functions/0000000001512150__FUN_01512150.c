/* Ghidra address: 01512150 */
/* Ghidra symbol: FUN_01512150 */


void FUN_01512150(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  plVar1 = *(longlong **)(param_1 + 0xc00);
  iVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  if (-1 < iVar2) {
    uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
    lVar4 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x30))((longlong *)plVar1[0x9e],uVar3);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0xd68),local_20);
    (**(code **)(**(longlong **)(lVar4 + 0x48) + 0x40))(*(longlong **)(lVar4 + 0x48),0,local_20[0]);
  }
  FUN_00414480(local_20);
  return;
}

