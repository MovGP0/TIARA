/* Ghidra address: 01bffed0 */
/* Ghidra symbol: FUN_01bffed0 */


bool FUN_01bffed0(longlong *param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_01bf4f40);
  if (cVar2 != '\0') {
    cVar2 = FUN_004113d0(param_3,&PTR_FUN_01bf4f40);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_01bfff0f;
    }
  }
  bVar1 = false;
LAB_01bfff0f:
  bVar5 = false;
  if (bVar1) {
    if ((*(longlong *)(param_2 + 800) == 0) || (*(longlong *)(param_3 + 800) == 0)) {
      bVar5 = false;
    }
    else {
      iVar3 = FUN_004b1870(*(longlong *)(param_2 + 800));
      iVar4 = FUN_004b1870(*(undefined8 *)(param_3 + 800));
      bVar5 = iVar3 < iVar4;
    }
    if ((*(char *)(param_2 + 0xa9) != '\0') &&
       (*(int *)((longlong)param_1 + 0x51c) < *(int *)(param_2 + 0x9c))) {
      *(undefined4 *)((longlong)param_1 + 0x51c) = *(undefined4 *)(param_2 + 0x9c);
    }
    if ((*(char *)(param_2 + 0xa9) != '\0') && ((int)param_1[0xa4] < *(int *)(param_2 + 0x98))) {
      *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0x98);
    }
    if ((*(char *)(param_3 + 0xa9) != '\0') &&
       (*(int *)((longlong)param_1 + 0x51c) < *(int *)(param_3 + 0x9c))) {
      *(undefined4 *)((longlong)param_1 + 0x51c) = *(undefined4 *)(param_3 + 0x9c);
    }
    if ((*(char *)(param_3 + 0xa9) != '\0') && ((int)param_1[0xa4] < *(int *)(param_3 + 0x98))) {
      *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_3 + 0x98);
    }
    cVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
    if (cVar2 != '\0') {
      if (*(byte *)((longlong)param_1 + 0x4c3) < 2) {
        iVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,2);
        FUN_0064b380(param_1[0x1a],3,(int)param_1[0xa4] + (int)param_1[0xa1] * 2 + iVar3);
      }
      else if ((byte)(*(byte *)((longlong)param_1 + 0x4c3) - 2) < 2) {
        FUN_0064b380(param_1[0x1a],2,
                     *(int *)((longlong)param_1 + 0x51c) + *(int *)((longlong)param_1 + 0x504) * 2);
      }
    }
  }
  return bVar5;
}

