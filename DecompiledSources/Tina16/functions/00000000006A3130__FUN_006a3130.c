/* Ghidra address: 006a3130 */
/* Ghidra symbol: FUN_006a3130 */


void FUN_006a3130(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  
  local_30 = auStack_58;
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_006a07f8);
  if (cVar2 != '\0') {
    plVar1 = (longlong *)param_1[1];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x40))(plVar1);
    }
    (**(code **)(*param_1 + 0x48))(param_1,*(undefined8 *)(param_2 + 0x20));
    (**(code **)(*param_1 + 0x58))(param_1,*(undefined4 *)(param_2 + 0x30));
    (**(code **)(*param_1 + 0x50))(param_1,*(undefined8 *)(param_2 + 0x28));
    plVar1 = (longlong *)param_1[1];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x48))(plVar1);
    }
  }
  return;
}

