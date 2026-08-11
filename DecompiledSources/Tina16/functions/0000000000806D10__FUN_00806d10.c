/* Ghidra address: 00806d10 */
/* Ghidra symbol: FUN_00806d10 */


void FUN_00806d10(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 local_48;
  undefined8 local_40;
  
  iVar4 = FUN_00654c00();
  iVar6 = 0;
  if (-1 < iVar4 + -1) {
    do {
      plVar5 = (longlong *)FUN_00654bc0(param_2,iVar6);
      if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x688) + 0x38) == '\0') {
        (**(code **)(*plVar5 + 0xe0))(plVar5,&local_48);
        local_48 = FUN_00652390(plVar5,&local_48,*(undefined8 *)(param_1 + 0x30));
        local_40 = FUN_00652390(plVar5,&local_40,*(undefined8 *)(param_1 + 0x30));
      }
      if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x688) + 0x38) == '\0') {
        piVar1 = *(int **)(param_1 + 0x38);
        if (((((int)local_48 < *piVar1) || (piVar1[2] < (int)local_40)) ||
            (local_48._4_4_ < piVar1[1])) || (piVar1[3] < local_40._4_4_)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        if ((*(uint *)((longlong)plVar5 + 0xa4) & 0x8000) == 0) {
          *(uint *)((longlong)plVar5 + 0xa4) = *(uint *)((longlong)plVar5 + 0xa4) | 0x8000;
        }
      }
      else if ((*(uint *)((longlong)plVar5 + 0xa4) & 0x8000) != 0) {
        *(uint *)((longlong)plVar5 + 0xa4) = *(uint *)((longlong)plVar5 + 0xa4) & 0xffff7fff;
      }
      cVar3 = FUN_004113d0(plVar5,&PTR_FUN_00640c18);
      if (cVar3 != '\0') {
        FUN_00806d10(param_1,plVar5);
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

