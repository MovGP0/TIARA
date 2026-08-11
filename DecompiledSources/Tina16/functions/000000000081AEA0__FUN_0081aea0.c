/* Ghidra address: 0081aea0 */
/* Ghidra symbol: FUN_0081aea0 */


void FUN_0081aea0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined4 local_38;
  int local_34;
  
  if (*(int *)(*(longlong *)(param_1 + 0x170) + 0x140) < 1) {
    if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x10) + 0x4d2) == '\x02') {
      bVar5 = *(char *)(*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x10) + 0x4d6) != '\x01';
    }
    else {
      bVar5 = false;
    }
  }
  else {
    bVar5 = true;
  }
  if (bVar5) {
    iVar1 = FUN_004230a0(param_1 + 0x130);
    if (0 < iVar1) {
      FUN_00819760(*(undefined8 *)(param_1 + 0x170),&local_38);
      iVar1 = FUN_0081abd0(param_1);
      if ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x10) + 0x4d2) != '\x02') &&
         (0 < *(int *)(*(longlong *)(param_1 + 0x170) + 0x140))) {
        iVar2 = FUN_004230c0(param_1 + 0x130);
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x48))
                          (*(longlong **)(param_1 + 0x118));
        iVar3 = (iVar3 - iVar2) / 2;
        *(int *)(param_1 + 0x134) = iVar3;
        *(int *)(param_1 + 0x13c) = iVar3 + iVar2;
      }
      if (*(int *)(param_1 + 0x134) < iVar1) {
        if (*(int *)(*(longlong *)(param_1 + 0x170) + 0x140) < 1) {
          FUN_00423b50(param_1 + 0x130,local_38,iVar1 - *(int *)(param_1 + 0x134));
          local_34 = *(int *)(param_1 + 0x13c) - local_34;
          if (0 < local_34) {
            FUN_00423b50(param_1 + 0x130,0,-local_34);
          }
        }
        else {
          iVar2 = FUN_004230c0(param_1 + 0x130);
          FUN_00423b50(param_1 + 0x130,local_38,0);
          iVar3 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x48))
                            (*(longlong **)(param_1 + 0x118));
          iVar3 = (iVar3 - iVar2) - iVar1;
          iVar4 = iVar1 + iVar3 / 2 + -1;
          *(int *)(param_1 + 0x134) = iVar4;
          iVar4 = iVar4 + iVar2;
          *(int *)(param_1 + 0x13c) = iVar4;
          iVar1 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x48))
                            (*(longlong **)(param_1 + 0x118),(longlong)iVar3 % 2 & 0xffffffff);
          if (iVar1 < iVar4) {
            iVar1 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x48))
                              (*(longlong **)(param_1 + 0x118));
            FUN_00423b50(param_1 + 0x130,0,iVar1 - *(int *)(param_1 + 0x13c));
          }
        }
      }
    }
  }
  return;
}

