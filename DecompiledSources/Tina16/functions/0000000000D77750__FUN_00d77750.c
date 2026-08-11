/* Ghidra address: 00d77750 */
/* Ghidra symbol: FUN_00d77750 */


longlong FUN_00d77750(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 local_48 [24];
  undefined8 local_30;
  
  local_30 = *param_2;
  lVar5 = 0;
  if (*(char *)(param_1 + 0x8c) != '\0') {
    FUN_00d77cb0(param_1,local_48);
    cVar1 = FUN_004231e0(local_48,&local_30);
    if ((cVar1 != '\0') && ((*(char *)(param_1 + 0x79) != '\x16' || (DAT_01eceec4 != '\0')))) {
      iVar2 = FUN_00d77c90(param_1);
      if (iVar2 == 0) {
        FUN_00d77cb0(param_1,local_48);
        cVar1 = FUN_004231e0(local_48,&local_30);
        lVar5 = 0;
        if (cVar1 != '\0') {
          lVar5 = param_1;
        }
      }
      else {
        iVar2 = FUN_00d77c90();
        iVar6 = 0;
        if (-1 < iVar2 + -1) {
          do {
            uVar3 = FUN_00d77ca0(param_1,iVar6);
            lVar4 = FUN_00d77750(uVar3,&local_30);
            if (lVar4 != 0) {
              lVar5 = lVar4;
            }
            iVar6 = iVar6 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        if (lVar5 == 0) {
          lVar5 = param_1;
        }
      }
    }
  }
  return lVar5;
}

