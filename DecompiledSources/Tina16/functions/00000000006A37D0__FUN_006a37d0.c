/* Ghidra address: 006a37d0 */
/* Ghidra symbol: FUN_006a37d0 */


void FUN_006a37d0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_58;
  if (*(char *)(param_1 + 0x148) == '\0') {
    *(undefined1 *)(param_1 + 0x148) = 1;
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_00645ff0);
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(*param_2 + 0x260))(param_2);
      *(undefined4 *)(param_1 + 0x180) = uVar2;
      iVar3 = FUN_004d4cf0();
      local_1c = 0;
      if (-1 < iVar3 + -1) {
        do {
          uVar4 = FUN_004d4cc0(param_1,local_1c);
          cVar1 = FUN_004113d0(uVar4,&PTR_FUN_006a2f58);
          if ((cVar1 != '\0') &&
             (lVar5 = FUN_004d4cc0(param_1,local_1c), *(longlong **)(lVar5 + 0x28) != param_2)) {
            plVar6 = (longlong *)FUN_004d4cc0(param_1,local_1c);
            (**(code **)(*plVar6 + 0x160))(plVar6,*(undefined4 *)(param_1 + 0x180));
          }
          local_1c = local_1c + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    if (*(longlong *)(param_1 + 0x170) != 0) {
      uVar4 = FUN_004113f0(param_2,&PTR_FUN_0063d930);
      (**(code **)(param_1 + 0x170))(*(undefined8 *)(param_1 + 0x178),param_1,uVar4);
    }
    *(undefined1 *)(param_1 + 0x148) = 0;
  }
  return;
}

