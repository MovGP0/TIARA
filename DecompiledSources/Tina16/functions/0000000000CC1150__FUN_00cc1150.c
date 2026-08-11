/* Ghidra address: 00cc1150 */
/* Ghidra symbol: FUN_00cc1150 */


void FUN_00cc1150(longlong *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  
  local_40 = auStack_68;
  puVar1 = auStack_68;
  if (param_1[0xc] == 0) {
    FUN_00414ad0(param_1 + 0xc,L"IdThread (unknown)");
    puVar1 = local_40;
  }
  local_40 = puVar1;
  FUN_00876a60(param_1[0xc],0xffffffff);
  (**(code **)(*param_1 + 0x30))(param_1);
  while (*(char *)((longlong)param_1 + 0x1a) == '\0') {
    cVar2 = FUN_00cc1ad0(param_1);
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0x50))(param_1);
      cVar2 = FUN_00cc1ad0(param_1);
      if (cVar2 != '\0') {
        if (*(char *)((longlong)param_1 + 0x1a) != '\0') break;
        FUN_004d1de0(param_1,1);
        if (*(char *)((longlong)param_1 + 0x1a) != '\0') break;
      }
    }
    *(byte *)((longlong)param_1 + 0x69) = *(byte *)((longlong)param_1 + 0x69) | 2;
    (**(code **)(*param_1 + 0x38))(param_1);
    if ((char)param_1[0xb] == '\0') {
      (**(code **)(*param_1 + 0x60))(param_1);
    }
    else {
      while (cVar2 = FUN_00cc1ad0(param_1), cVar2 == '\0') {
        (**(code **)(*param_1 + 0x60))(param_1);
      }
    }
    (**(code **)(*param_1 + 0x20))(param_1);
    (**(code **)(*param_1 + 0x40))(param_1);
  }
  (**(code **)(*param_1 + 0x28))(param_1);
  return;
}

