/* Ghidra address: 010ca040 */
/* Ghidra symbol: FUN_010ca040 */


/* WARNING: Removing unreachable block (ram,0x010ca0de) */

undefined8 FUN_010ca040(longlong param_1,undefined8 param_2,char param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_40[0] = 0;
  local_30[0] = 0;
  FUN_00414480(local_30);
  iVar6 = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x18) + -4);
  }
  if (*(int *)(param_1 + 8) <= iVar6) {
    sVar7 = *(short *)(*(longlong *)(param_1 + 0x18) + -2 + (longlong)*(int *)(param_1 + 8) * 2);
    bVar1 = false;
    if ((param_3 != '\0') && (bVar1 = false, sVar7 == *(short *)(param_1 + 0x20))) {
      bVar1 = true;
    }
    if (*(char *)(param_1 + 0x22) == '\0') {
      bVar2 = false;
    }
    else {
      bVar2 = false;
    }
    while( true ) {
      if (((sVar7 == 0x20) || (sVar7 == 9)) || (bVar1)) {
        iVar6 = 0;
        if (*(longlong *)(param_1 + 0x18) != 0) {
          iVar6 = *(int *)(*(longlong *)(param_1 + 0x18) + -4);
        }
        if ((iVar6 < *(int *)(param_1 + 8)) || (bVar2)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
      else {
        bVar3 = false;
      }
      if (!bVar3) break;
      FUN_00416780(local_40,sVar7);
      FUN_00416ad0(local_30,local_40[0]);
      iVar6 = 0;
      if (*(longlong *)(param_1 + 0x18) != 0) {
        iVar6 = *(int *)(*(longlong *)(param_1 + 0x18) + -4);
      }
      if (*(int *)(param_1 + 8) < iVar6) {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        iVar6 = *(int *)(param_1 + 8);
        sVar7 = *(short *)(*(longlong *)(param_1 + 0x18) + -2 + (longlong)iVar6 * 2);
        iVar5 = 0;
        if (*(longlong *)(param_1 + 0x18) != 0) {
          iVar5 = *(int *)(*(longlong *)(param_1 + 0x18) + -4);
        }
        if (iVar6 < iVar5) {
          sVar4 = *(short *)(*(longlong *)(param_1 + 0x18) + -2 + (longlong)(iVar6 + 1) * 2);
        }
        else {
          sVar4 = 0x20;
        }
        if ((param_3 != '\0') && (sVar7 == *(short *)(param_1 + 0x20))) {
          bVar1 = true;
        }
        if (*(char *)(param_1 + 0x22) == '\0') {
          bVar2 = false;
        }
        else if ((sVar7 == 0x5c) && (sVar4 == 0x6e)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
      }
      else {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
    }
    if (bVar2) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 2;
    }
  }
  FUN_00414ad0(param_2,local_30[0]);
  FUN_00414480(local_40);
  FUN_00414480(local_30);
  return param_2;
}

