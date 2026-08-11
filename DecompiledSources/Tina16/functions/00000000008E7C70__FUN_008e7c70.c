/* Ghidra address: 008e7c70 */
/* Ghidra symbol: FUN_008e7c70 */


int FUN_008e7c70(undefined8 param_1,longlong param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + -4);
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    bVar1 = *(byte *)(param_2 + -1 + (longlong)param_3);
    if (bVar1 < 0x80) {
      iVar2 = 1;
    }
    else if ((bVar1 & 0xc0) == 0x80) {
      iVar2 = 1;
    }
    else {
      if ((bVar1 & 0x20) == 0) {
        iVar2 = 2;
      }
      else if ((bVar1 & 0x10) == 0) {
        iVar2 = 3;
      }
      else {
        if ((bVar1 & 8) != 0) {
          return 1;
        }
        iVar2 = 4;
      }
      iVar3 = 0;
      if (param_2 != 0) {
        iVar3 = *(int *)(param_2 + -4);
      }
      if (iVar3 < param_3 + iVar2 + -1) {
        iVar2 = 0;
        if (param_2 != 0) {
          iVar2 = *(int *)(param_2 + -4);
        }
        iVar2 = (iVar2 - param_3) + 1;
      }
      else {
        iVar3 = param_3 + 1;
        iVar4 = param_3 + iVar2 + -1;
        if (iVar3 <= iVar4) {
          iVar4 = (iVar4 - iVar3) + 1;
          do {
            if ((*(byte *)(param_2 + -1 + (longlong)iVar3) & 0xc0) != 0x80) {
              return 1;
            }
            iVar3 = iVar3 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
    }
  }
  return iVar2;
}

