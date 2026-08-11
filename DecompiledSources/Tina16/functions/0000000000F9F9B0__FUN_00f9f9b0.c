/* Ghidra address: 00f9f9b0 */
/* Ghidra symbol: FUN_00f9f9b0 */


void FUN_00f9f9b0(longlong param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  double dVar5;
  
  if (*(int *)(param_1 + 0x788) != 1) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x260))(*(longlong **)(param_1 + 0x6c8))
    ;
    if (cVar2 == '\0') {
      dVar5 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x700));
      iVar4 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x260))
                        (*(longlong **)(param_1 + 0x718));
      iVar1 = *(int *)(param_1 + 0x760 + (longlong)*(int *)(param_1 + 0x758) * 4);
      iVar4 = *(int *)(param_1 + 0x760 + (longlong)iVar4 * 4);
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x260))
                        (*(longlong **)(param_1 + 0x718));
      *(undefined4 *)(param_1 + 0x758) = uVar3;
      *(undefined1 *)(param_1 + 0x74c) = 1;
      FUN_00b90440(*(undefined8 *)(param_1 + 0x700),(dVar5 / (double)iVar1) * (double)iVar4);
      *(undefined1 *)(param_1 + 0x74c) = 0;
    }
    else {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x260))
                        (*(longlong **)(param_1 + 0x718));
      *(undefined4 *)(param_1 + 0x75c) = uVar3;
    }
  }
  return;
}

