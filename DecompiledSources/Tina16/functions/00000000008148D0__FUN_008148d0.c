/* Ghidra address: 008148d0 */
/* Ghidra symbol: FUN_008148d0 */


int FUN_008148d0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  
  if (*(int *)(param_1 + 8) == -1) {
    iVar3 = *(int *)(param_1 + 0x3c);
  }
  else {
    iVar3 = *(int *)(param_1 + 8) + -1;
  }
  bVar5 = (byte)param_2;
  iVar4 = -1;
  if (-1 < iVar3) {
    do {
      if ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 8 + (longlong)iVar3 * 0x20) +
                    0x86) != '\0') &&
         (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 8 + (longlong)iVar3 * 0x20) + 0x81
                   ) != '\0')) {
        iVar4 = iVar3;
        if (bVar5 != 0) {
          *(int *)(param_1 + 8) = iVar3;
          FUN_00814f60(param_1);
        }
        break;
      }
      iVar3 = iVar3 + -1;
      iVar4 = -1;
    } while (iVar3 != -1);
  }
  if ((iVar4 == -1) && (cVar1 = FUN_00813df0(param_1), cVar1 == '\0')) {
    iVar3 = FUN_008145b0(param_1,param_2);
    return iVar3;
  }
  if (((iVar4 != -1) || (cVar1 = FUN_00813df0(param_1), cVar1 == '\0')) ||
     (*(char *)(param_1 + 0xa8) != '\0')) {
    if ((iVar4 == -1) && (*(char *)(param_1 + 0xa8) != '\0')) {
      bVar2 = FUN_00813d90(param_1);
      if ((bVar5 & bVar2) == 0) {
        bVar2 = FUN_00813df0(param_1);
        if ((bVar5 & bVar2) == 0) {
          if (*(longlong *)(param_1 + 0xa0) == 0) {
            iVar4 = FUN_008145b0(param_1,param_2);
          }
        }
        else {
          FUN_00813fb0(param_1);
          FUN_00817c50(param_1);
        }
      }
      else {
        FUN_00813fb0(param_1);
        FUN_00817b20(param_1);
      }
    }
    return iVar4;
  }
  cVar1 = FUN_00813d90(param_1);
  if (((cVar1 != '\0') && (*(char *)(param_1 + 0x98) == '\0')) &&
     (*(char *)(param_1 + 0xc2) == '\0')) {
    *(undefined1 *)(param_1 + 0xc2) = 0;
    *(undefined1 *)(param_1 + 0x98) = 1;
    if (bVar5 == 0) {
      return -1;
    }
    FUN_00814f60(param_1);
    return -1;
  }
  if (*(char *)(param_1 + 0xc2) != '\0') {
    *(undefined1 *)(param_1 + 0xc2) = 0;
    *(undefined1 *)(param_1 + 0x98) = 0;
    iVar3 = FUN_008145b0(param_1,param_2);
    return iVar3;
  }
  *(undefined1 *)(param_1 + 0xc2) = 1;
  *(undefined1 *)(param_1 + 0x98) = 0;
  if (bVar5 == 0) {
    return -1;
  }
  FUN_00814f60(param_1);
  return -1;
}

