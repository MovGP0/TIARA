/* Ghidra address: 01784f20 */
/* Ghidra symbol: FUN_01784f20 */


void FUN_01784f20(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_38 = 0;
  local_28 = 0;
  local_30 = 0;
  local_20 = 0;
  plVar1 = *(longlong **)(param_1 + 0x700);
  cVar3 = (**(code **)(*plVar1 + 0xa8))(plVar1);
  if (cVar3 != '\0') {
    FUN_00724270(plVar1,&local_20);
    FUN_01785490(param_1,local_20);
    lVar2 = *(longlong *)(param_1 + 0x6f8);
    FUN_00724270(plVar1,&local_30);
    uVar4 = FUN_007ffbe0(param_1);
    FUN_00b965d0(&local_28,local_30,uVar4,*(int *)(lVar2 + 0x98) + -4);
    FUN_0064de00(lVar2,local_28);
    FUN_00724270(plVar1,&local_38);
    FUN_00414ad0(lVar2 + 0xf0,local_38);
  }
  FUN_00414560(&local_38,4);
  return;
}

