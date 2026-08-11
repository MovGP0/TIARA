/* Ghidra address: 01995660 */
/* Ghidra symbol: FUN_01995660 */


longlong FUN_01995660(longlong param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = 0;
  iVar2 = *(int *)(param_1 + 0x390);
  if ((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 0x10))) {
    uVar3 = FUN_00b94e60(param_1,iVar2);
    cVar1 = FUN_0198a580(uVar3);
    if (cVar1 == '\x04') {
      lVar4 = FUN_00b94e60(param_1,*(undefined4 *)(param_1 + 0x390));
      cVar1 = FUN_01d01970(lVar4);
      lVar6 = lVar4;
      if (cVar1 == '\0') {
        cVar1 = FUN_01d04d40(lVar4);
        if ((((cVar1 != '\0') && ((char)param_2 == '\0')) &&
            (*(char *)(*(longlong *)(lVar4 + 0x1a8) + 0x70) != '\x03')) &&
           ((((param_3 & 1) == 0 || (*(char *)(*(longlong *)(lVar4 + 0x1a8) + 0x70) != '\x02')) ||
            (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x458) + 0xb0))
                               (*(longlong **)(param_1 + 0x458),
                                *(undefined8 *)(*(longlong *)(lVar4 + 0x1a8) + 0x40)), iVar2 < 0))))
        {
          lVar6 = FUN_01d04ec0(lVar4,param_2,param_3);
          if (lVar6 == 0) {
            *(int *)(param_1 + 0x390) = *(int *)(param_1 + 0x390) + 1;
            while (*(int *)(param_1 + 0x390) < *(int *)(param_1 + 0x10)) {
              uVar3 = FUN_00b94e60(param_1,*(int *)(param_1 + 0x390));
              cVar1 = FUN_0198a580(uVar3);
              if (cVar1 == '\x04') break;
              *(int *)(param_1 + 0x390) = *(int *)(param_1 + 0x390) + 1;
            }
            lVar6 = FUN_01995660(param_1,param_2,param_3);
          }
          else {
            lVar5 = FUN_017ff620(lVar6);
            if (lVar5 == 0) {
              FUN_017ff5f0(lVar6,lVar4);
            }
          }
        }
      }
      else if ((((char)param_2 == '\0') && (lVar6 = FUN_01d013c0(lVar4,param_3), lVar6 != 0)) &&
              (lVar5 = FUN_017ff620(lVar6), lVar5 == 0)) {
        FUN_017ff5f0(lVar6,lVar4);
      }
    }
  }
  return lVar6;
}

