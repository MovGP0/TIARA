/* Ghidra address: 01233ea0 */
/* Ghidra symbol: FUN_01233ea0 */


void FUN_01233ea0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  cVar3 = (**(code **)(**(longlong **)(param_1 + 0x8f0) + 0x260))(*(longlong **)(param_1 + 0x8f0));
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x8f8),cVar3 == '\0');
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x8f0) + 0x260))(*(longlong **)(param_1 + 0x8f0));
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x900),uVar4);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x920),1);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x930),1);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x918),1);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x928),1);
  uVar5 = FUN_017105e0(0);
  FUN_01717780(uVar5,*(undefined8 *)(*(longlong *)(param_1 + 0x900) + 0x4f0),L"[OpAmp]",0);
  lVar1 = *(longlong *)(param_1 + 0x900);
  plVar2 = *(longlong **)(lVar1 + 0x4f0);
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_20,0);
  FUN_0064de00(lVar1,local_20);
  (**(code **)(**(longlong **)(param_1 + 0x900) + 0x268))(*(longlong **)(param_1 + 0x900),0);
  if (*(longlong *)PTR_DAT_02003158 == 0) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x900),&local_28);
    FUN_00414ad0(PTR_DAT_02003158,local_28);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x900) + 0x4f0);
    uVar5 = (**(code **)(*plVar2 + 0x30))(plVar2,0);
    *(undefined8 *)PTR_DAT_020041c8 = uVar5;
  }
  else {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x900),*(undefined8 *)PTR_DAT_02003158);
  }
  FUN_00414480(&local_28);
  FUN_00414480(&local_20);
  return;
}

