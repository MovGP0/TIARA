/* Ghidra address: 018c79b0 */
/* Ghidra symbol: FUN_018c79b0 */


undefined1 FUN_018c79b0(longlong param_1,longlong param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 local_29;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_01934910);
  if (cVar1 == '\0') {
    lVar4 = *(longlong *)(param_2 + 0x208);
  }
  else {
    lVar4 = *(longlong *)(param_2 + 0x240);
  }
  local_29 = 1;
  if (param_3 == '\0') {
    local_29 = 0;
    iVar5 = *(int *)(lVar4 + 0x10);
    if ((iVar5 == 0) && (cVar1 = FUN_004113d0(param_2,&PTR_FUN_019342a8), cVar1 == '\0')) {
      local_29 = 1;
    }
    iVar3 = 0;
    if (-1 < iVar5 + -1) {
      do {
        lVar2 = FUN_004aeac0(lVar4,iVar3);
        if (*(longlong *)(lVar2 + 600) != 0) {
          FUN_01973030(*(undefined8 *)(param_1 + 0x40),lVar2,*(undefined8 *)(lVar2 + 0x280),0);
          (**(code **)(**(longlong **)(lVar2 + 600) + 0x2f8))(*(longlong **)(lVar2 + 600));
          while (cVar1 = (**(code **)(**(longlong **)(lVar2 + 600) + 0x310))
                                   (*(longlong **)(lVar2 + 600)), cVar1 == '\0') {
            cVar1 = FUN_018c79b0(param_1,lVar2,*(undefined1 *)(lVar2 + 0x274));
            if (cVar1 != '\0') {
              local_29 = 1;
              break;
            }
            (**(code **)(**(longlong **)(lVar2 + 600) + 0x300))(*(longlong **)(lVar2 + 600));
          }
        }
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return local_29;
}

