/* Ghidra address: 005b2a90 */
/* Ghidra symbol: FUN_005b2a90 */


void FUN_005b2a90(longlong *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong *local_28;
  int local_1c;
  
  local_40 = auStack_68;
  if (*(char *)((longlong)param_1 + 0x114) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x114) = 1;
    if (param_2 != (char)param_1[0x1b]) {
      iVar2 = FUN_004d4cf0();
      local_1c = 0;
      if (-1 < iVar2 + -1) {
        do {
          uVar3 = FUN_004d4cc0(param_1,local_1c);
          cVar1 = FUN_004113d0(uVar3,&PTR_FUN_005af7a8);
          if (cVar1 != '\0') {
            plVar4 = (longlong *)FUN_004d4cc0(param_1,local_1c);
            (**(code **)(*plVar4 + 0xb0))(plVar4,param_2);
          }
          local_1c = local_1c + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      *(char *)(param_1 + 0x1b) = param_2;
      if (((0 < *(int *)((longlong)param_1 + 0xdc)) && ((char)param_1[0x1b] != '\0')) &&
         (param_1[0x18] != 0)) {
        iVar2 = FUN_005b4540();
        local_1c = 0;
        if (-1 < iVar2 + -1) {
          do {
            local_28 = (longlong *)FUN_005b4350(param_1[0x18],local_1c);
            if ((local_28 != param_1) &&
               (*(int *)((longlong)local_28 + 0xdc) == *(int *)((longlong)param_1 + 0xdc))) {
              (**(code **)(*local_28 + 0xe0))(local_28,0);
            }
            local_1c = local_1c + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      (**(code **)(*param_1 + 0x88))(param_1);
    }
    *(undefined1 *)((longlong)param_1 + 0x114) = 0;
  }
  return;
}

