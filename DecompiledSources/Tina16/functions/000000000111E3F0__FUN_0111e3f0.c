/* Ghidra address: 0111e3f0 */
/* Ghidra symbol: FUN_0111e3f0 */


void FUN_0111e3f0(longlong param_1)

{
  short sVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x163) = 6;
  if ((*(short *)(*(longlong *)(param_1 + 0x120) + (longlong)(*(int *)(param_1 + 0x150) + 1) * 2) ==
       0x27) &&
     (*(short *)(*(longlong *)(param_1 + 0x120) + (longlong)(*(int *)(param_1 + 0x150) + 2) * 2) ==
      0x27)) {
    *(undefined1 *)(param_1 + 0x163) = 9;
    *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 3;
    *(undefined1 *)(param_1 + 0x162) = 3;
    while( true ) {
      sVar1 = *(short *)(*(longlong *)(param_1 + 0x120) + (longlong)*(int *)(param_1 + 0x150) * 2);
      if (sVar1 == 0) break;
      if (sVar1 == 10) {
        return;
      }
      if (sVar1 == 0xd) {
        return;
      }
      if (sVar1 == 0x27) {
        if ((*(short *)(*(longlong *)(param_1 + 0x120) +
                       (longlong)(*(int *)(param_1 + 0x150) + 1) * 2) == 0x27) &&
           (*(short *)(*(longlong *)(param_1 + 0x120) +
                      (longlong)(*(int *)(param_1 + 0x150) + 2) * 2) == 0x27)) {
          *(undefined1 *)(param_1 + 0x162) = 2;
          *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 3;
          return;
        }
        *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 1;
      }
      else if (sVar1 == 0x5c) {
        if (*(short *)(*(longlong *)(param_1 + 0x120) +
                      (longlong)(*(int *)(param_1 + 0x150) + 1) * 2) == 0x27) {
          iVar2 = 1;
          while ((iVar2 < *(int *)(param_1 + 0x150) &&
                 (*(short *)(*(longlong *)(param_1 + 0x120) +
                            (longlong)(*(int *)(param_1 + 0x150) - iVar2) * 2) == 0x5c))) {
            iVar2 = iVar2 + 1;
          }
          if (iVar2 % 2 == 1) {
            *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 1;
          }
        }
        *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 1;
      }
      else {
        *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 1;
      }
    }
  }
  else {
    do {
      iVar2 = *(int *)(param_1 + 0x150);
      sVar1 = *(short *)(*(longlong *)(param_1 + 0x120) + (longlong)iVar2 * 2);
      if ((sVar1 == 0) || ((sVar1 == 10 || (sVar1 == 0xd)))) {
        if (*(short *)(*(longlong *)(param_1 + 0x120) + (longlong)(iVar2 + -1) * 2) == 0x5c) {
          *(undefined2 *)(param_1 + 0x160) = 0x27;
          *(undefined1 *)(param_1 + 0x162) = 5;
        }
        break;
      }
      if (sVar1 == 0x5c) {
        if (*(short *)(*(longlong *)(param_1 + 0x120) + (longlong)(iVar2 + 1) * 2) == 0x27) {
          iVar2 = 1;
          while ((iVar2 < *(int *)(param_1 + 0x150) &&
                 (*(short *)(*(longlong *)(param_1 + 0x120) +
                            (longlong)(*(int *)(param_1 + 0x150) - iVar2) * 2) == 0x5c))) {
            iVar2 = iVar2 + 1;
          }
          if (iVar2 % 2 == 1) {
            *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 1;
          }
        }
        *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 1;
      }
      else {
        *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 1;
      }
    } while (*(short *)(*(longlong *)(param_1 + 0x120) + (longlong)*(int *)(param_1 + 0x150) * 2) !=
             0x27);
  }
  if (*(short *)(*(longlong *)(param_1 + 0x120) + (longlong)*(int *)(param_1 + 0x150) * 2) != 0) {
    *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 1;
  }
  return;
}

