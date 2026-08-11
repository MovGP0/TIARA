/* Ghidra address: 018b45d0 */
/* Ghidra symbol: FUN_018b45d0 */


void FUN_018b45d0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_38 [16];
  
  if ((*(longlong *)(param_1 + 0x800) == 0) || (*(longlong *)(param_1 + 0x808) == 0)) {
    uVar3 = FUN_00603c60(*(undefined8 *)(*(longlong *)(param_1 + 0x760) + 0x318));
    uVar4 = FUN_00603c60(*(undefined8 *)(*(longlong *)(param_1 + 0x768) + 0x318));
  }
  else {
    uVar3 = FUN_00603c60(*(undefined8 *)(*(longlong *)(param_1 + 0x800) + 0x318));
    uVar4 = FUN_00603c60(*(undefined8 *)(*(longlong *)(param_1 + 0x808) + 0x318));
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x770) + 0x310);
  FUN_005fdab0(plVar1[0x10],*(undefined4 *)(param_1 + 200));
  FUN_00498350(local_38,0,0,*(undefined4 *)(*(longlong *)(param_1 + 0x770) + 0x98),
               *(undefined4 *)(*(longlong *)(param_1 + 0x770) + 0x9c));
  (**(code **)(*plVar1 + 0xa8))(plVar1,local_38);
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x780) + 0x260))(*(longlong **)(param_1 + 0x780));
  if (cVar2 == '\0') {
    FUN_0180e120(*(undefined8 *)(*(longlong *)(param_1 + 0x770) + 0x310),0,0,uVar4);
  }
  else {
    FUN_0180e120(*(undefined8 *)(*(longlong *)(param_1 + 0x770) + 0x310),0,0,uVar3);
  }
  return;
}

