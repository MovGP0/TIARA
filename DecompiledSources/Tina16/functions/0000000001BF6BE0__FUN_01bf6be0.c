/* Ghidra address: 01bf6be0 */
/* Ghidra symbol: FUN_01bf6be0 */


void FUN_01bf6be0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = 0;
  FUN_004b1060(param_1,param_2);
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bec1b0);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x10))
              (*(longlong **)(param_1 + 0xe0),*(undefined8 *)(param_2 + 0xe0));
    plVar2 = *(longlong **)(param_1 + 0x108);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined8 *)(param_2 + 0x108));
    }
    plVar2 = *(longlong **)(param_1 + 0x138);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined8 *)(param_2 + 0x138));
    }
    FUN_01bf8d40(param_2,&local_20);
    FUN_01bf8d70(param_1,local_20);
    plVar2 = *(longlong **)(param_1 + 0xd0);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined8 *)(param_2 + 0xd0));
    }
    plVar2 = *(longlong **)(param_1 + 0x148);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined8 *)(param_2 + 0x148));
    }
    (**(code **)(**(longlong **)(param_1 + 0x158) + 0x10))
              (*(longlong **)(param_1 + 0x158),*(undefined8 *)(param_2 + 0x158));
    if (*(longlong *)(param_2 + 0x118) != 0) {
      plVar2 = (longlong *)FUN_01bf8df0(param_1);
      uVar3 = FUN_01bf8df0(param_2);
      (**(code **)(*plVar2 + 0x10))(plVar2,uVar3);
    }
  }
  FUN_00414480(&local_20);
  return;
}

