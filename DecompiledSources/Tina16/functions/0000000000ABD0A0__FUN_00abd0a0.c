/* Ghidra address: 00abd0a0 */
/* Ghidra symbol: FUN_00abd0a0 */


int FUN_00abd0a0(longlong param_1,int param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = -1;
  if (*(int *)(param_1 + 0x6c) != 0) {
    iVar4 = -1;
    if (param_3 == '\0') {
      lVar1 = FUN_00ab4030(param_1,*(int *)(*(longlong *)(param_1 + 0xe8) + 0x10) + -1);
      if (param_2 <= ((*(int *)(lVar1 + 0xc) + *(int *)(param_1 + 0x6c)) - *(int *)(lVar1 + 8)) + -1
         ) {
        lVar1 = FUN_00ab4030(param_1,0);
        if (*(int *)(lVar1 + 0xc) < param_2) {
          iVar3 = *(int *)(*(longlong *)(param_1 + 0xe8) + 0x10) + -1;
          iVar4 = 1;
          lVar2 = lVar1;
          if (0 < iVar3) {
            do {
              lVar1 = FUN_00ab4030(param_1,iVar4);
              if ((*(int *)(lVar2 + 0xc) <= param_2) && (param_2 < *(int *)(lVar1 + 0xc))) {
                param_2 = param_2 - *(int *)(lVar2 + 0xc);
                if (param_2 + *(int *)(lVar2 + 8) < *(int *)(lVar1 + 8)) {
                  return *(int *)(param_1 + 0x68) + *(int *)(lVar2 + 8) + param_2;
                }
                return *(int *)(param_1 + 0x68) + *(int *)(lVar1 + 8);
              }
              iVar4 = iVar4 + 1;
              iVar3 = iVar3 + -1;
              lVar2 = lVar1;
            } while (iVar3 != 0);
          }
          iVar4 = *(int *)(param_1 + 0x68) + *(int *)(lVar1 + 8) + (param_2 - *(int *)(lVar1 + 0xc))
          ;
        }
        else {
          iVar4 = *(int *)(param_1 + 0x68);
        }
      }
    }
    else {
      lVar1 = FUN_00ab4030(param_1,0);
      if (*(int *)(lVar1 + 0xc) <= param_2) {
        lVar2 = FUN_00ab4030(param_1,*(int *)(*(longlong *)(param_1 + 0xe8) + 0x10) + -1);
        iVar4 = *(int *)(param_1 + 0x6c) + -1;
        if ((*(int *)(lVar2 + 0xc) + iVar4) - *(int *)(lVar2 + 8) < param_2) {
          iVar4 = *(int *)(param_1 + 0x68) + iVar4;
        }
        else {
          iVar3 = *(int *)(*(longlong *)(param_1 + 0xe8) + 0x10) + -1;
          iVar4 = 1;
          lVar2 = lVar1;
          if (0 < iVar3) {
            do {
              lVar1 = FUN_00ab4030(param_1,iVar4);
              if ((*(int *)(lVar2 + 0xc) <= param_2) && (param_2 < *(int *)(lVar1 + 0xc))) {
                param_2 = param_2 - *(int *)(lVar2 + 0xc);
                if (param_2 + *(int *)(lVar2 + 8) < *(int *)(lVar1 + 8)) {
                  return *(int *)(param_1 + 0x68) + *(int *)(lVar2 + 8) + param_2;
                }
                return *(int *)(param_1 + 0x68) + *(int *)(lVar1 + 8) + -1;
              }
              iVar4 = iVar4 + 1;
              iVar3 = iVar3 + -1;
              lVar2 = lVar1;
            } while (iVar3 != 0);
          }
          iVar4 = *(int *)(param_1 + 0x68) + *(int *)(lVar1 + 8) + (param_2 - *(int *)(lVar1 + 0xc))
          ;
        }
      }
    }
  }
  return iVar4;
}

