/* Ghidra address: 0096d390 */
/* Ghidra symbol: FUN_0096d390 */


void FUN_0096d390(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int *local_28;
  
  local_30 = auStack_58;
  if (*(char *)(param_1 + 0x28) == '\x03') {
    return;
  }
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x20))(*(longlong **)(param_1 + 0x30));
  *(undefined1 *)(param_1 + 0x11) = 0;
  FUN_00414520(param_1 + 8);
  do {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))(*(longlong **)(param_1 + 0x18));
    cVar2 = FUN_008ff090(*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x28));
  } while (cVar2 != '\0');
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x28);
  if (iVar3 < 0x2c) {
    if (iVar3 == 0x2b) {
      *(undefined1 *)(param_1 + 0x28) = 4;
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))(*(longlong **)(param_1 + 0x30),0x2b);
      return;
    }
    if (iVar3 == 0x23) {
      *(undefined1 *)(param_1 + 0x28) = 8;
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))(*(longlong **)(param_1 + 0x30),0x23);
      iVar3 = 6;
      local_28 = &DAT_01e32a14;
      do {
        plVar1 = *(longlong **)(param_1 + 0x18);
        if ((int)plVar1[0x14] == *local_28) {
          (**(code **)(*plVar1 + 0x28))(plVar1);
          (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))
                    (*(longlong **)(param_1 + 0x30),
                     *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x28));
        }
        else {
          *(undefined1 *)(param_1 + 0x11) = 0x73;
          FUN_00414b90(param_1 + 8,L"#PCDATA");
        }
        local_28 = local_28 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      return;
    }
    if (iVar3 == 0x28) {
      *(undefined1 *)(param_1 + 0x10) = 1;
      *(undefined1 *)(param_1 + 0x28) = 7;
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))(*(longlong **)(param_1 + 0x30),0x28);
      return;
    }
    if (iVar3 == 0x29) {
      *(undefined1 *)(param_1 + 0x28) = 1;
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))(*(longlong **)(param_1 + 0x30),0x29);
      return;
    }
    if (iVar3 == 0x2a) {
      *(undefined1 *)(param_1 + 0x28) = 4;
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))(*(longlong **)(param_1 + 0x30),0x2a);
      return;
    }
  }
  else {
    if (iVar3 == 0x2c) {
      *(undefined1 *)(param_1 + 0x28) = 9;
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))(*(longlong **)(param_1 + 0x30),0x2c);
      return;
    }
    if (iVar3 == 0x3f) {
      *(undefined1 *)(param_1 + 0x28) = 4;
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))(*(longlong **)(param_1 + 0x30),0x3f);
      return;
    }
    if (iVar3 == 0x7c) {
      *(undefined1 *)(param_1 + 0x28) = 9;
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))(*(longlong **)(param_1 + 0x30),0x7c);
      return;
    }
    if (iVar3 == 0x9c) {
      *(undefined1 *)(param_1 + 0x28) = 3;
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x28) = 6;
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))
            (*(longlong **)(param_1 + 0x30),*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x28));
  cVar2 = FUN_008ff170(*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x28));
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0x28) = 5;
    *(undefined1 *)(param_1 + 0x11) = 0x73;
  }
  else {
    while (cVar2 = FUN_008ff120(*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0xa0)),
          cVar2 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))(*(longlong **)(param_1 + 0x18));
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))
                (*(longlong **)(param_1 + 0x30),
                 *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x28));
    }
    if (*(char *)(param_1 + 0x10) == '\0') {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x38))
                        (*(longlong **)(param_1 + 0x30),DAT_01e32a30);
      if (cVar2 == '\0') {
        cVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x38))
                          (*(longlong **)(param_1 + 0x30),DAT_01e32a38);
        if (cVar2 != '\0') {
          *(undefined1 *)(param_1 + 0x28) = 2;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x28) = 0;
      }
    }
  }
  return;
}

