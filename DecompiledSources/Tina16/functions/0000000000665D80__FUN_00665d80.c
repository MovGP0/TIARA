/* Ghidra address: 00665d80 */
/* Ghidra symbol: FUN_00665d80 */


int FUN_00665d80(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  iVar2 = 0;
  if (lVar1 != 0) {
    if (param_2 < 5) {
      if (param_2 == 4) {
        if (((*(uint *)(lVar1 + 0xa0) & 0x100000) == 0) ||
           (*(longlong *)(*(longlong *)(param_1 + 8) + 0x78) == 0)) {
          iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x2f0);
        }
        else {
          iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x2f0) - *(int *)(param_1 + 0x10);
        }
      }
      else if (param_2 == 0) {
        if (((*(uint *)(lVar1 + 0xa0) & 0x100000) == 0) ||
           (*(longlong *)(*(longlong *)(param_1 + 8) + 0x78) == 0)) {
          iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x90);
        }
        else {
          iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x90) - *(int *)(param_1 + 0x10);
        }
      }
      else if (param_2 == 1) {
        if (((*(uint *)(lVar1 + 0xa0) & 0x100000) == 0) ||
           (*(longlong *)(*(longlong *)(param_1 + 8) + 0x78) == 0)) {
          iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x94);
        }
        else {
          iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x94) - *(int *)(param_1 + 0x14);
        }
      }
      else if (param_2 == 2) {
        if (((*(uint *)(lVar1 + 0xa0) & 0x100000) == 0) ||
           (*(longlong *)(*(longlong *)(param_1 + 8) + 0x78) == 0)) {
          iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x98);
        }
        else {
          iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x98) + *(int *)(param_1 + 0x10) +
                  *(int *)(param_1 + 0x18);
        }
      }
      else if (param_2 == 3) {
        if (((*(uint *)(lVar1 + 0xa0) & 0x100000) == 0) ||
           (*(longlong *)(*(longlong *)(param_1 + 8) + 0x78) == 0)) {
          iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x9c);
        }
        else {
          iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x9c) + *(int *)(param_1 + 0x14) +
                  *(int *)(param_1 + 0x1c);
        }
      }
    }
    else if (param_2 == 5) {
      if (((*(uint *)(lVar1 + 0xa0) & 0x100000) == 0) ||
         (*(longlong *)(*(longlong *)(param_1 + 8) + 0x78) == 0)) {
        iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x2f4);
      }
      else {
        iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x2f4) - *(int *)(param_1 + 0x14);
      }
    }
    else if (param_2 == 6) {
      if (((*(uint *)(lVar1 + 0xa0) & 0x100000) == 0) ||
         (*(longlong *)(*(longlong *)(param_1 + 8) + 0x78) == 0)) {
        iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x2f8);
      }
      else {
        iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x2f8) + *(int *)(param_1 + 0x10) +
                *(int *)(param_1 + 0x18);
      }
    }
    else {
      iVar2 = 0;
      if (param_2 == 7) {
        if (((*(uint *)(lVar1 + 0xa0) & 0x100000) == 0) ||
           (*(longlong *)(*(longlong *)(param_1 + 8) + 0x78) == 0)) {
          iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x2fc);
        }
        else {
          iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x2fc) + *(int *)(param_1 + 0x14) +
                  *(int *)(param_1 + 0x1c);
        }
      }
    }
  }
  return iVar2;
}

