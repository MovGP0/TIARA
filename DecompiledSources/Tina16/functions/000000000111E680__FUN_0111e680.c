/* Ghidra address: 0111e680 */
/* Ghidra symbol: FUN_0111e680 */


void FUN_0111e680(longlong *param_1,short param_2)

{
  short sVar1;
  char cVar2;
  int iVar3;
  
  if (*(char *)((longlong)param_1 + 0x162) == '\x05') {
    *(undefined1 *)((longlong)param_1 + 0x163) = 6;
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x163) = 9;
  }
  sVar1 = *(short *)(param_1[0x24] + (longlong)(int)param_1[0x2a] * 2);
  if (sVar1 == 0) {
    FUN_0111d280(param_1);
  }
  else if (sVar1 == 10) {
    FUN_0111d1f0(param_1);
  }
  else if (sVar1 == 0xd) {
    FUN_0111d0d0(param_1);
  }
  else if (*(char *)((longlong)param_1 + 0x162) == '\x05') {
    do {
      if (*(short *)(param_1[0x24] + (longlong)(int)param_1[0x2a] * 2) == (short)param_1[0x2c]) {
        *(int *)(param_1 + 0x2a) = (int)param_1[0x2a] + 1;
        *(undefined1 *)((longlong)param_1 + 0x162) = 2;
        return;
      }
      if (*(short *)(param_1[0x24] + (longlong)((int)param_1[0x2a] + 1) * 2) == (short)param_1[0x2c]
         ) {
        iVar3 = 1;
        while ((iVar3 < (int)param_1[0x2a] &&
               (*(short *)(param_1[0x24] + (longlong)((int)param_1[0x2a] - iVar3) * 2) == 0x5c))) {
          iVar3 = iVar3 + 1;
        }
        if (iVar3 % 2 == 1) {
          *(int *)(param_1 + 0x2a) = (int)param_1[0x2a] + 1;
        }
      }
      *(int *)(param_1 + 0x2a) = (int)param_1[0x2a] + 1;
      cVar2 = (**(code **)(*param_1 + 200))(param_1,(int)param_1[0x2a]);
    } while (cVar2 == '\0');
    if (*(short *)(param_1[0x24] + (longlong)((int)param_1[0x2a] + -1) * 2) != 0x5c) {
      *(undefined1 *)((longlong)param_1 + 0x162) = 2;
    }
  }
  else {
    do {
      if ((*(short *)(param_1[0x24] + (longlong)(int)param_1[0x2a] * 2) == 0x5c) &&
         (*(short *)(param_1[0x24] + (longlong)((int)param_1[0x2a] + 1) * 2) == param_2)) {
        iVar3 = 1;
        while ((iVar3 < (int)param_1[0x2a] &&
               (*(short *)(param_1[0x24] + (longlong)((int)param_1[0x2a] - iVar3) * 2) == 0x5c))) {
          iVar3 = iVar3 + 1;
        }
        if (iVar3 % 2 == 1) {
          *(int *)(param_1 + 0x2a) = (int)param_1[0x2a] + 2;
        }
      }
      iVar3 = (int)param_1[0x2a];
      if (((*(short *)(param_1[0x24] + (longlong)iVar3 * 2) == param_2) &&
          (*(short *)(param_1[0x24] + (longlong)(iVar3 + 1) * 2) == param_2)) &&
         (*(short *)(param_1[0x24] + (longlong)(iVar3 + 2) * 2) == param_2)) {
        *(int *)(param_1 + 0x2a) = (int)param_1[0x2a] + 3;
        *(undefined1 *)((longlong)param_1 + 0x162) = 2;
        return;
      }
      *(int *)(param_1 + 0x2a) = (int)param_1[0x2a] + 1;
      cVar2 = (**(code **)(*param_1 + 200))(param_1,(int)param_1[0x2a]);
    } while (cVar2 == '\0');
  }
  return;
}

