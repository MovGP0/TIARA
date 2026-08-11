/* Ghidra address: 00d7c9c0 */
/* Ghidra symbol: FUN_00d7c9c0 */


void FUN_00d7c9c0(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  bVar4 = false;
  cVar1 = *(char *)(param_1 + 0x124);
  if (cVar1 == '\0') {
LAB_00d7c9ff:
    if (*(int *)(param_1 + 0x84) == *(int *)(param_1 + 0x120)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') goto LAB_00d7c9ff;
      if (cVar1 != '\x03') goto LAB_00d7ca29;
    }
    if (*(int *)(param_1 + 0x88) == *(int *)(param_1 + 0x120)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
  }
LAB_00d7ca29:
  if (bVar4) {
    if (cVar1 == '\0') {
      *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0x84);
      iVar7 = *(int *)(param_1 + 0x7c);
      iVar3 = *(int *)(param_1 + 0x84);
      iVar6 = 1;
      do {
        iVar2 = *(int *)(param_1 + 0x84);
        iVar5 = FUN_0040c770((double)(*(int *)(param_1 + 0x120) - iVar2) * ((double)iVar6 / 1.0));
        FUN_00d77d50(param_1,iVar2 + iVar5);
        FUN_00d77da0(param_1,(iVar7 + iVar3) - *(int *)(param_1 + 0x84));
        FUN_00d7c9a0(param_1);
        iVar6 = iVar6 + 1;
      } while (iVar6 != 2);
    }
    else if (cVar1 == '\x01') {
      *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0x88);
      iVar7 = *(int *)(param_1 + 0x80);
      iVar3 = *(int *)(param_1 + 0x88);
      iVar6 = 1;
      do {
        iVar2 = *(int *)(param_1 + 0x88);
        iVar5 = FUN_0040c770((double)(*(int *)(param_1 + 0x120) - iVar2) * ((double)iVar6 / 1.0));
        FUN_00d77d00(param_1,iVar2 + iVar5);
        FUN_00d77e00(param_1,(iVar7 + iVar3) - *(int *)(param_1 + 0x88));
        FUN_00d7c9a0(param_1);
        iVar6 = iVar6 + 1;
      } while (iVar6 != 2);
    }
    else if (cVar1 == '\x02') {
      *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0x84);
      iVar7 = 1;
      do {
        iVar3 = *(int *)(param_1 + 0x84);
        iVar6 = FUN_0040c770((double)(*(int *)(param_1 + 0x120) - iVar3) * ((double)iVar7 / 1.0));
        FUN_00d77d50(param_1,iVar3 + iVar6);
        FUN_00d7c9a0(param_1);
        iVar7 = iVar7 + 1;
      } while (iVar7 != 2);
    }
    else if (cVar1 == '\x03') {
      *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0x88);
      iVar7 = 1;
      do {
        iVar3 = *(int *)(param_1 + 0x88);
        iVar6 = FUN_0040c770((double)(*(int *)(param_1 + 0x120) - iVar3) * ((double)iVar7 / 1.0));
        FUN_00d77d00(param_1,iVar3 + iVar6);
        FUN_00d7c9a0(param_1);
        iVar7 = iVar7 + 1;
      } while (iVar7 != 2);
    }
  }
  else if (cVar1 == '\0') {
    iVar7 = *(int *)(param_1 + 0x7c);
    iVar3 = *(int *)(param_1 + 0x84);
    iVar6 = 1;
    do {
      iVar2 = *(int *)(param_1 + 0x84);
      iVar5 = FUN_0040c770((double)(iVar2 - *(int *)(param_1 + 0x128)) * ((double)iVar6 / 1.0));
      FUN_00d77d50(param_1,iVar2 - iVar5);
      FUN_00d77da0(param_1,(iVar7 + iVar3) - *(int *)(param_1 + 0x84));
      FUN_00d7c9a0(param_1);
      iVar6 = iVar6 + 1;
    } while (iVar6 != 2);
  }
  else if (cVar1 == '\x01') {
    iVar7 = *(int *)(param_1 + 0x80);
    iVar3 = *(int *)(param_1 + 0x88);
    iVar6 = 1;
    do {
      iVar2 = *(int *)(param_1 + 0x88);
      iVar5 = FUN_0040c770((double)(iVar2 - *(int *)(param_1 + 0x128)) * ((double)iVar6 / 1.0));
      FUN_00d77d00(param_1,iVar2 - iVar5);
      FUN_00d77e00(param_1,(iVar7 + iVar3) - *(int *)(param_1 + 0x88));
      FUN_00d7c9a0(param_1);
      iVar6 = iVar6 + 1;
    } while (iVar6 != 2);
  }
  else if (cVar1 == '\x02') {
    iVar7 = 1;
    do {
      iVar3 = *(int *)(param_1 + 0x84);
      iVar6 = FUN_0040c770((double)(iVar3 - *(int *)(param_1 + 0x128)) * ((double)iVar7 / 1.0));
      FUN_00d77d50(param_1,iVar3 - iVar6);
      FUN_00d7c9a0(param_1);
      iVar7 = iVar7 + 1;
    } while (iVar7 != 2);
  }
  else if (cVar1 == '\x03') {
    iVar7 = 1;
    do {
      iVar3 = *(int *)(param_1 + 0x88);
      iVar6 = FUN_0040c770((double)(iVar3 - *(int *)(param_1 + 0x128)) * ((double)iVar7 / 1.0));
      FUN_00d77d00(param_1,iVar3 - iVar6);
      FUN_00d7c9a0(param_1);
      iVar7 = iVar7 + 1;
    } while (iVar7 != 2);
  }
  return;
}

