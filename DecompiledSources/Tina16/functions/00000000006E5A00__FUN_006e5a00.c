/* Ghidra address: 006e5a00 */
/* Ghidra symbol: FUN_006e5a00 */


void FUN_006e5a00(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  if (0 < *(int *)(*(longlong *)(param_1 + 0x568) + 0x10)) {
    uVar2 = FUN_006e5360(param_1,0);
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x568) + 0x10) + -1;
    if (-1 < iVar6) {
      do {
        lVar3 = FUN_006e5360(param_1,iVar6);
        if ((*(char *)(lVar3 + 0x38) == '\0') &&
           ((iVar6 == 0 || (*(char *)(param_1 + 0x560) != '\0')))) {
          if ((*(byte *)(param_1 + 0x561) & 4) != 0) {
            cVar1 = FUN_006ddf60(lVar3);
            if (cVar1 == '\0') goto LAB_006e5aa0;
          }
          if ((*(byte *)(param_1 + 0x561) & 8) != 0) {
            lVar4 = FUN_006dd390(lVar3);
            lVar5 = FUN_006dd390(uVar2);
            if (lVar4 != lVar5) goto LAB_006e5aa0;
          }
          cVar1 = FUN_006dd100(lVar3);
          if (cVar1 == '\0') {
            FUN_006dd1e0(lVar3,1);
          }
        }
        else {
LAB_006e5aa0:
          FUN_006e5480(param_1,iVar6);
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != -1);
    }
  }
  return;
}

