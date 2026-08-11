/* Ghidra address: 01c8cf20 */
/* Ghidra symbol: FUN_01c8cf20 */


char FUN_01c8cf20(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 == 0) {
    param_2 = *(longlong *)(param_1 + 0x2788);
  }
  cVar2 = '\0';
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x2780) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x2780),iVar4);
      if (param_2 == *(longlong *)(lVar3 + 0x10)) {
        if ((*(longlong *)(lVar3 + 0x20) == 0) ||
           (*(char *)(*(longlong *)(lVar3 + 0x20) + 0x70) == '\x01')) {
          if ((cVar2 == '\0') && (cVar2 = FUN_0199e300(*(undefined8 *)(lVar3 + 8)), cVar2 == '\0'))
          {
            cVar2 = '\0';
          }
          else {
            cVar2 = '\x01';
          }
        }
        else if (((*(longlong *)(lVar3 + 0x20) == 0) ||
                 (*(char *)(*(longlong *)(lVar3 + 0x20) + 0x70) != '\x02')) ||
                (*(longlong *)PTR_DAT_020057d0 == 0)) {
          if (((*(longlong *)(lVar3 + 0x20) == 0) ||
              ((cVar1 = *(char *)(*(longlong *)(lVar3 + 0x20) + 0x70), cVar1 != '\x03' &&
               (cVar1 != '\x04')))) || (*(longlong *)PTR_DAT_02005100 == 0)) {
            if (cVar2 == '\0') {
              cVar2 = '\0';
            }
            else {
              cVar2 = '\x01';
            }
          }
          else if ((cVar2 == '\0') &&
                  (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02005100 + 0x740) + 0x5e0) == '\0'))
          {
            cVar2 = '\0';
          }
          else {
            cVar2 = '\x01';
          }
        }
        else if ((cVar2 == '\0') &&
                (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_020057d0 + 0x860) + 0x5e0) == '\0')) {
          cVar2 = '\0';
        }
        else {
          cVar2 = '\x01';
        }
        if (cVar2 != '\0') {
          return cVar2;
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return cVar2;
}

