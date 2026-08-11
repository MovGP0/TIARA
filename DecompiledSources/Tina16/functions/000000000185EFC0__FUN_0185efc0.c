/* Ghidra address: 0185efc0 */
/* Ghidra symbol: FUN_0185efc0 */


void FUN_0185efc0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x48);
  if ((int)plVar2[0x1208] == 0) {
    *(undefined4 *)(plVar2 + 0x1208) = 1;
  }
  *(int *)(plVar2 + 0x1207) = (int)plVar2[0x1207] + 1;
  if (*(int *)(*plVar2 + 0xc) <= (int)plVar2[0x1207]) {
    *(undefined4 *)(plVar2 + 0x1207) = 0;
    if (*(char *)(*plVar2 + 0x15) == '\0') {
      *(int *)((longlong)plVar2 + 0x903c) = *(int *)((longlong)plVar2 + 0x903c) + 1;
    }
    else {
      iVar3 = (int)plVar2[0x1208];
      if (iVar3 == 1) {
        iVar3 = 8;
      }
      else if (iVar3 == 2) {
        iVar3 = 8;
      }
      else if (iVar3 == 3) {
        iVar3 = 4;
      }
      else if (iVar3 == 4) {
        iVar3 = 2;
      }
      else {
        FUN_01860ba0(0x15);
        iVar3 = 0;
      }
      *(int *)((longlong)plVar2 + 0x903c) = *(int *)((longlong)plVar2 + 0x903c) + iVar3;
      if (*(int *)(*plVar2 + 0x10) <= *(int *)((longlong)plVar2 + 0x903c)) {
        *(int *)(plVar2 + 0x1208) = (int)plVar2[0x1208] + 1;
        if ((int)plVar2[0x1208] == 5) {
          *(undefined4 *)(plVar2 + 0x1208) = 1;
        }
        iVar1 = (int)plVar2[0x1208];
        if (iVar1 == 1) {
          iVar3 = 0;
        }
        else if (iVar1 == 2) {
          iVar3 = 4;
        }
        else if (iVar1 == 3) {
          iVar3 = 2;
        }
        else if (iVar1 == 4) {
          iVar3 = 1;
        }
        else {
          FUN_01860ba0(0x15);
        }
        *(int *)((longlong)plVar2 + 0x903c) = iVar3;
      }
    }
  }
  return;
}

