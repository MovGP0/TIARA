/* Ghidra address: 01bfa7a0 */
/* Ghidra symbol: FUN_01bfa7a0 */


void FUN_01bfa7a0(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  
  local_30 = auStack_58;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bee178);
  if (cVar1 == '\0') {
    FUN_004b1060(param_1,param_2);
  }
  else {
    plVar2 = (longlong *)param_1[1];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x40))(plVar2);
    }
    (**(code **)(*param_1 + 0x58))(param_1,*(undefined4 *)(param_2 + 0x48));
    if (*(longlong *)(param_2 + 0x38) != 0) {
      plVar2 = (longlong *)FUN_01bfa9d0(param_1);
      (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined8 *)(param_2 + 0x38));
    }
    cVar1 = FUN_01bfab60(param_2);
    if (cVar1 != '\0') {
      plVar2 = (longlong *)FUN_01bfa9a0(param_1);
      uVar3 = FUN_01bfa9a0(param_2);
      (**(code **)(*plVar2 + 0x10))(plVar2,uVar3);
    }
    FUN_01bfafb0(param_1,*(undefined1 *)(param_2 + 0x28));
    (**(code **)(*param_1 + 0x60))(param_1,*(undefined1 *)(param_2 + 0x58));
    if (*(longlong *)(param_2 + 0x50) != 0) {
      plVar2 = (longlong *)FUN_01bfaa70(param_1);
      (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined8 *)(param_2 + 0x50));
    }
    FUN_01bfad40(param_1,*(undefined8 *)(param_2 + 0x18));
    plVar2 = (longlong *)param_1[1];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x48))(plVar2);
    }
  }
  return;
}

