/* Ghidra address: 00ec84d0 */
/* Ghidra symbol: FUN_00ec84d0 */


void FUN_00ec84d0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x820),local_20);
  FUN_00ec0110(param_1,local_20[0]);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x820),&local_28);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x818) + 0x4f0);
  iVar2 = (**(code **)(*plVar1 + 0xb0))(plVar1,local_28);
  if (iVar2 == -1) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x820),&local_30);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x818) + 0x4f0);
    uVar3 = (**(code **)(*plVar1 + 0x78))(plVar1,local_30);
    (**(code **)(**(longlong **)(param_1 + 0x818) + 0x268))(*(longlong **)(param_1 + 0x818),uVar3);
    plVar1 = *(longlong **)(param_1 + 0x818);
    uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x9e] + 0x48))((longlong *)plVar1[0x9e],uVar3,1);
  }
  FUN_0064de00(*(undefined8 *)(param_1 + 0x820),0);
  FUN_00414560(&local_30,3);
  return;
}

