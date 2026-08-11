/* Ghidra address: 006a39e0 */
/* Ghidra symbol: FUN_006a39e0 */


void FUN_006a39e0(longlong *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [36];
  int local_34;
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_58;
  if ((param_2 == '\0') || ((*(ushort *)((longlong)param_1 + 0x34) & 1) == 0)) {
    if ((char)param_1[0x27] != param_2) {
      *(char *)(param_1 + 0x27) = param_2;
      iVar2 = FUN_004d4cf0();
      local_34 = iVar2 + -1;
      local_1c = 0;
      if (-1 < local_34) {
        do {
          local_34 = iVar2;
          uVar3 = FUN_004d4cc0(param_1,local_1c);
          cVar1 = FUN_004113d0(uVar3,&PTR_FUN_006a2f58);
          if (cVar1 != '\0') {
            *(undefined1 *)(param_1 + 0x2b) = 1;
            plVar4 = (longlong *)FUN_004d4cc0(param_1,local_1c);
            (**(code **)(*plVar4 + 0x148))(plVar4,param_2);
            *(undefined1 *)(param_1 + 0x2b) = 0;
          }
          local_1c = local_1c + 1;
          local_34 = local_34 + -1;
          iVar2 = local_34;
        } while (local_34 != 0);
      }
      (**(code **)(*param_1 + 0x88))(param_1);
      if ((int)param_1[0x30] != -1) {
        FUN_006a3be0(param_1,(int)param_1[0x30]);
      }
    }
  }
  else {
    *(char *)((longlong)param_1 + 0x139) = param_2;
  }
  return;
}

