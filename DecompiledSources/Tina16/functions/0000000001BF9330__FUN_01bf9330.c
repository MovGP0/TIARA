/* Ghidra address: 01bf9330 */
/* Ghidra symbol: FUN_01bf9330 */


void FUN_01bf9330(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  
  local_30 = auStack_58;
  local_38 = 0;
  FUN_004b1060(param_1,param_2);
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_01bed778);
  if (cVar2 != '\0') {
    plVar1 = *(longlong **)(param_1 + 8);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x40))(plVar1);
    }
    FUN_01bf94d0(param_1,*(undefined8 *)(param_2 + 0x18));
    FUN_01bf9430(param_2,&local_38);
    FUN_00414ad0(param_1 + 0x20,local_38);
    plVar1 = *(longlong **)(param_1 + 8);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x48))(plVar1);
    }
  }
  FUN_00414480(&local_38);
  return;
}

