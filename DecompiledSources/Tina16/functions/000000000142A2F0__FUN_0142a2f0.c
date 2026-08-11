/* Ghidra address: 0142a2f0 */
/* Ghidra symbol: FUN_0142a2f0 */


void FUN_0142a2f0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_20;
  
  local_20 = 0;
  lVar3 = FUN_0160d750(*(undefined8 *)(param_1 + 0x710),*(undefined8 *)(param_1 + 0x718));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x4d8);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  if (lVar3 != 0) {
    cVar2 = FUN_01773dd0(lVar3);
    if (cVar2 != '\0') {
      uVar4 = FUN_01773d80(lVar3);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x4d8);
      (**(code **)(*plVar1 + 0x88))(plVar1,uVar4);
      FUN_01773da0(lVar3,&local_20);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),local_20);
    }
  }
  FUN_00414480(&local_20);
  return;
}

