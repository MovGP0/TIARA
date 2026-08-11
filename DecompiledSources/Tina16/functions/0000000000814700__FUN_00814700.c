/* Ghidra address: 00814700 */
/* Ghidra symbol: FUN_00814700 */


int FUN_00814700(longlong param_1,undefined4 param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  
  if (*(int *)(param_1 + 8) == -1) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 8) + 1;
  }
  iVar5 = *(int *)(param_1 + 0x3c) + -1;
  bVar6 = (byte)param_2;
  iVar4 = -1;
  if (iVar3 <= iVar5) {
    iVar5 = (iVar5 - iVar3) + 1;
    do {
      if ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 8 + (longlong)iVar3 * 0x20) +
                    0x86) != '\0') &&
         (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 8 + (longlong)iVar3 * 0x20) + 0x81
                   ) != '\0')) {
        iVar4 = iVar3;
        if (bVar6 != 0) {
          *(int *)(param_1 + 8) = iVar3;
          FUN_00814f60(param_1);
        }
        break;
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
      iVar4 = -1;
    } while (iVar5 != 0);
  }
  if ((iVar4 == -1) && (cVar1 = FUN_00813df0(param_1), cVar1 == '\0')) {
    iVar3 = FUN_00814530(param_1,param_2);
    return iVar3;
  }
  if (((iVar4 != -1) || (cVar1 = FUN_00813df0(param_1), cVar1 == '\0')) ||
     (*(char *)(param_1 + 0xa8) != '\0')) {
    if ((iVar4 == -1) && (*(char *)(param_1 + 0xa8) != '\0')) {
      bVar2 = FUN_00813df0(param_1);
      if ((bVar6 & bVar2) == 0) {
        bVar2 = FUN_00813d90(param_1);
        if ((bVar6 & bVar2) == 0) {
          if (*(longlong *)(param_1 + 0xa0) == 0) {
            iVar4 = FUN_00814530(param_1,param_2);
          }
        }
        else {
          FUN_00813fb0(param_1);
          FUN_00817b20(param_1);
        }
      }
      else {
        FUN_00813fb0(param_1);
        FUN_00817c50(param_1);
      }
    }
    return iVar4;
  }
  if ((*(char *)(param_1 + 0xc2) == '\0') && (*(char *)(param_1 + 0x98) == '\0')) {
    *(undefined1 *)(param_1 + 0xc2) = 1;
    *(undefined1 *)(param_1 + 0x98) = 0;
    if (bVar6 == 0) {
      return -1;
    }
    FUN_00814f60(param_1);
    return -1;
  }
  cVar1 = FUN_00813d90(param_1);
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x98) == '\0')) {
    *(undefined1 *)(param_1 + 0xc2) = 0;
    *(undefined1 *)(param_1 + 0x98) = 1;
    if (bVar6 == 0) {
      return -1;
    }
    FUN_00814f60(param_1);
    return -1;
  }
  *(undefined1 *)(param_1 + 0xc2) = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  iVar3 = FUN_00814530(param_1,param_2);
  return iVar3;
}

