/* Ghidra address: 00abf340 */
/* Ghidra symbol: FUN_00abf340 */


int FUN_00abf340(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_2c;
  
  iVar4 = 0;
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      plVar3 = (longlong *)FUN_00ac3910(*(undefined8 *)(param_1 + 0x30),iVar5);
      local_2c = 0;
      iVar2 = (**(code **)(*plVar3 + 0x50))
                        (plVar3,*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40),
                         *(int *)(param_1 + 0x48) + iVar4,*(undefined4 *)(param_1 + 0x50),
                         *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60),
                         *(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70),
                         *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x38),&local_2c,
                         *(undefined8 *)(param_1 + 0x80));
      iVar4 = iVar4 + iVar2;
      if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x28) + 0x50e) == '\0') {
        iVar2 = **(int **)(param_1 + 0x78);
        if (**(int **)(param_1 + 0x78) <= local_2c) {
          iVar2 = local_2c;
        }
        **(int **)(param_1 + 0x78) = iVar2;
      }
      else {
        **(undefined4 **)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x60);
      }
      cVar1 = FUN_004113d0(plVar3,&PTR_FUN_00a84e18);
      if (cVar1 != '\0') {
        iVar2 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x5c);
        if (iVar2 <= *(int *)((longlong)plVar3 + 0x124)) {
          iVar2 = *(int *)((longlong)plVar3 + 0x124);
        }
        *(int *)(*(longlong *)(param_1 + 0x30) + 0x5c) = iVar2;
      }
      cVar1 = FUN_004113d0(plVar3,&PTR_FUN_00a865e0);
      if ((cVar1 == '\0') || (*(char *)((longlong)plVar3 + 0x4c) != '\x02')) {
        iVar2 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x4c);
        if (iVar2 <= (int)plVar3[0x10]) {
          iVar2 = (int)plVar3[0x10];
        }
        *(int *)(*(longlong *)(param_1 + 0x30) + 0x4c) = iVar2;
      }
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x48);
      if ((int)plVar3[0xf] <= iVar2) {
        iVar2 = (int)plVar3[0xf];
      }
      *(int *)(*(longlong *)(param_1 + 0x30) + 0x48) = iVar2;
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x50);
      if (iVar2 <= *(int *)((longlong)plVar3 + 0x84)) {
        iVar2 = *(int *)((longlong)plVar3 + 0x84);
      }
      *(int *)(*(longlong *)(param_1 + 0x30) + 0x50) = iVar2;
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return iVar4;
}

