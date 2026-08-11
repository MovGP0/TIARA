/* Ghidra address: 018c61b0 */
/* Ghidra symbol: FUN_018c61b0 */


void FUN_018c61b0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                 double param_5)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  
  (**(code **)(**(longlong **)(param_2 + 0x80) + 0x10))(*(longlong **)(param_2 + 0x80));
  iVar4 = *(int *)(param_4 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      plVar2 = (longlong *)FUN_004aeac0(param_4,iVar3);
      (**(code **)(*plVar2 + 0xd0))(plVar2,(double)plVar2[0x14] - param_5);
      cVar1 = FUN_004113d0(plVar2,&PTR_FUN_01923c30);
      if (cVar1 != '\0') {
        if ((double)plVar2[0x14] <= 0.0 && (double)plVar2[0x14] != 0.0) {
          (**(code **)(*plVar2 + 0xd0))(plVar2,0);
        }
        (**(code **)(*plVar2 + 0xe0))(plVar2,plVar2[0x56]);
        if ((char)plVar2[0x34] == '\x05') {
          (**(code **)(*plVar2 + 0xd0))(plVar2,*(double *)(param_2 + 0xb0) - (double)plVar2[0x16]);
        }
        else {
          cVar1 = FUN_018cb070(param_1,plVar2);
          if (cVar1 != '\0') {
            (**(code **)(*plVar2 + 0xe0))(plVar2,*(double *)(param_2 + 0xb0) - (double)plVar2[0x14])
            ;
          }
        }
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

